echo "Don't forget to update the path to your local winsdk"
/home/admin/Documents/Application/re/avcleaner-master/CMakeBuild/avcleaner.bin "$1" --strings=true --api=true -- -D "_WIN64" -D "_UNICODE" -D "UNICODE" -D "_WINSOCK_DEPRECATED_NO_WARNINGS"\
     "-I" "/usr/lib/llvm-9/include" \
     "-I" "/home/admin/Documents/Env/Include/source/" \
     "-I" "/usr/lib/llvm-9" \
     "-I" "/home/admin/Documents/Env/Include/MSVC_14.20.27508"\
     "-I" "/home/admin/Documents/Env/Include/10.0.17134.0/ucrt" \
     "-I" "/home/admin/Documents/Env/Include/10.0.17134.0/shared" \
     "-I" "/home/admin/Documents/Env/Include/10.0.17134.0/um" \
     "-I" "/home/admin/Documents/Env/Include/10.0.17134.0/winrt" \
     "-w" \
     "-fdebug-compilation-dir"\
     "-fno-use-cxa-atexit" "-fms-extensions" "-fms-compatibility" \
     "-fms-compatibility-version=19.15.26726" "-std=c++14" "-fdelayed-template-parsing" "-fobjc-runtime=gcc" "-fcxx-exceptions" "-fexceptions" "-fdiagnostics-show-option" "-fcolor-diagnostics" "-x" "c++" -ferror-limit=1900 -target x86_64-pc-windows-msvc19.15.26726\
       "-fsyntax-only" "-disable-free" "-disable-llvm-verifier" "-discard-value-names"\
       "-dwarf-column-info" "-debugger-tuning=gdb" "-momit-leaf-frame-pointer" "-v"
