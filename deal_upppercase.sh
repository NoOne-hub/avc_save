#!/bin/bash

workdir=.
modify=0

while [ $# -gt 0 ]
do
    case $1 in
    "--modify")
        modify=1
        ;;
    "--work-dir")
        shift
        workdir=$1
        ;;
    *)
        echo "USAGE: $0 [--work-dir <work-dir>] [--modify] [--help]"
        exit 1
    esac
    shift
done

echo "work-dir: $workdir, modify: $modify"

h_files=$(tempfile)
none_files=files_none
ok_files=files_one
more_files=files_more

>$none_files
>$ok_files
>$more_files

all_find=$(tempfile)
deal_files=$(tempfile)

grep -Prsh '^\s*#\s*include' $workdir | grep -Po '\b\w+\.h\b' | sort | uniq | while read hfile
do
    echo -n .
    if [ $(find $workdir -name "$hfile" | wc -l) -eq 0 ]
    then
        find $workdir -iname "$hfile" > $all_find
        cat $all_find | grep -Po '\b\w+\.h$' | sort | uniq > $h_files
        file_cnt=$(cat $h_files | wc -l)
        if [ $file_cnt -eq 0 ]
        then
            echo $hfile >> $none_files
        elif [ $file_cnt -eq 1 ]
        then
            newfile=$(cat $h_files)
            echo $hfile '->' $newfile >> $ok_files
            cat $all_find >> $ok_files
            # for ok, deal it
            if [ $modify -eq 1 ]
            then
                grep -Prsn "^\s*#\s*include.*\b$hfile\b" $workdir > $deal_files
                if [ $(cat $deal_files | wc -l) -gt 0 ]
                then
                    cat $deal_files | awk -F: '{print $1}' | xargs perl -i -pe "s/\b$hfile\b/$newfile/"
                    echo modified: >> $ok_files
                    cat $deal_files >> $ok_files
                fi
            fi
        else
            echo -- $hfile -- >> $more_files
            cat $all_find >> $more_files
        fi
    fi
done

echo Done!
echo the result in file: $none_files, $ok_files and $more_files
