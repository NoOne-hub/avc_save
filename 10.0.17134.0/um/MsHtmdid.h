 
//------------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
//------------------------------------------------------------------------------

//;begin_internal
/***********************************************************************************************

  This is a distributed SDK component - do not put any #includes or other directives that rely
  upon files not dropped. If in doubt - build iedev

  If you add comments please enclose in a ;begin_internal, ;end_internal block - such as this one!

 ***********************************************************************************************/
//;end_internal

//;begin_internal
#ifndef __COREDISP_H__
#define __COREDISP_H__
//;end_internal

//;begin_internal
//
// The following dispid must be the smallest possible dispid so that it
// always ends up first in our attr array.
// It does not need to be exposed to the outside world
#define DISPID_INTERNAL_CELEMENTCLASSCACHE  MINLONG
//;end_internal


#define DISPID_XOBJ_MIN                 0x80010000
#define DISPID_XOBJ_MAX                 0x8001FFFF
#define DISPID_XOBJ_BASE                DISPID_XOBJ_MIN
#define DISPID_HTMLOBJECT               (DISPID_XOBJ_BASE   + 500)  //  500 =  1F4
#define DISPID_ELEMENT                  (DISPID_HTMLOBJECT  + 500)  // 1000 =  3E8
#define DISPID_SITE                     (DISPID_ELEMENT     + 1000) // 2000 =  7D0
#define DISPID_OBJECT                   (DISPID_SITE        + 1000) // 3000 =  BB8
#define DISPID_STYLE                    (DISPID_OBJECT      + 1000) // 4000 =  FA0
#define DISPID_BASE_STYLE               (DISPID_STYLE       + 500)  // 4500 = 1194
#define DISPID_ATTRS                    (DISPID_BASE_STYLE  + 500)  // 5000 = 1388
#define DISPID_EVENTS                   (DISPID_ATTRS       + 1000) // 6000 = 1770
#define DISPID_XOBJ_EXPANDO             (DISPID_EVENTS      + 1000) // 7000 = 1B58
#define DISPID_XOBJ_ORDINAL             (DISPID_XOBJ_EXPANDO+ 1000) // 8000 = 1F40

//;begin_internal
// Expandos for ActiveX controls, note these are very limited compared to
// normal expandos on an element.

#define DISPID_ACTIVEX_EXPANDO_BASE      DISPID_XOBJ_EXPANDO
#define DISPID_ACTIVEX_EXPANDO_MAX       (DISPID_ACTIVEX_EXPANDO_BASE + 999)

#define DISPID_OBJECT_ORDINAL_BASE       DISPID_XOBJ_ORDINAL
#define DISPID_OBJECT_ORDINAL_MAX       (DISPID_OBJECT_ORDINAL_BASE + 999)

#define DISPID_COLLECTION_MIN           1000000
#define DISPID_COLLECTION_MAX           2999999

// Divide collection dispid space into "named member" half and "ordinal access" half
// for stylesheets collection.
#define DISPID_STYLESHEETSCOLLECTION_NAMED_BASE        (DISPID_COLLECTION_MIN)
#define DISPID_STYLESHEETSCOLLECTION_NAMED_MAX         (DISPID_COLLECTION_MIN+((DISPID_COLLECTION_MAX-DISPID_COLLECTION_MIN)/2))
#define DISPID_STYLESHEETSCOLLECTION_ORDINAL_BASE      (DISPID_STYLESHEETSCOLLECTION_NAMED_MAX+1)
#define DISPID_STYLESHEETSCOLLECTION_ORDINAL_MAX       (DISPID_COLLECTION_MAX)

// DISPID range for expandos not associated with an ActiveX control
#define DISPID_EXPANDO_BASE             3000000
#define DISPID_EXPANDO_MAX              3999999

#define IsStandardDispid(dispid)        (dispid <= 0)
#define IsExpandoDispid(dispid)         (DISPID_EXPANDO_BASE <= dispid && dispid <= DISPID_EXPANDO_MAX)

#define DISPID_EVENTHOOK_SENSITIVE_BASE   4000000
#define DISPID_EVENTHOOK_SENSITIVE_MAX    4499999
#define DISPID_EVENTHOOK_INSENSITIVE_BASE 4500000
#define DISPID_EVENTHOOK_INSENSITIVE_MAX  4999999

#define DISPID_PEER_HOLDER_BASE         5000000

#define IsPeerDispid(dispid)            (DISPID_PEER_HOLDER_BASE <= dispid)

// The DISPID range used by the CCanvasPixelArray needs to be large to because it represents
// the byte array of an arbitrarily large bitmap.  We could go up to LONG_MAX, but there is
// no need to push to the boundary yet.
#define DISPID_CANVASPIXELARRAY_BASE    5000000
#define DISPID_CANVASPIXELARRAY_MAX     2000000000


//;end_internal

//;begin_internal
//
// IE 4 dispids that no longer exist
//
//;end_internal
#define DISPID_HTMLOPTIONBUTTONELEMENTEVENTS_ONCHANGE       DISPID_HTMLINPUTTEXTELEMENTEVENTS_ONCHANGE

//;begin_internal
//
// Standard control properties
//
//;end_internal

//;begin_internal
//;QUESTION: rgardner - why do we use these names ???
//;end_internal
#define DISPID_CommonCtrl_FONTNAME        1
#define DISPID_CommonCtrl_FONTSIZE        2
#define DISPID_CommonCtrl_FONTBOLD        3
#define DISPID_CommonCtrl_FONTITAL        4
#define DISPID_CommonCtrl_FONTUNDER       5
#define DISPID_CommonCtrl_FONTSTRIKE      6
#define DISPID_CommonCtrl_FONTWEIGHT      7
#define DISPID_CommonCtrl_FONTCHARSET     8
#define DISPID_CommonCtrl_FONTSUPERSCRIPT 9
#define DISPID_CommonCtrl_FONTSUBSCRIPT   10

// Data Binding DISPID's
#define DISPID_MSDATASRCINTERFACE       (-3900)
#define DISPID_ADVISEDATASRCCHANGEEVENT (-3901)


//;begin_internal
// DISPID values for HTML Dialogs files per interface
//;end_internal

#define DISPID_HTMLDLG                          25000
#define DISPID_HTMLDLGMODEL                     26000

//;begin_internal
// DISPID values for HTML Popup files per interface
//;end_internal

#define DISPID_HTMLPOPUP                        27000

//;begin_internal
// DISPID values for HTML Application files per interface
//;end_internal

#define DISPID_HTMLAPP                          5000

//;begin_internal
//----------------------------------------------------------------------------
//
//  Semi-standard x-object properties.
//
//  These values match those used by VB and are for the benefit of controls
//  with hard coded knowledge of VB.
//
//----------------------------------------------------------------------------
//;end_internal

#define STDPROPID_XOBJ_NAME                 (DISPID_XOBJ_BASE + 0x0)
#define STDPROPID_XOBJ_INDEX                (DISPID_XOBJ_BASE + 0x1)
//;begin_internal
// for IE3 compatibility

#define STDPROPID_IE3XOBJ_OBJECTALIGN     (DISPID_XOBJ_BASE + 0x1)

// STDPROPID_XOBJ_BASEHREF is a constant used by IE3
//;end_internal
#define STDPROPID_XOBJ_BASEHREF             (DISPID_XOBJ_BASE + 0x2)
#define STDPROPID_XOBJ_LEFT                 (DISPID_XOBJ_BASE + 0x3)
#define STDPROPID_XOBJ_TOP                  (DISPID_XOBJ_BASE + 0x4)
#define STDPROPID_XOBJ_WIDTH                (DISPID_XOBJ_BASE + 0x5)
#define STDPROPID_XOBJ_HEIGHT               (DISPID_XOBJ_BASE + 0x6)
#define STDPROPID_XOBJ_VISIBLE              (DISPID_XOBJ_BASE + 0x7)
#define STDPROPID_XOBJ_PARENT               (DISPID_XOBJ_BASE + 0x8)
#define STDPROPID_XOBJ_DRAGMODE             (DISPID_XOBJ_BASE + 0x9)
#define STDPROPID_XOBJ_DRAGICON             (DISPID_XOBJ_BASE + 0xA)
#define STDPROPID_XOBJ_TAG                  (DISPID_XOBJ_BASE + 0xB)
#define STDPROPID_XOBJ_TABSTOP              (DISPID_XOBJ_BASE + 0xE)
#define STDPROPID_XOBJ_TABINDEX             (DISPID_XOBJ_BASE + 0xF)
#define STDPROPID_XOBJ_HELPCONTEXTID        (DISPID_XOBJ_BASE + 0x32)
#define STDPROPID_XOBJ_DEFAULT              (DISPID_XOBJ_BASE + 0x37)
#define STDPROPID_XOBJ_CANCEL               (DISPID_XOBJ_BASE + 0x38)
#define STDPROPID_XOBJ_LEFTNORUN            (DISPID_XOBJ_BASE + 0x39)
#define STDPROPID_XOBJ_TOPNORUN             (DISPID_XOBJ_BASE + 0x3A)
#define STDPROPID_XOBJ_ALIGNPERSIST         (DISPID_XOBJ_BASE + 0x3C)
#define STDPROPID_XOBJ_LINKTIMEOUT          (DISPID_XOBJ_BASE + 0x3D)
#define STDPROPID_XOBJ_LINKTOPIC            (DISPID_XOBJ_BASE + 0x3E)
#define STDPROPID_XOBJ_LINKITEM             (DISPID_XOBJ_BASE + 0x3F)
#define STDPROPID_XOBJ_LINKMODE             (DISPID_XOBJ_BASE + 0x40)
#define STDPROPID_XOBJ_DATACHANGED          (DISPID_XOBJ_BASE + 0x41)
#define STDPROPID_XOBJ_DATAFIELD            (DISPID_XOBJ_BASE + 0x42)
#define STDPROPID_XOBJ_DATASOURCE           (DISPID_XOBJ_BASE + 0x43)
#define STDPROPID_XOBJ_WHATSTHISHELPID      (DISPID_XOBJ_BASE + 0x44)
#define STDPROPID_XOBJ_CONTROLTIPTEXT       (DISPID_XOBJ_BASE + 0x45)
#define STDPROPID_XOBJ_STATUSBARTEXT        (DISPID_XOBJ_BASE + 0x46)
#define STDPROPID_XOBJ_APPLICATION          (DISPID_XOBJ_BASE + 0x47)
#define STDPROPID_XOBJ_BLOCKALIGN           (DISPID_XOBJ_BASE + 0x48)
#define STDPROPID_XOBJ_CONTROLALIGN         (DISPID_XOBJ_BASE + 0x49)
#define STDPROPID_XOBJ_STYLE                (DISPID_XOBJ_BASE + 0x4A)
#define STDPROPID_XOBJ_COUNT                (DISPID_XOBJ_BASE + 0x4B)
#define STDPROPID_XOBJ_DISABLED             (DISPID_XOBJ_BASE + 0x4C)
#define STDPROPID_XOBJ_RIGHT                (DISPID_XOBJ_BASE + 0x4D)
#define STDPROPID_XOBJ_BOTTOM               (DISPID_XOBJ_BASE + 0x4E)
#define STDPROPID_XOBJ_GETSVGDOCUMENT       (DISPID_XOBJ_BASE + 0x4F)

//;begin_internal
//----------------------------------------------------------------------------
//
//  Semi-standard x-object properties.
//
//  These are events that are fired for all sites
//----------------------------------------------------------------------------
//;end_internal

#define STDDISPID_XOBJ_ONBLUR                           (DISPID_XOBJ_BASE)
#define STDDISPID_XOBJ_ONFOCUS                          (DISPID_XOBJ_BASE + 1)
#define STDDISPID_XOBJ_BEFOREUPDATE                     (DISPID_XOBJ_BASE + 4)
#define STDDISPID_XOBJ_AFTERUPDATE                      (DISPID_XOBJ_BASE + 5)
#define STDDISPID_XOBJ_ONROWEXIT                        (DISPID_XOBJ_BASE + 6)
#define STDDISPID_XOBJ_ONROWENTER                       (DISPID_XOBJ_BASE + 7)
#define STDDISPID_XOBJ_ONMOUSEOVER                      (DISPID_XOBJ_BASE + 8)
#define STDDISPID_XOBJ_ONMOUSEOUT                       (DISPID_XOBJ_BASE + 9)
#define STDDISPID_XOBJ_ONHELP                           (DISPID_XOBJ_BASE + 10)
#define STDDISPID_XOBJ_ONDRAGSTART                      (DISPID_XOBJ_BASE + 11)
#define STDDISPID_XOBJ_ONSELECTSTART                    (DISPID_XOBJ_BASE + 12)
#define STDDISPID_XOBJ_ERRORUPDATE                      (DISPID_XOBJ_BASE + 13)
#define STDDISPID_XOBJ_ONDATASETCHANGED                 (DISPID_XOBJ_BASE + 14)
#define STDDISPID_XOBJ_ONDATAAVAILABLE                  (DISPID_XOBJ_BASE + 15)
#define STDDISPID_XOBJ_ONDATASETCOMPLETE                (DISPID_XOBJ_BASE + 16)
#define STDDISPID_XOBJ_ONFILTER                         (DISPID_XOBJ_BASE + 17)
#define STDDISPID_XOBJ_ONLOSECAPTURE                    (DISPID_XOBJ_BASE + 18)
#define STDDISPID_XOBJ_ONPROPERTYCHANGE                 (DISPID_XOBJ_BASE + 19)
#define STDDISPID_XOBJ_ONDRAG                           (DISPID_XOBJ_BASE + 20)
#define STDDISPID_XOBJ_ONDRAGEND                        (DISPID_XOBJ_BASE + 21)
#define STDDISPID_XOBJ_ONDRAGENTER                      (DISPID_XOBJ_BASE + 22)
#define STDDISPID_XOBJ_ONDRAGOVER                       (DISPID_XOBJ_BASE + 23)
#define STDDISPID_XOBJ_ONDRAGLEAVE                      (DISPID_XOBJ_BASE + 24)
#define STDDISPID_XOBJ_ONDROP                           (DISPID_XOBJ_BASE + 25)
#define STDDISPID_XOBJ_ONCUT                            (DISPID_XOBJ_BASE + 26)
#define STDDISPID_XOBJ_ONCOPY                           (DISPID_XOBJ_BASE + 27)
#define STDDISPID_XOBJ_ONPASTE                          (DISPID_XOBJ_BASE + 28)
#define STDDISPID_XOBJ_ONBEFORECUT                      (DISPID_XOBJ_BASE + 29)
#define STDDISPID_XOBJ_ONBEFORECOPY                     (DISPID_XOBJ_BASE + 30)
#define STDDISPID_XOBJ_ONBEFOREPASTE                    (DISPID_XOBJ_BASE + 31)
#define STDDISPID_XOBJ_ONROWSDELETE                     (DISPID_XOBJ_BASE + 32)
#define STDDISPID_XOBJ_ONROWSINSERTED                   (DISPID_XOBJ_BASE + 33)
#define STDDISPID_XOBJ_ONCELLCHANGE                     (DISPID_XOBJ_BASE + 34)

//;begin_internal
//----------------------------------------------------------------------------
//
//  Base DISPIDs for each class.
//
//  Object and its base classes must use ids in the reserved x-object range.
//
//----------------------------------------------------------------------------
//;end_internal

#define DISPID_NORMAL_FIRST                     1000

//;begin_internal
// Basing the DISPID range past any special DISPID's used by the code.
//;end_internal
#define DISPID_IE8_NORMAL_FIRST                 (DISPID_NORMAL_FIRST+150)
#define DISPID_ANCHOR                           DISPID_NORMAL_FIRST
#define DISPID_BLOCK                            DISPID_NORMAL_FIRST
#define DISPID_BODY                             (DISPID_TEXTSITE + 1000)
#define DISPID_BR                               DISPID_NORMAL_FIRST
#define DISPID_BGSOUND                          DISPID_NORMAL_FIRST
#define DISPID_DD                               DISPID_NORMAL_FIRST
#define DISPID_DIR                              DISPID_NORMAL_FIRST
#define DISPID_DIV                              DISPID_NORMAL_FIRST
#define DISPID_DL                               DISPID_NORMAL_FIRST
#define DISPID_DT                               DISPID_NORMAL_FIRST
#define DISPID_EFONT                            DISPID_NORMAL_FIRST
#define DISPID_FORM                             DISPID_NORMAL_FIRST
#define DISPID_HEADER                           DISPID_NORMAL_FIRST
#define DISPID_HEDELEMS                         DISPID_NORMAL_FIRST
#define DISPID_HR                               DISPID_NORMAL_FIRST
#define DISPID_LABEL                            DISPID_NORMAL_FIRST
#define DISPID_LI                               DISPID_NORMAL_FIRST
#define DISPID_IMGBASE                          DISPID_NORMAL_FIRST
#define DISPID_IMG                              (DISPID_IMGBASE + 1000)
#define DISPID_INPUTIMAGE                       (DISPID_IMGBASE + 1000)
#define DISPID_INPUT                            (DISPID_TEXTSITE + 1000)
#define DISPID_INPUTTEXTBASE                    (DISPID_INPUT+1000)
#define DISPID_INPUTTEXT                        (DISPID_INPUTTEXTBASE+1000)
#define DISPID_MENU                             DISPID_NORMAL_FIRST
#define DISPID_OL                               DISPID_NORMAL_FIRST
#define DISPID_PARA                             DISPID_NORMAL_FIRST
#define DISPID_SELECT                           DISPID_NORMAL_FIRST
#define DISPID_SELECTOBJ                        DISPID_NORMAL_FIRST
#define DISPID_TABLE                            DISPID_NORMAL_FIRST
#define DISPID_TEXTSITE                         DISPID_NORMAL_FIRST
#define DISPID_TEXTAREA                         (DISPID_INPUTTEXT + 1000)
#define DISPID_MARQUEE                          (DISPID_TEXTAREA + 1000)
#define DISPID_RICHTEXT                         (DISPID_MARQUEE + 1000)
#define DISPID_BUTTON                           (DISPID_RICHTEXT + 1000)
#define DISPID_UL                               DISPID_NORMAL_FIRST
#define DISPID_PHRASE                           DISPID_NORMAL_FIRST
#define DISPID_UNKNOWNPDL                       DISPID_NORMAL_FIRST
#define DISPID_COMMENTPDL                       DISPID_NORMAL_FIRST
#define DISPID_TABLECELL                        (DISPID_TEXTSITE + 1000)
#define DISPID_RANGE                            DISPID_NORMAL_FIRST
#define DISPID_SELECTION                        DISPID_NORMAL_FIRST
#define DISPID_OPTION                           DISPID_NORMAL_FIRST
#define DISPID_1D                               (DISPID_TEXTSITE + 1000)
#define DISPID_MAP                              DISPID_NORMAL_FIRST
#define DISPID_AREA                             DISPID_NORMAL_FIRST
#define DISPID_PARAM                            DISPID_NORMAL_FIRST
#define DISPID_TABLESECTION                     DISPID_NORMAL_FIRST
#define DISPID_TABLEROW                         DISPID_NORMAL_FIRST
#define DISPID_TABLECOL                         DISPID_NORMAL_FIRST
#define DISPID_SCRIPT                           DISPID_NORMAL_FIRST
#define DISPID_STYLESHEET                       DISPID_NORMAL_FIRST
#define DISPID_STYLERULE                        DISPID_NORMAL_FIRST
#define DISPID_BASE_STYLERULE                   (DISPID_STYLERULE + 100)
#define DISPID_STYLEPAGE                        DISPID_NORMAL_FIRST
#define DISPID_STYLESHEETS_COL                  DISPID_NORMAL_FIRST
#define DISPID_STYLERULES_COL                   DISPID_NORMAL_FIRST
#define DISPID_STYLEPAGES_COL                   DISPID_NORMAL_FIRST
#define DISPID_MEDIALIST                        DISPID_NORMAL_FIRST
#define DISPID_MIMETYPES_COL                    DISPID_NORMAL_FIRST
#define DISPID_PLUGINS_COL                      DISPID_NORMAL_FIRST
#define DISPID_2D                               DISPID_NORMAL_FIRST
#define DISPID_OMWINDOW                         DISPID_NORMAL_FIRST
#define DISPID_EVENTOBJ                         DISPID_NORMAL_FIRST
#define DISPID_PERSISTDATA                      DISPID_NORMAL_FIRST
#define DISPID_OLESITE                          DISPID_NORMAL_FIRST
#define DISPID_FRAMESET                         DISPID_NORMAL_FIRST
#define DISPID_LINK                             DISPID_NORMAL_FIRST
#define DISPID_STYLEELEMENT                     DISPID_NORMAL_FIRST
#define DISPID_FILTERS                          DISPID_NORMAL_FIRST
#define DISPID_TABLESECTION                     DISPID_NORMAL_FIRST
#define DISPID_OMRECT                           DISPID_NORMAL_FIRST
#define DISPID_DOMATTRIBUTE                     DISPID_NORMAL_FIRST
#define DISPID_DOMTEXTNODE                      DISPID_NORMAL_FIRST
#define DISPID_GENERIC                          DISPID_NORMAL_FIRST
#define DISPID_URN_COLL                         DISPID_NORMAL_FIRST
#define DISPID_NAMESPACE_COLLECTION             DISPID_NORMAL_FIRST
#define DISPID_NAMESPACE                        DISPID_NORMAL_FIRST
#define DISPID_TAGNAMES_COLLECTION              DISPID_NORMAL_FIRST
#define DISPID_XMLHTTPREQUEST                   DISPID_NORMAL_FIRST
#define DISPID_XMLSERIALIZER                    DISPID_NORMAL_FIRST
#define DISPID_DOMPARSER                        DISPID_NORMAL_FIRST
#define DISPID_DOCUMENTCOMPATIBLEINFO_COLLECTION       DISPID_NORMAL_FIRST
#define DISPID_DOCUMENTCOMPATIBLEINFO           DISPID_NORMAL_FIRST
#define DISPID_XDOMAINREQUEST                   DISPID_NORMAL_FIRST
#define DISPID_DOMSTORAGEITEM                   DISPID_NORMAL_FIRST
#define DISPID_DOMSTORAGE                       DISPID_NORMAL_FIRST
#define DISPID_DOMSTORAGELIST                   DISPID_NORMAL_FIRST
#define DISPID_RULESAPPLIED                     DISPID_NORMAL_FIRST
#define DISPID_RULESAPPLIED_COLLECTION          DISPID_NORMAL_FIRST
#define DISPID_STYLESHEETRULESAPPLIED_COLLECTION       DISPID_NORMAL_FIRST
#define DISPID_PROCESSINGINSTRUCTION            DISPID_NORMAL_FIRST
#define DISPID_MSPOINTERPOINT                   DISPID_NORMAL_FIRST
#define DISPID_WEBSOCKET                        DISPID_NORMAL_FIRST
#define DISPID_APPLICATIONCACHE                 DISPID_NORMAL_FIRST

#define DISPID_DOMEVENT                         DISPID_NORMAL_FIRST
#define DISPID_DOMUIEVENT                       (DISPID_DOMEVENT + 25)
#define DISPID_DOMMOUSEEVENT                    (DISPID_DOMUIEVENT + 25)
#define DISPID_DOMMOUSEWHEELEVENT               (DISPID_DOMMOUSEEVENT + 25)
#define DISPID_DOMWHEELEVENT                    (DISPID_DOMMOUSEWHEELEVENT + 25)
#define DISPID_DOMTEXTEVENT                     (DISPID_DOMWHEELEVENT + 25)
#define DISPID_DOMKEYBOARDEVENT                 (DISPID_DOMTEXTEVENT + 25)
#define DISPID_DOMCOMPOSITIONEVENT              (DISPID_DOMKEYBOARDEVENT + 25)
#define DISPID_DOMCUSTOMEVENT                   (DISPID_DOMCOMPOSITIONEVENT + 25)
#define DISPID_DOMMUTATIONEVENT                 (DISPID_DOMCUSTOMEVENT + 25)
#define DISPID_DOMFOCUSEVENT                    (DISPID_DOMMUTATIONEVENT + 25)
#define DISPID_SVGZOOMEVENT                     (DISPID_DOMFOCUSEVENT + 25)
#define DISPID_DOMSITEMODEEVENT                 (DISPID_SVGZOOMEVENT + 25)
#define DISPID_DOMMESSAGEEVENT                  (DISPID_DOMSITEMODEEVENT + 25)
#define DISPID_DOMSTORAGEEVENT                  (DISPID_DOMMESSAGEEVENT + 25)
#define DISPID_DOMBEFOREUNLOADEVENT             (DISPID_DOMSTORAGEEVENT + 25)
#define DISPID_DOMDRAGEVENT                     (DISPID_DOMBEFOREUNLOADEVENT + 25)
#define DISPID_DOMMSPOINTEREVENT                (DISPID_DOMDRAGEVENT + 25)
#define DISPID_DOMMSGESTUREEVENT                (DISPID_DOMMSPOINTEREVENT + 25)
#define DISPID_DOMMSTRANSITIONEVENT             (DISPID_DOMMSGESTUREEVENT + 25)
#define DISPID_DOMMSANIMATIONEVENT              (DISPID_DOMMSTRANSITIONEVENT + 25)
#define DISPID_DOMMSMANIPULATIONEVENT           (DISPID_DOMMSANIMATIONEVENT + 25)
#define DISPID_DOMPROGRESSEVENT                 (DISPID_DOMMSMANIPULATIONEVENT + 25)
#define DISPID_DOMCLOSEEVENT                    (DISPID_DOMMSANIMATIONEVENT + 25)

#define DISPID_HTMLDOCUMENT                     DISPID_NORMAL_FIRST
#define DISPID_OMDOCUMENT                       DISPID_NORMAL_FIRST
#define DISPID_DATATRANSFER                     DISPID_NORMAL_FIRST
#define DISPID_XMLDECL                          DISPID_NORMAL_FIRST
#define DISPID_DOCFRAG                          DISPID_NORMAL_FIRST
#define DISPID_ILINEINFO                        DISPID_NORMAL_FIRST
#define DISPID_IHTMLCOMPUTEDSTYLE               DISPID_NORMAL_FIRST
#define DISPID_DOMRANGE                         DISPID_NORMAL_FIRST
#define DISPID_HTMLSELECTION                    DISPID_NORMAL_FIRST
#define DISPID_DOMTRAVERSAL                     DISPID_NORMAL_FIRST
#define DISPID_DOMEXCEPTION                     DISPID_NORMAL_FIRST
#define DISPID_SVGEXCEPTION                     DISPID_NORMAL_FIRST
#define DISPID_RANGEEXCEPTION                   DISPID_NORMAL_FIRST
#define DISPID_EVENTEXCEPTION                   DISPID_NORMAL_FIRST
#define DISPID_DOCUMENTTYPE                     DISPID_NORMAL_FIRST

#define DISPID_MEDIA                            DISPID_NORMAL_FIRST
#define DISPID_MEDIAERROR                       DISPID_NORMAL_FIRST
#define DISPID_TIMERANGES                       DISPID_NORMAL_FIRST
#define DISPID_SOURCE                           DISPID_NORMAL_FIRST
#define DISPID_TRACK                            DISPID_NORMAL_FIRST
#define DISPID_AUDIO                            DISPID_MEDIA+50
#define DISPID_VIDEO                            DISPID_MEDIA+50

#define DISPID_STYLEMEDIA                       DISPID_NORMAL_FIRST

#define DISPID_PROGRESS                         DISPID_NORMAL_FIRST

#define DISPID_PLAYTO                           DISPID_NORMAL_FIRST
#define DISPID_PLAYTODEVICE                     DISPID_NORMAL_FIRST

//;begin_internal
    // Special case for compatability with IE4 -> therefore the 1:
//;end_internal
#define DISPID_WINDOW                           1
#define DISPID_SCREEN                           DISPID_NORMAL_FIRST
#define DISPID_FRAMESCOLLECTION                 DISPID_NORMAL_FIRST
#define DISPID_HISTORY                          1
#define DISPID_LOCATION                         1
#define DISPID_NAVIGATOR                        1
#define DISPID_CLIENTCAPS                       1
#define DISPID_TEMPLATE_PRINTER                 1
#define DISPID_PRINTMANAGER_TEMPLATE_PRINTER    (DISPID_TEMPLATE_PRINTER+500)
#define DISPID_COLLECTION                       (DISPID_NORMAL_FIRST+500)
#define DISPID_OPTIONS_COL                      (DISPID_NORMAL_FIRST+500)

#define DISPID_CHECKBOX                         DISPID_NORMAL_FIRST
#define DISPID_RADIO                            (DISPID_CHECKBOX + 1000)

#define DISPID_FRAMESITE                        (DISPID_SITE        + 1000)
#define DISPID_FRAME                            (DISPID_FRAMESITE   + 1000)
#define DISPID_IFRAME                           (DISPID_FRAMESITE   + 1000)

#define WEBOC_DISPIDBASE                        (DISPID_FRAMESITE   + 2000)
#define WEBOC_DISPIDMAX                         (WEBOC_DISPIDBASE   +  100)

#define DISPID_PROTECTEDELEMENT                 DISPID_NORMAL_FIRST
#define DISPID_DEFAULTS                         DISPID_NORMAL_FIRST
#define DISPID_MARKUP                           DISPID_NORMAL_FIRST
#define DISPID_DOMIMPLEMENTATION                DISPID_NORMAL_FIRST

#define DISPID_MEDIAQUERY                       DISPID_NORMAL_FIRST
#define DISPID_HTML5ATTRIBUTESELECTORCI         DISPID_NORMAL_FIRST

// DISPID_SVGMIXINS is for members defined on CSVGElement
//      but not exposed through PDL are stored.
//;begin_internal
#define DISPID_SVGMIXINS                        DISPID_NORMAL_FIRST
//;end_internal

// Public members of CSVGElement start at DISPID_SVGELEMENT
#define DISPID_SVGELEMENT                       (DISPID_SVGMIXINS + 30)
// DISPID_SVGELEMENT_BASE is used as the base dispid for types that inherit from CSVGElement.
//      It avoids overlap of dispids for derived types
#define DISPID_SVGELEMENT_BASE                  (DISPID_SVGELEMENT + 20)

#define DISPID_SVGAELEMENT                      DISPID_SVGELEMENT_BASE
#define DISPID_SVGALTGLYPHDEFELEMENT            DISPID_SVGELEMENT_BASE
#define DISPID_SVGALTGLYPHELEMENT               DISPID_SVGELEMENT_BASE
#define DISPID_SVGALTGLYPHITEMELEMENT           DISPID_SVGELEMENT_BASE
#define DISPID_SVGANGLE                         DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATECOLORELEMENT           DISPID_SVGELEMENT_BASE
#define DISPID_SVGANIMATEDANGLE                 DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDBOOLEAN               DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDENUMERATION           DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDINTEGER               DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDLENGTH                DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDLENGTHLIST            DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDNUMBER                DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDNUMBERLIST            DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDPOINTS                DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDRECT                  DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDSTRING                DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGANIMATEMOTIONELEMENT          DISPID_SVGELEMENT_BASE
#define DISPID_SVGANIMATETRANSFORMELEMENT       DISPID_SVGELEMENT_BASE
#define DISPID_SVGCIRCLEELEMENT                 DISPID_SVGELEMENT_BASE
#define DISPID_SVGCLIPPATHELEMENT               DISPID_SVGELEMENT_BASE
#define DISPID_SVGCOLOR_PROFILEELEMENT          DISPID_SVGELEMENT_BASE
#define DISPID_SVGCURSORELEMENT                 DISPID_SVGELEMENT_BASE
#define DISPID_SVGDEFINITION_SRCELEMENT         DISPID_SVGELEMENT_BASE
#define DISPID_SVGDEFSELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGDESCELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGELEMENTINSTANCE               DISPID_NORMAL_FIRST
#define DISPID_SVGELEMENTINSTANCELIST           DISPID_NORMAL_FIRST
#define DISPID_SVGELLIPSEELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEBLENDELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFECOLORMATRIXELEMENT          DISPID_SVGELEMENT_BASE
#define DISPID_SVGFECOMPONENTTRANSFERELEMENT    DISPID_SVGELEMENT_BASE
#define DISPID_SVGCOMPONENTTRANSFERFUNCTIONELEMENT DISPID_SVGELEMENT_BASE
#define DISPID_SVGFECOMPOSITEELEMENT            DISPID_SVGELEMENT_BASE
#define DISPID_SVGFECONVOLVEMATRIXELEMENT       DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEDIFFUSELIGHTINGELEMENT      DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEDISPLACEMENTMAPELEMENT      DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEDISTANTLIGHTELEMENT         DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEFLOODELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEFUNCAELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEFUNCBELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEFUNCGELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEFUNCRELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEGAUSSIANBLURELEMENT         DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEIMAGEELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEMERGEELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEMERGENODEELEMENT            DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEMORPHOLOGYELEMENT           DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEOFFSETELEMENT               DISPID_SVGELEMENT_BASE
#define DISPID_SVGFEPOINTLIGHTELEMENT           DISPID_SVGELEMENT_BASE
#define DISPID_SVGFESPECULARLIGHTINGELEMENT     DISPID_SVGELEMENT_BASE
#define DISPID_SVGFESPOTLIGHTELEMENT            DISPID_SVGELEMENT_BASE
#define DISPID_SVGFETILEELEMENT                 DISPID_SVGELEMENT_BASE
#define DISPID_SVGFETURBULENCEELEMENT           DISPID_SVGELEMENT_BASE
#define DISPID_SVGFILTERELEMENT                 DISPID_SVGELEMENT_BASE
#define DISPID_SVGFONT_FACE_FORMATELEMENT       DISPID_SVGELEMENT_BASE
#define DISPID_SVGFONT_FACE_NAMEELEMENT         DISPID_SVGELEMENT_BASE
#define DISPID_SVGFONT_FACE_SRCELEMENT          DISPID_SVGELEMENT_BASE
#define DISPID_SVGFONT_FACE_URIELEMENT          DISPID_SVGELEMENT_BASE
#define DISPID_SVGFONT_FACEELEMENT              DISPID_SVGELEMENT_BASE
#define DISPID_SVGFONTELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGFOREIGNOBJECTELEMENT          DISPID_SVGELEMENT_BASE
#define DISPID_SVGGELEMENT                      DISPID_SVGELEMENT_BASE
#define DISPID_SVGGLYPHELEMENT                  DISPID_SVGELEMENT_BASE
#define DISPID_SVGGLYPHREFELEMENT               DISPID_SVGELEMENT_BASE
#define DISPID_SVGGRADIENTELEMENT               DISPID_SVGELEMENT_BASE
#define DISPID_SVGHKERNELEMENT                  DISPID_SVGELEMENT_BASE
#define DISPID_SVGIMAGEELEMENT                  DISPID_SVGELEMENT_BASE
#define DISPID_SVGLENGTH                        DISPID_NORMAL_FIRST
#define DISPID_SVGLENGTHLIST                    DISPID_NORMAL_FIRST
#define DISPID_SVGPRESERVEASPECTRATIO           DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDPRESERVEASPECTRATIO   DISPID_NORMAL_FIRST
#define DISPID_SVGPOINT                         DISPID_NORMAL_FIRST
#define DISPID_SVGPOINTLIST                     DISPID_NORMAL_FIRST
#define DISPID_SVGLINEARGRADIENTELEMENT         DISPID_SVGELEMENT_BASE+20 // Leave some space for inherited DISPIDs
#define DISPID_SVGLINEELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGMARKERELEMENT                 DISPID_SVGELEMENT_BASE
#define DISPID_SVGMASKELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGMETADATAELEMENT               DISPID_SVGELEMENT_BASE
#define DISPID_SVGMISSING_GLYPHELEMENT          DISPID_SVGELEMENT_BASE
#define DISPID_SVGMPATHELEMENT                  DISPID_SVGELEMENT_BASE
#define DISPID_SVGNUMBER                        DISPID_NORMAL_FIRST
#define DISPID_SVGNUMBERLIST                    DISPID_NORMAL_FIRST
#define DISPID_SVGPATHELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGPATTERNELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGPOLYGONELEMENT                DISPID_SVGELEMENT_BASE
#define DISPID_SVGPOLYLINEELEMENT               DISPID_SVGELEMENT_BASE
#define DISPID_SVGRADIALGRADIENTELEMENT         DISPID_SVGELEMENT_BASE+20 // Leave some space for inherited DISPIDs
#define DISPID_SVGRECT                          DISPID_NORMAL_FIRST
#define DISPID_SVGRECTELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGSCRIPTELEMENT                 DISPID_SVGELEMENT_BASE
#define DISPID_SVGSETELEMENT                    DISPID_SVGELEMENT_BASE
#define DISPID_SVGSTOPELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGSTRINGLIST                    DISPID_NORMAL_FIRST
#define DISPID_SVGSTYLEELEMENT                  DISPID_SVGELEMENT_BASE
#define DISPID_SVGSVGELEMENT                    DISPID_SVGELEMENT_BASE
#define DISPID_SVGSWITCHELEMENT                 DISPID_SVGELEMENT_BASE
#define DISPID_SVGSYMBOLELEMENT                 DISPID_SVGELEMENT_BASE
#define DISPID_SVGTITLEELEMENT                  DISPID_SVGELEMENT_BASE
#define DISPID_SVGTREFELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGTEXTCONTENTELEMENT            DISPID_SVGELEMENT_BASE
#define DISPID_SVGTEXTCONTENTELEMENT_BASE       (DISPID_SVGELEMENT_BASE+20) // The base dispid for types that inherit from CSVGTextContentElement. It avoids overlap of dispids for derived types.
#define DISPID_SVGTEXTPOSITIONINGELEMENT        DISPID_SVGTEXTCONTENTELEMENT_BASE
#define DISPID_SVGTEXTPOSITIONINGELEMENT_BASE   (DISPID_SVGTEXTCONTENTELEMENT_BASE+20) // The base dispid for types that inherit from CSVGTextPositioningElement. It avoids overlap of dispids for derived types.
#define DISPID_SVGTEXTELEMENT                   DISPID_SVGTEXTPOSITIONINGELEMENT_BASE
#define DISPID_SVGTSPANELEMENT                  DISPID_SVGTEXTPOSITIONINGELEMENT_BASE
#define DISPID_SVGTEXTPATHELEMENT               DISPID_SVGTEXTCONTENTELEMENT_BASE
#define DISPID_SVGUSEELEMENT                    DISPID_SVGELEMENT_BASE
#define DISPID_SVGVIEWELEMENT                   DISPID_SVGELEMENT_BASE
#define DISPID_SVGVKERNELEMENT                  DISPID_SVGELEMENT_BASE
#define DISPID_SVGMATRIX                        DISPID_NORMAL_FIRST
#define DISPID_SVGTRANSFORM                     DISPID_NORMAL_FIRST
#define DISPID_SVGTRANSFORMLIST                 DISPID_NORMAL_FIRST
#define DISPID_SVGANIMATEDTRANSFORMLIST         DISPID_NORMAL_FIRST
#define DISPID_SVGPATHSEG                       DISPID_NORMAL_FIRST
#define DISPID_SVGPATHSEG_BASE                  (DISPID_NORMAL_FIRST + 20)
#define DISPID_SVGPATHSEGLIST                   DISPID_NORMAL_FIRST
#define DISPID_SVGPATHSEGARCABS                 DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGARCREL                 DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCLOSEPATH              DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGMOVETOABS              DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGMOVETOREL              DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGLINETOABS              DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGLINETOREL              DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCURVETOCUBICABS        DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCURVETOCUBICREL        DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCURVETOCUBICSMOOTHABS  DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCURVETOCUBICSMOOTHREL  DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCURVETOQUADRATICABS    DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCURVETOQUADRATICREL    DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCURVETOQUADRATICSMOOTHABS DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGCURVETOQUADRATICSMOOTHREL DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGLINETOHORIZONTALABS    DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGLINETOHORIZONTALREL    DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGLINETOVERTICALABS      DISPID_SVGPATHSEG_BASE
#define DISPID_SVGPATHSEGLINETOVERTICALREL      DISPID_SVGPATHSEG_BASE

#define DISPID_CANVASELEMENT                    DISPID_NORMAL_FIRST
#define DISPID_CANVASRENDERCONTEXT2D            DISPID_NORMAL_FIRST
#define DISPID_CANVASGRADIENT                   DISPID_NORMAL_FIRST
#define DISPID_CANVASTEXTMETRICS                DISPID_NORMAL_FIRST
#define DISPID_CANVASIMAGEDATA                  DISPID_NORMAL_FIRST
#define DISPID_CANVASPIXELARRAY                 DISPID_NORMAL_FIRST

#define DISPID_PERFORMANCE                      DISPID_NORMAL_FIRST
#define DISPID_PERFORMANCENAVIGATION            DISPID_NORMAL_FIRST
#define DISPID_PERFORMANCETIMING                DISPID_NORMAL_FIRST

#define DISPID_MSHTMLWEBVIEWELEMENT             DISPID_NORMAL_FIRST

//;begin_internal
//----------------------------------------------------------------------------
//
// DISPID for Geolocation
//
//----------------------------------------------------------------------------
//;end_internal

#define DISPID_WEBGEOLOCATION                   DISPID_NORMAL_FIRST
#define DISPID_WEBGEOPOSITION                   DISPID_NORMAL_FIRST
#define DISPID_WEBGEOCOORDINATES                DISPID_NORMAL_FIRST
#define DISPID_WEBGEOPOSITION_ERROR             DISPID_NORMAL_FIRST

#define DISPID_DATALIST                         DISPID_NORMAL_FIRST
//;begin_internal
//----------------------------------------------------------------------------
//
//  DISPID used for IE8 interfaces in each class
//  just like above except start using DISPID_IE8_NORMAL_FIRST
//  if your < IE8 interface is in the range of DISPID_XOBJ_MIN - DISPID_XOBJ_MAX
//  you need to handle it specially so that there's no conflict
//
//----------------------------------------------------------------------------
//;end_internal

#define DISPID_IE8_ANCHOR                       DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_AREA                         DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_BASE                         DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_BODY                         DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_FORM                         DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_HEAD                         DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_IMG                          DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_INPUT                        DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_LINK                         DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_MOD                          DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_SCRIPT                       DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_ATTR                         DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_NAMEDNODEMAP                 DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_COLLECTION                   DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_PARAM                        DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_EMBED                        DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_BLOCK                        DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_META                         DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_STYLE                        DISPID_IE8_NORMAL_FIRST
#define DISPID_IE8_SELECT                       DISPID_IE8_NORMAL_FIRST

//;begin_internal
    // IE8 ELEMENT fits within DISPID_ELEMENT - DISPID_SITE + 200 (to account for ELEMENTS current interface DISPIDS)
    // Only 37 DISPIDs were used for IE8 element interfaces (IHTMLElement5)
//;end_internal
#define DISPID_IE8_ELEMENTBASE                  (DISPID_ELEMENT         + 200)
#define DISPID_IE8_ELEMENTMAX                   (DISPID_IE8_ELEMENTBASE +  40)
#define DISPID_IE8_ELEMENT                      DISPID_IE8_ELEMENTBASE

//;begin_internal
    // IE8 FRAMESITE fits within DISPID_FRAMSITE - WEBOC_DISPIDBASE + 20(account for FRAME/IFRAME interface DISPIDS)
//;end_internal
#define DISPID_IE8_FRAMESITEBASE                (DISPID_FRAMESITE   + 1120)
#define DISPID_IE8_FRAMEMAX                     (WEBOC_DISPIDBASE   - 1)
#define DISPID_IE8_FRAME                        DISPID_IE8_FRAMESITEBASE
#define DISPID_IE8_IFRAME                       DISPID_IE8_FRAMESITEBASE

//;begin_internal
    // IE8 OBJECT fits within DISPID_OBJECT - DISPID_STYLE + 30(account for OBJECT interface DISPIDS)
//;end_internal
#define DISPID_IE8_OBJECTBASE                   (DISPID_OBJECT      + 30)
#define DISPID_IE8_OBJECTMAX                    (DISPID_STYLE       - 1)
#define DISPID_IE8_OBJECT                       DISPID_IE8_OBJECTBASE

//;begin_internal
    // IE9 ELEMENT
    // Used for IHTMLElement6 interface props and methods
//;end_internal
#define DISPID_IE9_ELEMENTBASE                  (DISPID_IE8_ELEMENTMAX  + 10)
#define DISPID_IE9_ELEMENTMAX                   (DISPID_IE9_ELEMENTBASE + 35)
#define DISPID_IE9_ELEMENT                      DISPID_IE9_ELEMENTBASE

//;begin_internal
    // IE10 ELEMENT
    // Used for IHTMLElement7 interface props and methods.
//;end_internal
#define DISPID_IE10_ELEMENTBASE                  (DISPID_IE9_ELEMENTMAX + 1)
#define DISPID_IE10_ELEMENTMAX                   (DISPID_SITE           - 1)
#define DISPID_IE10_ELEMENT                      DISPID_IE10_ELEMENTBASE
#define DISP10_IE10_XMSARIAFLOWFROM              (DISPID_IE10_ELEMENT + 13)

//;begin_internal
//----------------------------------------------------------------------------
//
//  Reserved negative DISPIDs
//
//----------------------------------------------------------------------------
//;end_internal

#define DISPID_WINDOWOBJECT                     (-5500)
#define DISPID_PERFORMANCEOBJECT                (-5505)
#define DISPID_LOCATIONOBJECT                   (-5506)
#define DISPID_HISTORYOBJECT                    (-5507)
#define DISPID_NAVIGATOROBJECT                  (-5508)
#define DISPID_SECURITYCTX                      (-5511)
#define DISPID_AMBIENT_DLCONTROL                (-5512)
#define DISPID_AMBIENT_USERAGENT                (-5513)
#define DISPID_SECURITYDOMAIN                   (-5514)
//;begin_internal
#define DISPID_DEBUG_ISSECUREPROXY              (-5515)
#define DISPID_DEBUG_TRUSTEDPROXY               (-5516)
#define DISPID_DEBUG_INTERNALWINDOW             (-5517)
#define DISPID_DEBUG_ENABLESECUREPROXYASSERTS   (-5518)
//;end_internal
#define DLCTL_DLIMAGES                          0x00000010
#define DLCTL_VIDEOS                            0x00000020
#define DLCTL_BGSOUNDS                          0x00000040
#define DLCTL_NO_SCRIPTS                        0x00000080
#define DLCTL_NO_JAVA                           0x00000100
#define DLCTL_NO_RUNACTIVEXCTLS                 0x00000200
#define DLCTL_NO_DLACTIVEXCTLS                  0x00000400
#define DLCTL_DOWNLOADONLY                      0x00000800
#define DLCTL_NO_FRAMEDOWNLOAD                  0x00001000
#define DLCTL_RESYNCHRONIZE                     0x00002000
#define DLCTL_PRAGMA_NO_CACHE                   0x00004000
#define DLCTL_NO_BEHAVIORS                      0x00008000
#define DLCTL_NO_METACHARSET                    0x00010000
#define DLCTL_URL_ENCODING_DISABLE_UTF8         0x00020000
#define DLCTL_URL_ENCODING_ENABLE_UTF8          0x00040000
#define DLCTL_NOFRAMES                          0x00080000
#define DLCTL_FORCEOFFLINE                      0x10000000
#define DLCTL_NO_CLIENTPULL                     0x20000000
#define DLCTL_SILENT                            0x40000000
#define DLCTL_OFFLINEIFNOTCONNECTED             0x80000000
#define DLCTL_OFFLINE                           DLCTL_OFFLINEIFNOTCONNECTED

//;begin_internal
//----------------------------------------------------------------------------
//
//  DISPID for each non xobject event
//
//----------------------------------------------------------------------------
//;end_internal

#define DISPID_ONABORT                          (DISPID_NORMAL_FIRST)
#define DISPID_ONCHANGE                         (DISPID_NORMAL_FIRST + 1)
#define DISPID_ONERROR                          (DISPID_NORMAL_FIRST + 2)
#define DISPID_ONLOAD                           (DISPID_NORMAL_FIRST + 3)
#define DISPID_ONSELECT                         (DISPID_NORMAL_FIRST + 6)
#define DISPID_ONSUBMIT                         (DISPID_NORMAL_FIRST + 7)
#define DISPID_ONUNLOAD                         (DISPID_NORMAL_FIRST + 8)
#define DISPID_ONBOUNCE                         (DISPID_NORMAL_FIRST + 9)
#define DISPID_ONFINISH                         (DISPID_NORMAL_FIRST + 10)
#define DISPID_ONSTART                          (DISPID_NORMAL_FIRST + 11)
#define DISPID_ONLAYOUT                         (DISPID_NORMAL_FIRST + 13)
#define DISPID_ONSCROLL                         (DISPID_NORMAL_FIRST + 14)
#define DISPID_ONRESET                          (DISPID_NORMAL_FIRST + 15)
#define DISPID_ONRESIZE                         (DISPID_NORMAL_FIRST + 16)
#define DISPID_ONBEFOREUNLOAD                   (DISPID_NORMAL_FIRST + 17)
#define DISPID_ONCHANGEFOCUS                    (DISPID_NORMAL_FIRST + 18)
#define DISPID_ONCHANGEBLUR                     (DISPID_NORMAL_FIRST + 19)
#define DISPID_ONPERSIST                        (DISPID_NORMAL_FIRST + 20)
#define DISPID_ONPERSISTSAVE                    (DISPID_NORMAL_FIRST + 21)
#define DISPID_ONPERSISTLOAD                    (DISPID_NORMAL_FIRST + 22)
#define DISPID_ONCONTEXTMENU                    (DISPID_NORMAL_FIRST + 23)
#define DISPID_ONBEFOREPRINT                    (DISPID_NORMAL_FIRST + 24)
#define DISPID_ONAFTERPRINT                     (DISPID_NORMAL_FIRST + 25)
#define DISPID_ONSTOP                           (DISPID_NORMAL_FIRST + 26)
#define DISPID_ONBEFOREEDITFOCUS                (DISPID_NORMAL_FIRST + 27)
#define DISPID_ONMOUSEHOVER                     (DISPID_NORMAL_FIRST + 28)
#define DISPID_ONCONTENTREADY                   (DISPID_NORMAL_FIRST + 29)
#define DISPID_ONLAYOUTCOMPLETE                 (DISPID_NORMAL_FIRST + 30)
#define DISPID_ONPAGE                           (DISPID_NORMAL_FIRST + 31)
#define DISPID_ONLINKEDOVERFLOW                 (DISPID_NORMAL_FIRST + 32)
#define DISPID_ONMOUSEWHEEL                     (DISPID_NORMAL_FIRST + 33)
#define DISPID_ONBEFOREDEACTIVATE               (DISPID_NORMAL_FIRST + 34)
#define DISPID_ONMOVE                           (DISPID_NORMAL_FIRST + 35)
#define DISPID_ONCONTROLSELECT                  (DISPID_NORMAL_FIRST + 36)
#define DISPID_ONSELECTIONCHANGE                (DISPID_NORMAL_FIRST + 37)
#define DISPID_ONMOVESTART                      (DISPID_NORMAL_FIRST + 38)
#define DISPID_ONMOVEEND                        (DISPID_NORMAL_FIRST + 39)
#define DISPID_ONRESIZESTART                    (DISPID_NORMAL_FIRST + 40)
#define DISPID_ONRESIZEEND                      (DISPID_NORMAL_FIRST + 41)
#define DISPID_ONMOUSEENTER                     (DISPID_NORMAL_FIRST + 42)
#define DISPID_ONMOUSELEAVE                     (DISPID_NORMAL_FIRST + 43)
#define DISPID_ONACTIVATE                       (DISPID_NORMAL_FIRST + 44)
#define DISPID_ONDEACTIVATE                     (DISPID_NORMAL_FIRST + 45)
#define DISPID_ONMULTILAYOUTCLEANUP             (DISPID_NORMAL_FIRST + 46)
#define DISPID_ONBEFOREACTIVATE                 (DISPID_NORMAL_FIRST + 47)
#define DISPID_ONFOCUSIN                        (DISPID_NORMAL_FIRST + 48)
#define DISPID_ONFOCUSOUT                       (DISPID_NORMAL_FIRST + 49)
#define DISPID_ONVALUECHANGE                    (DISPID_NORMAL_FIRST + 50)
#define DISPID_ONSELECTADD                      (DISPID_NORMAL_FIRST + 51)
#define DISPID_ONSELECTREMOVE                   (DISPID_NORMAL_FIRST + 52)
#define DISPID_ONSELECTWITHIN                   (DISPID_NORMAL_FIRST + 53)
#define DISPID_ONSYSTEMSCROLLINGSTART           (DISPID_NORMAL_FIRST + 54)
#define DISPID_ONSYSTEMSCROLLINGEND             (DISPID_NORMAL_FIRST + 55)
#define DISPID_ONOBJECTCONTENTSCROLLED          (DISPID_NORMAL_FIRST + 56)
#define DISPID_ONSTORAGE                        (DISPID_NORMAL_FIRST + 57)
#define DISPID_ONSTORAGECOMMIT                  (DISPID_NORMAL_FIRST + 58)
#define DISPID_ONSHOW                           (DISPID_NORMAL_FIRST + 59)
#define DISPID_ONHIDE                           (DISPID_NORMAL_FIRST + 60)
#define DISPID_ONALERT                          (DISPID_NORMAL_FIRST + 61)
#define DISPID_ONPOPUPMENUSTART                 (DISPID_NORMAL_FIRST + 62)
#define DISPID_ONPOPUPMENUEND                   (DISPID_NORMAL_FIRST + 63)
#define DISPID_ONONLINE                         (DISPID_NORMAL_FIRST + 64)
#define DISPID_ONOFFLINE                        (DISPID_NORMAL_FIRST + 65)
#define DISPID_ONHASHCHANGE                     (DISPID_NORMAL_FIRST + 66)
#define DISPID_ONMESSAGE                        (DISPID_NORMAL_FIRST + 67)
#define DISPID_ONDOMMUTATION                    (DISPID_NORMAL_FIRST + 68)
#define DISPID_SVGLOAD                          (DISPID_NORMAL_FIRST + 69)
#define DISPID_SVGUNLOAD                        (DISPID_NORMAL_FIRST + 70)
#define DISPID_SVGABORT                         (DISPID_NORMAL_FIRST + 71)
#define DISPID_SVGERROR                         (DISPID_NORMAL_FIRST + 72)
#define DISPID_SVGRESIZE                        (DISPID_NORMAL_FIRST + 73)
#define DISPID_SVGSCROLL                        (DISPID_NORMAL_FIRST + 74)
#define DISPID_SVGZOOM                          (DISPID_NORMAL_FIRST + 75)
#define DISPID_MSPOINTERDOWN                    (DISPID_NORMAL_FIRST + 76)
#define DISPID_MSPOINTERMOVE                    (DISPID_NORMAL_FIRST + 77)
#define DISPID_MSPOINTERUP                      (DISPID_NORMAL_FIRST + 78)
#define DISPID_MSPOINTEROVER                    (DISPID_NORMAL_FIRST + 79)
#define DISPID_MSPOINTEROUT                     (DISPID_NORMAL_FIRST + 80)
#define DISPID_MSPOINTERCANCEL                  (DISPID_NORMAL_FIRST + 81)
#define DISPID_MSPOINTERHOVER                   (DISPID_NORMAL_FIRST + 82)
#define DISPID_MSGESTURESTART                   (DISPID_NORMAL_FIRST + 83)
#define DISPID_MSGESTURECHANGE                  (DISPID_NORMAL_FIRST + 84)
#define DISPID_MSGESTUREEND                     (DISPID_NORMAL_FIRST + 85)
#define DISPID_MSGESTUREHOLD                    (DISPID_NORMAL_FIRST + 86)
#define DISPID_MSGESTURETAP                     (DISPID_NORMAL_FIRST + 87)
#define DISPID_MSGESTUREDOUBLETAP               (DISPID_NORMAL_FIRST + 88)
#define DISPID_MSINERTIASTART                   (DISPID_NORMAL_FIRST + 89)
#define DISPID_MSLOSTPOINTERCAPTURE             (DISPID_NORMAL_FIRST + 90)
#define DISPID_MSGOTPOINTERCAPTURE              (DISPID_NORMAL_FIRST + 91)
#define DISPID_MSTRANSITIONSTART                (DISPID_NORMAL_FIRST + 92)
#define DISPID_MSTRANSITIONEND                  (DISPID_NORMAL_FIRST + 93)
#define DISPID_MSANIMATIONSTART                 (DISPID_NORMAL_FIRST + 94)
#define DISPID_MSANIMATIONEND                   (DISPID_NORMAL_FIRST + 95)
#define DISPID_MSANIMATIONITERATION             (DISPID_NORMAL_FIRST + 96)
#define DISPID_MSGESTUREINIT                    (DISPID_NORMAL_FIRST + 97)
#define DISPID_MSMANIPULATIONSTATECHANGED       (DISPID_NORMAL_FIRST + 98)
#define DISPID_ONOPEN                           (DISPID_NORMAL_FIRST + 99)
#define DISPID_ONCLOSE                          (DISPID_NORMAL_FIRST + 100)
#define DISPID_MSPOINTERENTER                   (DISPID_NORMAL_FIRST + 101)
#define DISPID_MSPOINTERLEAVE                   (DISPID_NORMAL_FIRST + 102)
#define DISPID_MSORIENTATIONCHANGE              (DISPID_NORMAL_FIRST + 103)
#define DISPID_ONDEVICEORIENTATION              (DISPID_NORMAL_FIRST + 104)
#define DISPID_ONDEVICEMOTION                   (DISPID_NORMAL_FIRST + 105)
#define DISPID_ONPAGESHOW                       (DISPID_NORMAL_FIRST + 106)
#define DISPID_ONPAGEHIDE                       (DISPID_NORMAL_FIRST + 107)
#define DISPID_ONCOMPASSNEEDSCALIBRATION        (DISPID_NORMAL_FIRST + 108)

//;begin_internal
//----------------------------------------------------------------------------
//
//  DISPID for each unique HtmlAttribute/CssAttribute
//
//----------------------------------------------------------------------------
//;end_internal

#define DISPID_A_FIRST                          DISPID_ATTRS
#define DISPID_A_MIN                            DISPID_ATTRS
#define DISPID_A_MAX                            (DISPID_ATTRS+999)

#define DISPID_A_BACKGROUNDIMAGE                (DISPID_A_FIRST+1)
#define DISPID_A_COLOR                          (DISPID_A_FIRST+2)
#define DISPID_A_TEXTTRANSFORM                  (DISPID_A_FIRST+4)
#define DISPID_A_NOWRAP                         (DISPID_A_FIRST+5)
#define DISPID_A_LINEHEIGHT                     (DISPID_A_FIRST+6)
#define DISPID_A_TEXTINDENT                     (DISPID_A_FIRST+7)
#define DISPID_A_LETTERSPACING                  (DISPID_A_FIRST+8)
#define DISPID_A_LANG                           (DISPID_A_FIRST+9)
#define DISPID_A_OVERFLOW                       (DISPID_A_FIRST+10)

#define DISPID_A_PADDING                        (DISPID_A_FIRST+11)
#define DISPID_A_PADDINGTOP                     (DISPID_A_FIRST+12)
#define DISPID_A_PADDINGRIGHT                   (DISPID_A_FIRST+13)
#define DISPID_A_PADDINGBOTTOM                  (DISPID_A_FIRST+14)
#define DISPID_A_PADDINGLEFT                    (DISPID_A_FIRST+15)

#define DISPID_A_CLEAR                          (DISPID_A_FIRST+16)
#define DISPID_A_LISTTYPE                       (DISPID_A_FIRST+17)
#define DISPID_A_FONTFACE                       (DISPID_A_FIRST+18)
#define DISPID_A_FONTSIZE                       (DISPID_A_FIRST+19)

#define DISPID_A_TEXTDECORATIONLINETHROUGH      (DISPID_A_FIRST+20)
#define DISPID_A_TEXTDECORATIONUNDERLINE        (DISPID_A_FIRST+21)
#define DISPID_A_TEXTDECORATIONBLINK            (DISPID_A_FIRST+22)
#define DISPID_A_TEXTDECORATIONNONE             (DISPID_A_FIRST+23)


#define DISPID_A_FONTSTYLE                      (DISPID_A_FIRST+24)
#define DISPID_A_FONTVARIANT                    (DISPID_A_FIRST+25)
#define DISPID_A_BASEFONT                       (DISPID_A_FIRST+26)
#define DISPID_A_FONTWEIGHT                     (DISPID_A_FIRST+27)

#define DISPID_A_TABLEBORDERCOLOR               (DISPID_A_FIRST+28)
#define DISPID_A_TABLEBORDERCOLORLIGHT          (DISPID_A_FIRST+29)
#define DISPID_A_TABLEBORDERCOLORDARK           (DISPID_A_FIRST+30)
#define DISPID_A_TABLEVALIGN                    (DISPID_A_FIRST+31)

#define DISPID_A_BACKGROUND                     (DISPID_A_FIRST+32)
#define DISPID_A_BACKGROUNDPOSX                 (DISPID_A_FIRST+33)
#define DISPID_A_BACKGROUNDPOSY                 (DISPID_A_FIRST+34)

#define DISPID_A_TEXTDECORATION                 (DISPID_A_FIRST+35)

#define DISPID_A_MARGIN                         (DISPID_A_FIRST+36)
#define DISPID_A_MARGINTOP                      (DISPID_A_FIRST+37)
#define DISPID_A_MARGINRIGHT                    (DISPID_A_FIRST+38)
#define DISPID_A_MARGINBOTTOM                   (DISPID_A_FIRST+39)
#define DISPID_A_MARGINLEFT                     (DISPID_A_FIRST+40)

#define DISPID_A_FONT                           (DISPID_A_FIRST+41)
#define DISPID_A_FONTSIZEKEYWORD                (DISPID_A_FIRST+42)
#define DISPID_A_FONTSIZECOMBINE                (DISPID_A_FIRST+43)

#define DISPID_A_BACKGROUNDREPEAT               (DISPID_A_FIRST+44)
#define DISPID_A_BACKGROUNDATTACHMENT           (DISPID_A_FIRST+45)
#define DISPID_A_BACKGROUNDPOSITION             (DISPID_A_FIRST+46)
#define DISPID_A_WORDSPACING                    (DISPID_A_FIRST+47)
#define DISPID_A_VERTICALALIGN                  (DISPID_A_FIRST+48)
#define DISPID_A_BORDER                         (DISPID_A_FIRST+49)
#define DISPID_A_BORDERTOP                      (DISPID_A_FIRST+50)
#define DISPID_A_BORDERRIGHT                    (DISPID_A_FIRST+51)
#define DISPID_A_BORDERBOTTOM                   (DISPID_A_FIRST+52)
#define DISPID_A_BORDERLEFT                     (DISPID_A_FIRST+53)
#define DISPID_A_BORDERCOLOR                    (DISPID_A_FIRST+54)
#define DISPID_A_BORDERTOPCOLOR                 (DISPID_A_FIRST+55)
#define DISPID_A_BORDERRIGHTCOLOR               (DISPID_A_FIRST+56)
#define DISPID_A_BORDERBOTTOMCOLOR              (DISPID_A_FIRST+57)
#define DISPID_A_BORDERLEFTCOLOR                (DISPID_A_FIRST+58)
#define DISPID_A_BORDERWIDTH                    (DISPID_A_FIRST+59)
#define DISPID_A_BORDERTOPWIDTH                 (DISPID_A_FIRST+60)
#define DISPID_A_BORDERRIGHTWIDTH               (DISPID_A_FIRST+61)
#define DISPID_A_BORDERBOTTOMWIDTH              (DISPID_A_FIRST+62)
#define DISPID_A_BORDERLEFTWIDTH                (DISPID_A_FIRST+63)
#define DISPID_A_BORDERSTYLE                    (DISPID_A_FIRST+64)
#define DISPID_A_BORDERTOPSTYLE                 (DISPID_A_FIRST+65)
#define DISPID_A_BORDERRIGHTSTYLE               (DISPID_A_FIRST+66)
#define DISPID_A_BORDERBOTTOMSTYLE              (DISPID_A_FIRST+67)
#define DISPID_A_BORDERLEFTSTYLE                (DISPID_A_FIRST+68)
#define DISPID_A_TEXTDECORATIONOVERLINE         (DISPID_A_FIRST+69)
#define DISPID_A_FLOAT                          (DISPID_A_FIRST+70)
#define DISPID_A_DISPLAY                        (DISPID_A_FIRST+71)
#define DISPID_A_LISTSTYLETYPE                  (DISPID_A_FIRST+72)
#define DISPID_A_LISTSTYLEPOSITION              (DISPID_A_FIRST+73)
#define DISPID_A_LISTSTYLEIMAGE                 (DISPID_A_FIRST+74)
#define DISPID_A_LISTSTYLE                      (DISPID_A_FIRST+75)
#define DISPID_A_WHITESPACE                     (DISPID_A_FIRST+76)
#define DISPID_A_PAGEBREAKBEFORE                (DISPID_A_FIRST+77)
#define DISPID_A_PAGEBREAKAFTER                 (DISPID_A_FIRST+78)
#define DISPID_A_SCROLL                         (DISPID_A_FIRST+79)
#define DISPID_A_VISIBILITY                     (DISPID_A_FIRST+80)
//;begin_internal
// This dispid is available
#define DISPID_A_HIDDEN                         (DISPID_A_FIRST+81)
//;end_internal
#define DISPID_A_FILTER                         (DISPID_A_FIRST+82)

#define DISPID_DEFAULTVALUE                     (DISPID_A_FIRST+83)

#define DISPID_A_BORDERCOLLAPSE                 (DISPID_A_FIRST+84)

#define DISPID_A_POSITION                       (DISPID_A_FIRST+90)
#define DISPID_A_ZINDEX                         (DISPID_A_FIRST+91)
#define DISPID_A_CLIP                           (DISPID_A_FIRST+92)
#define DISPID_A_CLIPRECTTOP                    (DISPID_A_FIRST+93)
#define DISPID_A_CLIPRECTRIGHT                  (DISPID_A_FIRST+94)
#define DISPID_A_CLIPRECTBOTTOM                 (DISPID_A_FIRST+95)
#define DISPID_A_CLIPRECTLEFT                   (DISPID_A_FIRST+96)

#define DISPID_A_FONTFACESRC                    (DISPID_A_FIRST+97)
#define DISPID_A_TABLELAYOUT                    (DISPID_A_FIRST+98)

//;begin_internal
// The style as a text string
//;end_internal
#define DISPID_A_STYLETEXT                      (DISPID_A_FIRST+99)

//;begin_internal
// Known attributes that have special meaning
//;end_internal
#define DISPID_A_LANGUAGE                       (DISPID_A_FIRST+100)

#define DISPID_A_VALUE                          (DISPID_A_FIRST+101)
#define DISPID_A_CURSOR                         (DISPID_A_FIRST+102)


//;begin_internal
//+-----------------------------------------------------------------------
//  A couple of dispids that are used internally for firing
//  events and prop notifies.
// Keep all the internal dispid's together, otherwise we'll trip up

#define DISPID_A_EVENTSINK                      (DISPID_A_FIRST+103)
#define DISPID_A_PROPNOTIFYSINK                 (DISPID_A_FIRST+104)
#define DISPID_A_ROWSETNOTIFYSINK               (DISPID_A_FIRST+105)
#define DISPID_INTERNAL_INLINESTYLEAA           (DISPID_A_FIRST+106) // In line style Attr Array
#define DISPID_INTERNAL_CSTYLEPTRCACHE          (DISPID_A_FIRST+107) // Cached CStyle Ptr
#define DISPID_INTERNAL_CRUNTIMESTYLEPTRCACHE   (DISPID_A_FIRST+108) // runtime style ptr obj
#define DISPID_INTERNAL_INVOKECONTEXT           (DISPID_A_FIRST+109) // Cached Invoke context

#define DISPID_A_BGURLIMGCTXCACHEINDEX          (DISPID_A_FIRST+110)
#define DISPID_A_LIURLIMGCTXCACHEINDEX          (DISPID_A_FIRST+111)
#define DISPID_A_ROWSETASYNCHNOTIFYSINK         (DISPID_A_FIRST+112)
#define DISPID_INTERNAL_FILTERPTRCACHE          (DISPID_A_FIRST+113) // FilterCollection in AttrArray
#define DISPID_A_ROWPOSITIONCHANGESINK          (DISPID_A_FIRST+114)
//;end_internal

#define DISPID_A_BEHAVIOR                       (DISPID_A_FIRST+115) // xtags
#define DISPID_A_READYSTATE                     (DISPID_A_FIRST+116) // ready state

#define DISPID_A_DIR                            (DISPID_A_FIRST+117) // Complex Text support for bidi
#define DISPID_A_UNICODEBIDI                    (DISPID_A_FIRST+118) // Complex Text support for CSS2 unicode-bidi
#define DISPID_A_DIRECTION                      (DISPID_A_FIRST+119) // Complex Text support for CSS2 direction

#define DISPID_A_IMEMODE                        (DISPID_A_FIRST+120)

#define DISPID_A_RUBYALIGN                      (DISPID_A_FIRST+121)
#define DISPID_A_RUBYPOSITION                   (DISPID_A_FIRST+122)
#define DISPID_A_RUBYOVERHANG                   (DISPID_A_FIRST+123)

//;begin_internal
#define DISPID_INTERNAL_ONBEHAVIOR_CONTENTREADY  (DISPID_A_FIRST+124)
#define DISPID_INTERNAL_ONBEHAVIOR_DOCUMENTREADY (DISPID_A_FIRST+125)
#define DISPID_INTERNAL_CDOMCHILDRENPTRCACHE     (DISPID_A_FIRST+126)
//;end_internal

#define DISPID_A_LAYOUTGRIDCHAR                 (DISPID_A_FIRST+127)
#define DISPID_A_LAYOUTGRIDLINE                 (DISPID_A_FIRST+128)
#define DISPID_A_LAYOUTGRIDMODE                 (DISPID_A_FIRST+129)
#define DISPID_A_LAYOUTGRIDTYPE                 (DISPID_A_FIRST+130)
#define DISPID_A_LAYOUTGRID                     (DISPID_A_FIRST+131)

#define DISPID_A_TEXTAUTOSPACE                  (DISPID_A_FIRST+132)

#define DISPID_A_LINEBREAK                      (DISPID_A_FIRST+133)
#define DISPID_A_WORDBREAK                      (DISPID_A_FIRST+134)

#define DISPID_A_TEXTJUSTIFY                    (DISPID_A_FIRST+135)
#define DISPID_A_TEXTJUSTIFYTRIM                (DISPID_A_FIRST+136)
#define DISPID_A_TEXTKASHIDA                    (DISPID_A_FIRST+137)

#define DISPID_A_OVERFLOWX                      (DISPID_A_FIRST+139)
#define DISPID_A_OVERFLOWY                      (DISPID_A_FIRST+140)

#define DISPID_A_HTCDISPATCHITEM_VALUE          (DISPID_A_FIRST+141)
#define DISPID_A_DOCFRAGMENT                    (DISPID_A_FIRST+142)

#define DISPID_A_HTCDD_ELEMENT                  (DISPID_A_FIRST+143)
#define DISPID_A_HTCDD_CREATEEVENTOBJECT        (DISPID_A_FIRST+144)

#define DISPID_A_URNATOM                        (DISPID_A_FIRST+145)
#define DISPID_A_UNIQUEPEERNUMBER               (DISPID_A_FIRST+146)

#define DISPID_A_ACCELERATOR                    (DISPID_A_FIRST+147)

//;begin_internal
#define DISPID_INTERNAL_ONBEHAVIOR_APPLYSTYLE       (DISPID_A_FIRST+148)
#define DISPID_INTERNAL_RUNTIMESTYLEAA              (DISPID_A_FIRST+149)
#define DISPID_A_HTCDISPATCHITEM_VALUE_SCRIPTSONLY  (DISPID_A_FIRST+150)
//;end_internal

#define DISPID_A_EXTENDEDTAGDESC                (DISPID_A_FIRST+151)

#define DISPID_A_ROTATE                         (DISPID_A_FIRST+152)
#define DISPID_A_ZOOM                           (DISPID_A_FIRST+153)

#define DISPID_A_HTCDD_PROTECTEDELEMENT         (DISPID_A_FIRST+154)
#define DISPID_A_LAYOUTFLOW                     (DISPID_A_FIRST+155)

//;begin_internal
#define DISPID_INTERNAL_FILTERNATIVEINFOPTRCACHE (DISPID_A_FIRST+156) // CFilterNativeInfo in AttrArray
//;end_internal

#define DISPID_A_HTCDD_ISMARKUPSHARED           (DISPID_A_FIRST+157)
#define DISPID_A_WORDWRAP                       (DISPID_A_FIRST+158)
#define DISPID_A_TEXTUNDERLINEPOSITION          (DISPID_A_FIRST+159)
#define DISPID_A_HASLAYOUT                      (DISPID_A_FIRST+160)
#define DISPID_A_MEDIA                          (DISPID_A_FIRST+161)
#define DISPID_A_EDITABLE                       (DISPID_A_FIRST+162)
#define DISPID_A_HIDEFOCUS                      (DISPID_A_FIRST+163)

//;begin_internal
#define DISPID_INTERNAL_LAYOUTRECTREGISTRYPTRCACHE  (DISPID_A_FIRST+164)
//;end_internal

#define DISPID_A_HTCDD_DEFAULTS                 (DISPID_A_FIRST+165)

#define DISPID_A_TEXTLINETHROUGHSTYLE           (DISPID_A_FIRST+166)
#define DISPID_A_TEXTUNDERLINESTYLE             (DISPID_A_FIRST+167)
#define DISPID_A_TEXTEFFECT                     (DISPID_A_FIRST+168)
#define DISPID_A_TEXTBACKGROUNDCOLOR            (DISPID_A_FIRST+169)
#define DISPID_A_RENDERINGPRIORITY              (DISPID_A_FIRST+170)

//;begin_internal
#define DISPID_INTERNAL_DWNPOSTPTRCACHE             (DISPID_A_FIRST+171)
#define DISPID_INTERNAL_CODEPAGESETTINGSPTRCACHE    (DISPID_A_FIRST+172)
#define DISPID_INTERNAL_DWNDOCPTRCACHE              (DISPID_A_FIRST+173)
#define DISPID_INTERNAL_DATABINDTASKPTRCACHE        (DISPID_A_FIRST+174)
#define DISPID_INTERNAL_URLLOCATIONCACHE            (DISPID_A_FIRST+175)
#define DISPID_INTERNAL_ARYELEMENTRELEASENOTIFYPTRCACHE (DISPID_A_FIRST+176)
#define DISPID_INTERNAL_PEERFACTORYURLMAPPTRCACHE   (DISPID_A_FIRST+177)
#define DISPID_INTERNAL_STMDIRTYPTRCACHE            (DISPID_A_FIRST+178)
//;end_internal

//;begin_internal
#define DISPID_INTERNAL_COMPUTEFORMATSTATECACHE     (DISPID_A_FIRST+179)
//;end_internal

//
#define DISPID_A_SCROLLBARBASECOLOR             (DISPID_A_FIRST+180)
#define DISPID_A_SCROLLBARFACECOLOR             (DISPID_A_FIRST+181)
#define DISPID_A_SCROLLBAR3DLIGHTCOLOR          (DISPID_A_FIRST+182)
#define DISPID_A_SCROLLBARSHADOWCOLOR           (DISPID_A_FIRST+183)
#define DISPID_A_SCROLLBARHIGHLIGHTCOLOR        (DISPID_A_FIRST+184)
#define DISPID_A_SCROLLBARDARKSHADOWCOLOR       (DISPID_A_FIRST+185)
#define DISPID_A_SCROLLBARARROWCOLOR            (DISPID_A_FIRST+186)

//;begin_internal
#define DISPID_INTERNAL_ONBEHAVIOR_CONTENTSAVE  (DISPID_A_FIRST+187)
//;end_internal

#define DISPID_A_DEFAULTTEXTSELECTION           (DISPID_A_FIRST+188)
#define DISPID_A_TEXTDECORATIONCOLOR            (DISPID_A_FIRST+189)
#define DISPID_A_TEXTCOLOR                      (DISPID_A_FIRST+190)
#define DISPID_A_STYLETEXTDECORATION            (DISPID_A_FIRST+191)

#define DISPID_A_WRITINGMODE                    (DISPID_A_FIRST+192)

//;begin_internal
#define DISPID_INTERNAL_MEDIA_REFERENCE         (DISPID_A_FIRST+193)
#define DISPID_INTERNAL_GENERICCOMPLUSREF       (DISPID_A_FIRST+194)
//;end_internal

//;begin_internal
#define DISPID_INTERNAL_FOCUSITEMS              (DISPID_A_FIRST+195)
//;end_internal

#define DISPID_A_SCROLLBARTRACKCOLOR            (DISPID_A_FIRST+196)

//;begin_internal
#define DISPID_INTERNAL_DWNHEADERCACHE          (DISPID_A_FIRST+197)
//;end_internal

#define DISPID_A_FROZEN                         (DISPID_A_FIRST+198)
#define DISPID_A_VIEWINHERITSTYLE               (DISPID_A_FIRST+199)

//;begin_internal
#define DISPID_INTERNAL_FRAMESCOLLECTION        (DISPID_A_FIRST+200)
//;end_internal

//;begin_internal
#define DISPID_A_BGURLIMGCTXCACHEINDEX_FLINE    (DISPID_A_FIRST+201)
#define DISPID_A_BGURLIMGCTXCACHEINDEX_FLETTER  (DISPID_A_FIRST+202)
//;end_internal

#define DISPID_A_TEXTALIGNLAST                  (DISPID_A_FIRST+203)
#define DISPID_A_TEXTKASHIDASPACE               (DISPID_A_FIRST+204)

//;begin_internal
#define DISPID_INTERNAL_FONTHISTORYINDEX        (DISPID_A_FIRST+205)
//;end_internal

#define DISPID_A_ALLOWTRANSPARENCY              (DISPID_A_FIRST+206)

#define DISPID_INTERNAL_URLSEARCHCACHE          (DISPID_A_FIRST+207)

#define DISPID_A_ISBLOCK                        (DISPID_A_FIRST+208)

#define DISPID_A_TEXTOVERFLOW                   (DISPID_A_FIRST+209)

//;begin_internal
#define DISPID_INTERNAL_CATTRIBUTECOLLPTRCACHE  (DISPID_A_FIRST+210)
//;end_internal

#define DISPID_A_MINHEIGHT                      (DISPID_A_FIRST+211)

//;begin_internal
#define DISPID_INTERNAL_INVOKECONTEXTDOCUMENT   (DISPID_A_FIRST+212)
//;end_internal

#define DISPID_A_INTERPOLATION                  (DISPID_A_FIRST+213)

#define DISPID_A_MAXHEIGHT                      (DISPID_A_FIRST+214)
#define DISPID_A_MINWIDTH                       (DISPID_A_FIRST+215)
#define DISPID_A_MAXWIDTH                       (DISPID_A_FIRST+216)

//;begin_internal
#define DISPID_INTERNAL_ARYOBJECTRELEASECLEANUPPTRCACHE (DISPID_A_FIRST+217)
//;end_internal

#define DISPID_A_CONTENT                        (DISPID_A_FIRST+218)
#define DISPID_A_CAPTIONSIDE                    (DISPID_A_FIRST+219)
#define DISPID_A_COUNTERINCREMENT               (DISPID_A_FIRST+220)
#define DISPID_A_COUNTERRESET                   (DISPID_A_FIRST+221)
#define DISPID_A_OUTLINE                        (DISPID_A_FIRST+222)
#define DISPID_A_OUTLINEWIDTH                   (DISPID_A_FIRST+223)
#define DISPID_A_OUTLINESTYLE                   (DISPID_A_FIRST+224)
#define DISPID_A_OUTLINECOLOR                   (DISPID_A_FIRST+225)
#define DISPID_A_BOXSIZING                      (DISPID_A_FIRST+226)
#define DISPID_A_BORDERSPACING                  (DISPID_A_FIRST+227)
#define DISPID_A_ORPHANS                        (DISPID_A_FIRST+228)
#define DISPID_A_WIDOWS                         (DISPID_A_FIRST+229)
#define DISPID_A_PAGEBREAKINSIDE                (DISPID_A_FIRST+230)

#define DISPID_A_MS_BEHAVIOR                    (DISPID_A_FIRST+231)
#define DISPID_A_MS_SCROLLBARBASECOLOR          (DISPID_A_FIRST+232)
#define DISPID_A_MS_SCROLLBARFACECOLOR          (DISPID_A_FIRST+233)
#define DISPID_A_MS_SCROLLBAR3DLIGHTCOLOR       (DISPID_A_FIRST+234)
#define DISPID_A_MS_SCROLLBARSHADOWCOLOR        (DISPID_A_FIRST+235)
#define DISPID_A_MS_SCROLLBARHIGHLIGHTCOLOR     (DISPID_A_FIRST+236)
#define DISPID_A_MS_SCROLLBARDARKSHADOWCOLOR    (DISPID_A_FIRST+237)
#define DISPID_A_MS_SCROLLBARARROWCOLOR         (DISPID_A_FIRST+238)
#define DISPID_A_MS_SCROLLBARTRACKCOLOR         (DISPID_A_FIRST+239)
#define DISPID_A_MS_TEXTALIGNLAST               (DISPID_A_FIRST+240)
#define DISPID_A_MS_TEXTOVERFLOW                (DISPID_A_FIRST+241)
#define DISPID_A_MS_TEXTUNDERLINEPOSITION       (DISPID_A_FIRST+242)
#define DISPID_A_MS_WRITINGMODE                 (DISPID_A_FIRST+243)
#define DISPID_A_MS_IMEMODE                     (DISPID_A_FIRST+244)
#define DISPID_A_MS_BACKGROUNDPOSX              (DISPID_A_FIRST+245)
#define DISPID_A_MS_BACKGROUNDPOSY              (DISPID_A_FIRST+246)
#define DISPID_A_MS_ACCELERATOR                 (DISPID_A_FIRST+247)
#define DISPID_A_MS_LAYOUTFLOW                  (DISPID_A_FIRST+248)
#define DISPID_A_MS_ZOOM                        (DISPID_A_FIRST+249)
#define DISPID_A_EMPTYCELLS                     (DISPID_A_FIRST+250)
#define DISPID_A_MS_BLOCKPROGRESSION            (DISPID_A_FIRST+251)
#define DISPID_A_QUOTES                         (DISPID_A_FIRST+252)

//;begin_internal
#define DISPID_INTERNAL_BGURLIMGCTXCACHEINDEX_GCBEFORE  (DISPID_A_FIRST+253)
#define DISPID_INTERNAL_BGURLIMGCTXCACHEINDEX_GCAFTER   (DISPID_A_FIRST+254)
#define DISPID_INTERNAL_BGURLIMGCTXCACHEINDEX_URLBEFORE (DISPID_A_FIRST+255)
#define DISPID_INTERNAL_BGURLIMGCTXCACHEINDEX_URLAFTER  (DISPID_A_FIRST+256)
#define DISPID_AAHEADER                                 (DISPID_A_FIRST+257)
#define DISPID_INTERNAL_GETTERSETTERCOLLECTION          (DISPID_A_FIRST+258)
//;end_internal

#define DISPID_A_MS_LAYOUTGRIDCHAR              (DISPID_A_FIRST+259)
#define DISPID_A_MS_LAYOUTGRIDLINE              (DISPID_A_FIRST+260)
#define DISPID_A_MS_LAYOUTGRIDMODE              (DISPID_A_FIRST+261)
#define DISPID_A_MS_LAYOUTGRIDTYPE              (DISPID_A_FIRST+262)
#define DISPID_A_MS_LAYOUTGRID                  (DISPID_A_FIRST+263)
#define DISPID_A_MS_LINEBREAK                   (DISPID_A_FIRST+264)
#define DISPID_A_MS_FILTER                      (DISPID_A_FIRST+265)
#define DISPID_A_MS_OVERFLOWX                   (DISPID_A_FIRST+266)
#define DISPID_A_MS_OVERFLOWY                   (DISPID_A_FIRST+267)
#define DISPID_A_MS_TEXTAUTOSPACE               (DISPID_A_FIRST+268)
#define DISPID_A_MS_TEXTJUSTIFY                 (DISPID_A_FIRST+269)
#define DISPID_A_MS_TEXTKASHIDASPACE            (DISPID_A_FIRST+270)
#define DISPID_A_MS_WORDBREAK                   (DISPID_A_FIRST+271)
#define DISPID_A_MS_WORDWRAP                    (DISPID_A_FIRST+272)

//;begin_internal
#define DISPID_INTERNAL_URIBEFOREREDIRECT       (DISPID_A_FIRST+273)
//;end_internal

#define DISPID_A_ALIGNMENTBASELINE              (DISPID_A_FIRST+278)
#define DISPID_A_BASELINESHIFT                  (DISPID_A_FIRST+279)
#define DISPID_A_DOMINANTBASELINE               (DISPID_A_FIRST+280)
#define DISPID_A_FONTSIZEADJUST                 (DISPID_A_FIRST+281)
#define DISPID_A_FONTSTRETCH                    (DISPID_A_FIRST+282)
#define DISPID_A_OPACITY                        (DISPID_A_FIRST+283)
#define DISPID_A_CLIPPATH                       (DISPID_A_FIRST+284)
#define DISPID_A_CLIPRULE                       (DISPID_A_FIRST+285)
#define DISPID_A_FILL                           (DISPID_A_FIRST+286)
#define DISPID_A_FILLOPACITY                    (DISPID_A_FIRST+287)
#define DISPID_A_FILLRULE                       (DISPID_A_FIRST+288)
#define DISPID_A_KERNING                        (DISPID_A_FIRST+289)
#define DISPID_A_MARKER                         (DISPID_A_FIRST+290)
#define DISPID_A_MARKEREND                      (DISPID_A_FIRST+291)
#define DISPID_A_MARKERMID                      (DISPID_A_FIRST+292)
#define DISPID_A_MARKERSTART                    (DISPID_A_FIRST+293)
#define DISPID_A_MASK                           (DISPID_A_FIRST+294)
#define DISPID_A_POINTEREVENTS                  (DISPID_A_FIRST+295)
#define DISPID_A_STOPCOLOR                      (DISPID_A_FIRST+296)
#define DISPID_A_STOPOPACITY                    (DISPID_A_FIRST+297)
#define DISPID_A_STROKE                         (DISPID_A_FIRST+298)
#define DISPID_A_STROKEDASHARRAY                (DISPID_A_FIRST+299)
#define DISPID_A_STROKEDASHOFFSET               (DISPID_A_FIRST+300)
#define DISPID_A_STROKELINECAP                  (DISPID_A_FIRST+301)
#define DISPID_A_STROKELINEJOIN                 (DISPID_A_FIRST+302)
#define DISPID_A_STROKEMITERLIMIT               (DISPID_A_FIRST+303)
#define DISPID_A_STROKEOPACITY                  (DISPID_A_FIRST+304)
#define DISPID_A_STROKEWIDTH                    (DISPID_A_FIRST+305)
#define DISPID_A_TEXTANCHOR                     (DISPID_A_FIRST+306)
#define DISPID_A_GLYPHORIENTATIONHORIZONTAL     (DISPID_A_FIRST+307)
#define DISPID_A_GLYPHORIENTATIONVERTICAL       (DISPID_A_FIRST+308)
#define DISPID_A_CSSFLOAT                       (DISPID_A_FIRST+309)
#define DISPID_A_BORDERRADIUS                   (DISPID_A_FIRST+310)
#define DISPID_A_BORDERTOPLEFTRADIUS            (DISPID_A_FIRST+311)
#define DISPID_A_BORDERTOPRIGHTRADIUS           (DISPID_A_FIRST+312)
#define DISPID_A_BORDERBOTTOMRIGHTRADIUS        (DISPID_A_FIRST+313)
#define DISPID_A_BORDERBOTTOMLEFTRADIUS         (DISPID_A_FIRST+314)
#define DISPID_A_MS_TRANSFORM                   (DISPID_A_FIRST+315)
#define DISPID_A_IE9_BACKGROUNDCLIP             (DISPID_A_FIRST+316)
#define DISPID_A_IE9_BACKGROUNDORIGIN           (DISPID_A_FIRST+317)
#define DISPID_A_IE9_BACKGROUNDSIZE             (DISPID_A_FIRST+318)
#define DISPID_A_IE9_BOXSHADOW                  (DISPID_A_FIRST+319)
#define DISPID_A_MS_TRANSFORMORIGIN             (DISPID_A_FIRST+325)
#define DISPID_A_MS_TRANSFORMORIGINX            (DISPID_A_FIRST+326)
#define DISPID_A_MS_TRANSFORMORIGINY            (DISPID_A_FIRST+327)
#define DISPID_A_MS_TEXTSIZEADJUST              (DISPID_A_FIRST+328)
#define DISPID_A_MS_TRANSITIONPROPERTY          (DISPID_A_FIRST+330)
#define DISPID_A_MS_TRANSITIONDURATION          (DISPID_A_FIRST+331)
#define DISPID_A_MS_TRANSITIONTIMINGFUNCTION    (DISPID_A_FIRST+332)
#define DISPID_A_MS_TRANSITIONDELAY             (DISPID_A_FIRST+333)
#define DISPID_A_MS_TRANSITION                  (DISPID_A_FIRST+334)
#define DISPID_A_COLUMNS                        (DISPID_A_FIRST+335)
#define DISPID_A_COLUMNCOUNT                    (DISPID_A_FIRST+336)
#define DISPID_A_COLUMNWIDTH                    (DISPID_A_FIRST+337)
#define DISPID_A_COLUMNGAP                      (DISPID_A_FIRST+338)
#define DISPID_A_COLUMNFILL                     (DISPID_A_FIRST+339)
#define DISPID_A_COLUMNSPAN                     (DISPID_A_FIRST+340)
#define DISPID_A_COLUMNRULE                     (DISPID_A_FIRST+341)
#define DISPID_A_COLUMNRULESTYLE                (DISPID_A_FIRST+342)
#define DISPID_A_COLUMNRULEWIDTH                (DISPID_A_FIRST+343)
#define DISPID_A_COLUMNRULECOLOR                (DISPID_A_FIRST+344)
#define DISPID_A_BREAKBEFORE                    (DISPID_A_FIRST+345)
#define DISPID_A_BREAKAFTER                     (DISPID_A_FIRST+346)
#define DISPID_A_BREAKINSIDE                    (DISPID_A_FIRST+347)
#define DISPID_A_MS_TRANSFORMORIGINZ            (DISPID_A_FIRST+348)
#define DISPID_A_MS_PERSPECTIVE                 (DISPID_A_FIRST+349)
#define DISPID_A_MS_PERSPECTIVEORIGIN           (DISPID_A_FIRST+350)
#define DISPID_A_MS_PERSPECTIVEORIGINX          (DISPID_A_FIRST+351)
#define DISPID_A_MS_PERSPECTIVEORIGINY          (DISPID_A_FIRST+352)
#define DISPID_A_MS_TRANSFORMSTYLE              (DISPID_A_FIRST+353)
#define DISPID_A_MS_BACKFACEVISIBILITY          (DISPID_A_FIRST+354)
#define DISPID_A_MS_SCROLLCHAINING              (DISPID_A_FIRST+355)
#define DISPID_A_MS_CONTENTZOOMING              (DISPID_A_FIRST+356)
#define DISPID_A_MS_CONTENTZOOMSNAPTYPE         (DISPID_A_FIRST+357)
#define DISPID_A_MS_SCROLLRAILS                 (DISPID_A_FIRST+358)
#define DISPID_A_MS_CONTENTZOOMCHAINING         (DISPID_A_FIRST+359)
#define DISPID_A_MS_SCROLLSNAPTYPE              (DISPID_A_FIRST+360)
#define DISPID_A_MS_CONTENTZOOMLIMIT            (DISPID_A_FIRST+361)
#define DISPID_A_MS_CONTENTZOOMSNAP             (DISPID_A_FIRST+362)
#define DISPID_A_MS_CONTENTZOOMSNAPPOINTS       (DISPID_A_FIRST+363)
#define DISPID_A_MS_CONTENTZOOMFACTOR           (DISPID_A_FIRST+364)
#define DISPID_A_MS_CONTENTZOOMLIMITMIN         (DISPID_A_FIRST+365)
#define DISPID_A_MS_CONTENTZOOMLIMITMAX         (DISPID_A_FIRST+366)
#define DISPID_A_MS_SCROLLSNAPX                 (DISPID_A_FIRST+367)
#define DISPID_A_MS_SCROLLSNAPY                 (DISPID_A_FIRST+368)
#define DISPID_A_MS_SCROLLSNAPPOINTSX           (DISPID_A_FIRST+369)
#define DISPID_A_MS_SCROLLSNAPPOINTSY           (DISPID_A_FIRST+370)
#define DISPID_A_SPELLCHECK                     (DISPID_A_FIRST+371)
#define DISPID_A_MS_GRIDCOLUMN                  (DISPID_A_FIRST+372)
#define DISPID_A_MS_GRIDCOLUMNALIGN             (DISPID_A_FIRST+373)
#define DISPID_A_MS_GRIDCOLUMNS                 (DISPID_A_FIRST+374)
#define DISPID_A_MS_GRIDCOLUMNSPAN              (DISPID_A_FIRST+375)
#define DISPID_A_MS_GRIDROW                     (DISPID_A_FIRST+377)
#define DISPID_A_MS_GRIDROWALIGN                (DISPID_A_FIRST+378)
#define DISPID_A_MS_GRIDROWS                    (DISPID_A_FIRST+379)
#define DISPID_A_MS_GRIDROWSPAN                 (DISPID_A_FIRST+380)
#define DISPID_A_MS_ANIMATIONNAME               (DISPID_A_FIRST+381)
#define DISPID_A_MS_ANIMATIONDURATION           (DISPID_A_FIRST+382)
#define DISPID_A_MS_ANIMATIONTIMINGFUNCTION     (DISPID_A_FIRST+383)
#define DISPID_A_MS_ANIMATIONDELAY              (DISPID_A_FIRST+384)
#define DISPID_A_MS_ANIMATIONDIRECTION          (DISPID_A_FIRST+385)
#define DISPID_A_MS_ANIMATIONPLAYSTATE          (DISPID_A_FIRST+386)
#define DISPID_A_MS_ANIMATIONITERATIONCOUNT     (DISPID_A_FIRST+387)
#define DISPID_A_MS_ANIMATION                   (DISPID_A_FIRST+388)
#define DISPID_A_MS_ANIMATIONFILLMODE           (DISPID_A_FIRST+389)
#define DISPID_A_FLOODCOLOR                     (DISPID_A_FIRST+390)
#define DISPID_A_FLOODOPACITY                   (DISPID_A_FIRST+391)
#define DISPID_A_COLORINTERPOLATIONFILTERS      (DISPID_A_FIRST+392)
#define DISPID_A_LIGHTINGCOLOR                  (DISPID_A_FIRST+393)
#define DISPID_A_MS_SCROLLLIMITXMIN             (DISPID_A_FIRST+394)
#define DISPID_A_MS_SCROLLLIMITYMIN             (DISPID_A_FIRST+395)
#define DISPID_A_MS_SCROLLLIMITXMAX             (DISPID_A_FIRST+396)
#define DISPID_A_MS_SCROLLLIMITYMAX             (DISPID_A_FIRST+397)
#define DISPID_A_MS_SCROLLLIMIT                 (DISPID_A_FIRST+398)
#define DISPID_A_MS_OVERFLOWSTYLE               (DISPID_A_FIRST+399)
#define DISPID_A_TEXTSHADOW                     (DISPID_A_FIRST+400)
#define DISPID_A_MS_WRAPTHROUGH                 (DISPID_A_FIRST+401)
#define DISPID_A_MS_FLOWFROM                    (DISPID_A_FIRST+402)
#define DISPID_A_MS_FLOWINTO                    (DISPID_A_FIRST+403)
#define DISPID_A_MS_HYPHENS                     (DISPID_A_FIRST+404)
#define DISPID_A_MS_HYPHENATE_LIMIT_ZONE        (DISPID_A_FIRST+405)
#define DISPID_A_MS_HYPHENATE_LIMIT_CHARS       (DISPID_A_FIRST+406)
#define DISPID_A_MS_HYPHENATE_LIMIT_LINES       (DISPID_A_FIRST+407)
#define DISPID_A_DRAGGABLE                      (DISPID_A_FIRST+408)
#define DISPID_A_MS_HIGHCONTRASTADJUST          (DISPID_A_FIRST+409)
#define DISPID_A_ENABLEBACKGROUND               (DISPID_A_FIRST+410)
#define DISPID_A_MS_WRAPMARGIN                  (DISPID_A_FIRST+411)
#define DISPID_A_MS_WRAPFLOW                    (DISPID_A_FIRST+413)
#define DISPID_A_MS_FONTFEATURESETTINGS         (DISPID_A_FIRST+414)
#define DISPID_A_MS_USERSELECT                  (DISPID_A_FIRST+415)
#define DISPID_A_MS_TOUCHACTION                 (DISPID_A_FIRST+416)
#define DISPID_A_CLASSLIST                      (DISPID_A_FIRST+417)
#define DISPID_A_MS_SCROLLTRANSLATION           (DISPID_A_FIRST+418)
#define DISPID_A_MS_FLEX                        (DISPID_A_FIRST+419)
#define DISPID_A_MS_FLEXPOSITIVE                (DISPID_A_FIRST+420)
#define DISPID_A_MS_FLEXNEGATIVE                (DISPID_A_FIRST+421)
#define DISPID_A_MS_FLEXPREFERREDSIZE           (DISPID_A_FIRST+422)
#define DISPID_A_MS_FLEXFLOW                    (DISPID_A_FIRST+423)
#define DISPID_A_MS_FLEXDIRECTION               (DISPID_A_FIRST+424)
#define DISPID_A_MS_FLEXWRAP                    (DISPID_A_FIRST+425)
#define DISPID_A_MS_FLEXALIGN                   (DISPID_A_FIRST+426)
#define DISPID_A_MS_FLEXITEMALIGN               (DISPID_A_FIRST+427)
#define DISPID_A_MS_FLEXPACK                    (DISPID_A_FIRST+428)
#define DISPID_A_MS_FLEXLINEPACK                (DISPID_A_FIRST+429)
#define DISPID_A_MS_FLEXORDER                   (DISPID_A_FIRST+430)
#define DISPID_A_TRANSFORM                      (DISPID_A_FIRST+431)
#define DISPID_A_TRANSFORMORIGIN                (DISPID_A_FIRST+432)
#define DISPID_A_TRANSITIONPROPERTY             (DISPID_A_FIRST+433)
#define DISPID_A_TRANSITIONDURATION             (DISPID_A_FIRST+434)
#define DISPID_A_TRANSITIONTIMINGFUNCTION       (DISPID_A_FIRST+435)
#define DISPID_A_TRANSITIONDELAY                (DISPID_A_FIRST+436)
#define DISPID_A_TRANSITION                     (DISPID_A_FIRST+437)
#define DISPID_A_PERSPECTIVE                    (DISPID_A_FIRST+438)
#define DISPID_A_PERSPECTIVEORIGIN              (DISPID_A_FIRST+439)
#define DISPID_A_TRANSFORMSTYLE                 (DISPID_A_FIRST+440)
#define DISPID_A_BACKFACEVISIBILITY             (DISPID_A_FIRST+441)
#define DISPID_A_ANIMATIONNAME                  (DISPID_A_FIRST+442)
#define DISPID_A_ANIMATIONDURATION              (DISPID_A_FIRST+443)
#define DISPID_A_ANIMATIONTIMINGFUNCTION        (DISPID_A_FIRST+444)
#define DISPID_A_ANIMATIONDELAY                 (DISPID_A_FIRST+445)
#define DISPID_A_ANIMATIONDIRECTION             (DISPID_A_FIRST+446)
#define DISPID_A_ANIMATIONPLAYSTATE             (DISPID_A_FIRST+447)
#define DISPID_A_ANIMATIONITERATIONCOUNT        (DISPID_A_FIRST+448)
#define DISPID_A_ANIMATION                      (DISPID_A_FIRST+449)
#define DISPID_A_ANIMATIONFILLMODE              (DISPID_A_FIRST+450)
#define DISPID_A_FONTFEATURESETTINGS            (DISPID_A_FIRST+451)
#define DISPID_A_TRANSFORMORIGINX               (DISPID_A_FIRST+452)
#define DISPID_A_TRANSFORMORIGINY               (DISPID_A_FIRST+453)
#define DISPID_A_TRANSFORMORIGINZ               (DISPID_A_FIRST+454)
#define DISPID_A_PERSPECTIVEORIGINX             (DISPID_A_FIRST+456)
#define DISPID_A_PERSPECTIVEORIGINY             (DISPID_A_FIRST+457)
#define DISPID_A_MS_TOUCHSELECT                 (DISPID_A_FIRST+458)

//;begin_internal
#define DISPID_INTERNAL_ERRORPAGEREFRESHURL     (DISPID_A_FIRST+459)
#define DISPID_INTERNAL_ERRORPAGEREASON         (DISPID_A_FIRST+460)
#define DISPID_INTERNAL_ERRORPAGEDWNPOST        (DISPID_A_FIRST+461)
//;end_internal

#define DISPID_A_FLEXDIRECTION                  (DISPID_A_FIRST+462)
#define DISPID_A_FLEXWRAP                       (DISPID_A_FIRST+463)
#define DISPID_A_FLEXFLOW                       (DISPID_A_FIRST+464)
#define DISPID_A_ORDER                          (DISPID_A_FIRST+465)
#define DISPID_A_FLEX                           (DISPID_A_FIRST+466)
#define DISPID_A_FLEXGROW                       (DISPID_A_FIRST+467)
#define DISPID_A_FLEXSHRINK                     (DISPID_A_FIRST+468)
#define DISPID_A_FLEXBASIS                      (DISPID_A_FIRST+469)
#define DISPID_A_JUSTIFYCONTENT                 (DISPID_A_FIRST+470)
#define DISPID_A_ALIGNITEMS                     (DISPID_A_FIRST+471)
#define DISPID_A_ALIGNSELF                      (DISPID_A_FIRST+472)
#define DISPID_A_ALIGNCONTENT                   (DISPID_A_FIRST+473)
#define DISPID_A_BORDERIMAGE                    (DISPID_A_FIRST+474)
#define DISPID_A_BORDERIMAGESOURCE              (DISPID_A_FIRST+475)
#define DISPID_A_BORDERIMAGESLICE               (DISPID_A_FIRST+476)
#define DISPID_A_BORDERIMAGEWIDTH               (DISPID_A_FIRST+477)
#define DISPID_A_BORDERIMAGEOUTSET              (DISPID_A_FIRST+478)
#define DISPID_A_BORDERIMAGEREPEAT              (DISPID_A_FIRST+479)
#define DISPID_A_DATASET                        (DISPID_A_FIRST+480)
#define DISPID_A_MS_IMEALIGN                    (DISPID_A_FIRST+481)
#define DISPID_A_MS_TEXTCOMBINEHORIZONTAL       (DISPID_A_FIRST+482)
#define DISPID_A_TOUCHACTION                    (DISPID_A_FIRST+483)
#define DISPID_A_WEBKIT_APPEARANCE              (DISPID_A_FIRST+484)
#define DISPID_A_WEBKIT_BOXALIGN                (DISPID_A_FIRST+485)
#define DISPID_A_WEBKIT_BOXORDINALGROUP         (DISPID_A_FIRST+486)
#define DISPID_A_WEBKIT_BOXPACK                 (DISPID_A_FIRST+487)
#define DISPID_A_WEBKIT_BOXFLEX                 (DISPID_A_FIRST+488)
#define DISPID_A_WEBKIT_BOXORIENT               (DISPID_A_FIRST+489)
#define DISPID_A_WEBKIT_BOXDIRECTION            (DISPID_A_FIRST+490)
#define DISPID_A_WEBKIT_ANIMATIONFILLMODE       (DISPID_A_FIRST+491)
#define DISPID_A_WEBKIT_TRANSFORM               (DISPID_A_FIRST+492)
#define DISPID_A_WEBKIT_BACKGROUNDSIZE          (DISPID_A_FIRST+493)
#define DISPID_A_WEBKIT_BACKFACEVISIBILITY      (DISPID_A_FIRST+494)
#define DISPID_A_WEBKIT_BOXSIZING               (DISPID_A_FIRST+495)
#define DISPID_A_WEBKIT_USERSELECT              (DISPID_A_FIRST+496)
#define DISPID_A_WEBKIT_ANIMATION               (DISPID_A_FIRST+497)
#define DISPID_A_WEBKIT_TRANSITION              (DISPID_A_FIRST+498)
#define DISPID_A_WEBKIT_ANIMATIONNAME           (DISPID_A_FIRST+499)
#define DISPID_A_WEBKIT_ANIMATIONDURATION       (DISPID_A_FIRST+500)
#define DISPID_A_WEBKIT_ANIMATIONTIMINGFUNCTION (DISPID_A_FIRST+501)
#define DISPID_A_WEBKIT_ANIMATIONDELAY          (DISPID_A_FIRST+502)
#define DISPID_A_WEBKIT_ANIMATIONITERATIONCOUNT (DISPID_A_FIRST+503)
#define DISPID_A_WEBKIT_ANIMATIONDIRECTION      (DISPID_A_FIRST+504)
#define DISPID_A_WEBKIT_ANIMATIONPLAYSTATE      (DISPID_A_FIRST+505)
#define DISPID_A_WEBKIT_TRANSITIONPROPERTY      (DISPID_A_FIRST+506)
#define DISPID_A_WEBKIT_TRANSITIONDURATION      (DISPID_A_FIRST+507)
#define DISPID_A_WEBKIT_TRANSITIONTIMINGFUNCTION (DISPID_A_FIRST+508)
#define DISPID_A_WEBKIT_TRANSITIONDELAY         (DISPID_A_FIRST+509)
#define DISPID_A_WEBKIT_BACKGROUNDATTACHMENT    (DISPID_A_FIRST+510)
#define DISPID_A_WEBKIT_BACKGROUNDCOLOR         (DISPID_A_FIRST+511)
#define DISPID_A_WEBKIT_BACKGROUNDCLIP          (DISPID_A_FIRST+512)
#define DISPID_A_WEBKIT_BACKGROUNDIMAGE         (DISPID_A_FIRST+513)
#define DISPID_A_WEBKIT_BACKGROUNDREPEAT        (DISPID_A_FIRST+514)
#define DISPID_A_WEBKIT_BACKGROUNDORIGIN        (DISPID_A_FIRST+515)
#define DISPID_A_WEBKIT_BACKGROUNDPOSITION      (DISPID_A_FIRST+516)
#define DISPID_A_WEBKIT_BACKGROUNDPOSITIONX     (DISPID_A_FIRST+517)
#define DISPID_A_WEBKIT_BACKGROUNDPOSITIONY     (DISPID_A_FIRST+518)
#define DISPID_A_WEBKIT_BACKGROUND              (DISPID_A_FIRST+519)
#define DISPID_A_WEBKIT_TRANSFORMORIGIN         (DISPID_A_FIRST+520)
#define DISPID_A_WEBKIT_TRANSFORMORIGINX        (DISPID_A_FIRST+521)
#define DISPID_A_WEBKIT_TRANSFORMORIGINY        (DISPID_A_FIRST+522)
#define DISPID_A_WEBKIT_TRANSFORMORIGINZ        (DISPID_A_FIRST+523)
#define DISPID_A_WEBKIT_TEXTSIZEADJUST          (DISPID_A_FIRST+524)
#define DISPID_A_WEBKIT_BORDERIMAGE             (DISPID_A_FIRST+525)
#define DISPID_A_WEBKIT_BORDERIMAGESOURCE       (DISPID_A_FIRST+526)
#define DISPID_A_WEBKIT_BORDERIMAGESLICE        (DISPID_A_FIRST+527)
#define DISPID_A_WEBKIT_BORDERIMAGEWIDTH        (DISPID_A_FIRST+528)
#define DISPID_A_WEBKIT_BORDERIMAGEOUTSET       (DISPID_A_FIRST+529)
#define DISPID_A_WEBKIT_BORDERIMAGEREPEAT       (DISPID_A_FIRST+530)

//;begin_internal

// Note that as you add IDs to the above range, if you bump into the
// DISPID_INTERNAL_FIRST value you'll need to slide that farther up.
// Also be aware that if the internal range pops above
// (DISPID_A_FIRST+999), i.e. DISPID_A_MAX, then you'll also have to
// adjust some more numbers.
#define DISPID_INTERNAL_FIRST                   (DISPID_A_FIRST+600)

#define DISPID_INTERNAL_BACKGROUNDDEFINITION    (DISPID_INTERNAL_FIRST+1)

#define DISPID_A_MEDIAORIENTATION               (DISPID_INTERNAL_FIRST+2)

#define DISPID_A_MEDIAMAXWIDTH                  (DISPID_INTERNAL_FIRST+3)
#define DISPID_A_MEDIAMINWIDTH                  (DISPID_INTERNAL_FIRST+4)
#define DISPID_A_MEDIAWIDTH                     (DISPID_INTERNAL_FIRST+5)

#define DISPID_A_MEDIAMAXHEIGHT                 (DISPID_INTERNAL_FIRST+6)
#define DISPID_A_MEDIAMINHEIGHT                 (DISPID_INTERNAL_FIRST+7)
#define DISPID_A_MEDIAHEIGHT                    (DISPID_INTERNAL_FIRST+8)

#define DISPID_A_MEDIAMAXDEVICEWIDTH            (DISPID_INTERNAL_FIRST+9)
#define DISPID_A_MEDIAMINDEVICEWIDTH            (DISPID_INTERNAL_FIRST+10)
#define DISPID_A_MEDIADEVICEWIDTH               (DISPID_INTERNAL_FIRST+11)

#define DISPID_A_MEDIAMAXDEVICEHEIGHT           (DISPID_INTERNAL_FIRST+12)
#define DISPID_A_MEDIAMINDEVICEHEIGHT           (DISPID_INTERNAL_FIRST+13)
#define DISPID_A_MEDIADEVICEHEIGHT              (DISPID_INTERNAL_FIRST+14)

#define DISPID_A_MEDIAMAXASPECTRATIO            (DISPID_INTERNAL_FIRST+15)
#define DISPID_A_MEDIAMINASPECTRATIO            (DISPID_INTERNAL_FIRST+16)
#define DISPID_A_MEDIAASPECTRATIO               (DISPID_INTERNAL_FIRST+17)

#define DISPID_A_MEDIAMAXDEVICEASPECTRATIO      (DISPID_INTERNAL_FIRST+18)
#define DISPID_A_MEDIAMINDEVICEASPECTRATIO      (DISPID_INTERNAL_FIRST+19)
#define DISPID_A_MEDIADEVICEASPECTRATIO         (DISPID_INTERNAL_FIRST+20)

#define DISPID_A_MEDIAMAXCOLOR                  (DISPID_INTERNAL_FIRST+21)
#define DISPID_A_MEDIAMINCOLOR                  (DISPID_INTERNAL_FIRST+22)
#define DISPID_A_MEDIACOLOR                     (DISPID_INTERNAL_FIRST+23)

#define DISPID_A_MEDIAMAXCOLORINDEX             (DISPID_INTERNAL_FIRST+24)
#define DISPID_A_MEDIAMINCOLORINDEX             (DISPID_INTERNAL_FIRST+25)
#define DISPID_A_MEDIACOLORINDEX                (DISPID_INTERNAL_FIRST+26)

#define DISPID_A_MEDIAMAXMONOCHROME             (DISPID_INTERNAL_FIRST+27)
#define DISPID_A_MEDIAMINMONOCHROME             (DISPID_INTERNAL_FIRST+28)
#define DISPID_A_MEDIAMONOCHROME                (DISPID_INTERNAL_FIRST+29)

#define DISPID_A_MEDIAMAXRESOLUTION             (DISPID_INTERNAL_FIRST+30)
#define DISPID_A_MEDIAMINRESOLUTION             (DISPID_INTERNAL_FIRST+31)
#define DISPID_A_MEDIARESOLUTION                (DISPID_INTERNAL_FIRST+32)

#define DISPID_INTERNAL_CATTRIBUTEPTRCACHE      (DISPID_INTERNAL_FIRST+33)
#define DISPID_INTERNAL_FONTFACEUNICODERANGE    (DISPID_INTERNAL_FIRST+34)
#define DISPID_INTERNAL_TOUCHTARGETHANDLER      (DISPID_INTERNAL_FIRST+35)
#define DISPID_INTERNAL_PAGEFLOWCOLLECTION      (DISPID_INTERNAL_FIRST+36)
#define DISPID_INTERNAL_NAMEDFLOWCOLLECTION     (DISPID_INTERNAL_FIRST+37)

#define DISPID_A_MEDIAMSHIGHCONTRAST            (DISPID_INTERNAL_FIRST+38)

#define DISPID_INTERNAL_A_MS_HYPHENATE_LIMIT_WORDS      (DISPID_INTERNAL_FIRST+39)
#define DISPID_INTERNAL_A_MS_HYPHENATE_LIMIT_BEFORE     (DISPID_INTERNAL_FIRST+40)
#define DISPID_INTERNAL_A_MS_HYPHENATE_LIMIT_AFTER      (DISPID_INTERNAL_FIRST+41)

#define DISPID_A_MEDIAMSVIEWSTATE               (DISPID_INTERNAL_FIRST+42)

#define DISPID_INTERNAL_ARIAATOMIC              (DISPID_INTERNAL_FIRST+43)
#define DISPID_INTERNAL_ARIAAUTOCOMPLETE        (DISPID_INTERNAL_FIRST+44)
#define DISPID_INTERNAL_ARIADROPEFFECT          (DISPID_INTERNAL_FIRST+45)
#define DISPID_INTERNAL_ARIAGRABBED             (DISPID_INTERNAL_FIRST+46)
#define DISPID_INTERNAL_ARIALABEL               (DISPID_INTERNAL_FIRST+47)
#define DISPID_INTERNAL_ARIAMULTILINE           (DISPID_INTERNAL_FIRST+48)
#define DISPID_INTERNAL_ARIAORIENTATION         (DISPID_INTERNAL_FIRST+49)
#define DISPID_INTERNAL_ARIASORT                (DISPID_INTERNAL_FIRST+50)
#define DISPID_INTERNAL_ARIAVALUETEXT           (DISPID_INTERNAL_FIRST+51)

#define DISPID_A_MEDIAGRID                      (DISPID_INTERNAL_FIRST+52)
#define DISPID_A_MEDIASCAN                      (DISPID_INTERNAL_FIRST+53)

// Reserve 20 DISPIDs for internal accessibility eventing purposes
#define DISPID_A_ACCEVENTRECORDID_START         (DISPID_INTERNAL_FIRST+54)
#define DISPID_A_ACCEVENTRECORDID_END           (DISPID_INTERNAL_FIRST+73)

#define DISPID_INTERNAL_REQUIRED                (DISPID_INTERNAL_FIRST+74)

#define DISPID_INTERNAL_CSS_PARSEDARY           (DISPID_INTERNAL_FIRST+75)
#define DISPID_INTERNAL_SOURCELOCATION          (DISPID_INTERNAL_FIRST+76)
#define DISPID_INTERNAL_CSS_TRACEDSTYLES        (DISPID_INTERNAL_FIRST+77)

#define DISPID_A_BDURLIMGCTXCACHEINDEX          (DISPID_INTERNAL_FIRST+78)

#define DISPID_A_MEDIAWEBKITDEVICEPIXELRATIO    (DISPID_INTERNAL_FIRST+79)
#define DISPID_A_MEDIAWEBKITMAXDEVICEPIXELRATIO (DISPID_INTERNAL_FIRST+80)
#define DISPID_A_MEDIAWEBKITMINDEVICEPIXELRATIO (DISPID_INTERNAL_FIRST+81)

#define DISPID_SVGSTYLABLE_CLASSNAME_PROP       (DISPID_SVGMIXINS+1)

#define DISPID_SVGLOCATABLE_NEARESTVIEWPORTELEMENT  (DISPID_SVGMIXINS+2)
#define DISPID_SVGLOCATABLE_FARTHESTVIEWPORTELEMENT (DISPID_SVGMIXINS+3)
#define DISPID_SVGLOCATABLE_GETBBOX                 (DISPID_SVGMIXINS+4)
#define DISPID_SVGLOCATABLE_GETCTM                  (DISPID_SVGMIXINS+5)
#define DISPID_SVGLOCATABLE_GETSCREENCTM            (DISPID_SVGMIXINS+6)
#define DISPID_SVGLOCATABLE_GETTRANSFORMTOELEMENT   (DISPID_SVGMIXINS+7)

#define DISPID_SVGTRANSFORMABLE_TRANSFORM_ATTR  (DISPID_SVGMIXINS+8)
#define DISPID_SVGTRANSFORMABLE_TRANSFORM_PROP  (DISPID_SVGMIXINS+9)

#define DISPID_SVGTESTS_REQUIREDFEATURES_ATTR   (DISPID_SVGMIXINS+10)
#define DISPID_SVGTESTS_REQUIREDFEATURES_PROP   (DISPID_SVGMIXINS+11)
#define DISPID_SVGTESTS_REQUIREDEXTENSIONS_ATTR (DISPID_SVGMIXINS+12)
#define DISPID_SVGTESTS_REQUIREDEXTENSIONS_PROP (DISPID_SVGMIXINS+13)
#define DISPID_SVGTESTS_SYSTEMLANGUAGE_ATTR     (DISPID_SVGMIXINS+14)
#define DISPID_SVGTESTS_SYSTEMLANGUAGE_PROP     (DISPID_SVGMIXINS+15)
#define DISPID_SVGTESTS_HASEXTENSION            (DISPID_SVGMIXINS+16)

#define DISPID_SVGLANGSPACE_XMLLANG             (DISPID_SVGMIXINS+17)
#define DISPID_SVGLANGSPACE_XMLSPACE            (DISPID_SVGMIXINS+18)

#define DISPID_SVGEXTERNALRESOURCESREQUIRED_EXTERNALRESOURCESREQUIRED_ATTR  (DISPID_SVGMIXINS+19)
#define DISPID_SVGEXTERNALRESOURCESREQUIRED_EXTERNALRESOURCESREQUIRED_PROP  (DISPID_SVGMIXINS+20)

#define DISPID_SVGFITTOVIEWBOX_VIEWBOX_ATTR             (DISPID_SVGMIXINS+21)
#define DISPID_SVGFITTOVIEWBOX_VIEWBOX_PROP             (DISPID_SVGMIXINS+22)
#define DISPID_SVGFITTOVIEWBOX_PRESERVEASPECTRATIO_ATTR (DISPID_SVGMIXINS+23)
#define DISPID_SVGFITTOVIEWBOX_PRESERVEASPECTRATIO_PROP (DISPID_SVGMIXINS+24)

#define DISPID_SVGZOOMANDPAN_ZOOMANDPAN         (DISPID_SVGMIXINS+25)

#define DISPID_SVGURIREFERENCE_HREF             (DISPID_SVGMIXINS+26)

// Similar to DISPID_INTERNAL_FIRST, DISPID_SVGELEMENT is defined relative
// to DISPID_SVGMIXINS.  If you bump into (DISPID_SVGMIXINS + 30), update
// DISPID_SVGELEMENT to avoid the collision.

//;end_internal

//;begin_internal
//------------------------------------------------------------------------
//
//  Event property and method dispids
//
//------------------------------------------------------------------------
//;end_internal

#define DISPID_EVPROP_ONMOUSEOVER           (DISPID_EVENTS +  0)
#define DISPID_EVMETH_ONMOUSEOVER            STDDISPID_XOBJ_ONMOUSEOVER
#define DISPID_EVPROP_ONMOUSEOUT            (DISPID_EVENTS +  1)
#define DISPID_EVMETH_ONMOUSEOUT             STDDISPID_XOBJ_ONMOUSEOUT
#define DISPID_EVPROP_ONMOUSEDOWN           (DISPID_EVENTS +  2)
#define DISPID_EVMETH_ONMOUSEDOWN            DISPID_MOUSEDOWN
#define DISPID_EVPROP_ONMOUSEUP             (DISPID_EVENTS +  3)
#define DISPID_EVMETH_ONMOUSEUP              DISPID_MOUSEUP
#define DISPID_EVPROP_ONMOUSEMOVE           (DISPID_EVENTS +  4)
#define DISPID_EVMETH_ONMOUSEMOVE            DISPID_MOUSEMOVE
#define DISPID_EVPROP_ONKEYDOWN             (DISPID_EVENTS +  5)
#define DISPID_EVMETH_ONKEYDOWN              DISPID_KEYDOWN
#define DISPID_EVPROP_ONKEYUP               (DISPID_EVENTS +  6)
#define DISPID_EVMETH_ONKEYUP                DISPID_KEYUP
#define DISPID_EVPROP_ONKEYPRESS            (DISPID_EVENTS +  7)
#define DISPID_EVMETH_ONKEYPRESS             DISPID_KEYPRESS
#define DISPID_EVPROP_ONCLICK               (DISPID_EVENTS +  8)
#define DISPID_EVMETH_ONCLICK                DISPID_CLICK
#define DISPID_EVPROP_ONDBLCLICK            (DISPID_EVENTS +  9)
#define DISPID_EVMETH_ONDBLCLICK             DISPID_DBLCLICK
#define DISPID_EVPROP_ONSELECT              (DISPID_EVENTS + 10)
#define DISPID_EVMETH_ONSELECT               DISPID_ONSELECT
#define DISPID_EVPROP_ONSUBMIT              (DISPID_EVENTS + 11)
#define DISPID_EVMETH_ONSUBMIT               DISPID_ONSUBMIT
#define DISPID_EVPROP_ONRESET               (DISPID_EVENTS + 12)
#define DISPID_EVMETH_ONRESET                DISPID_ONRESET
#define DISPID_EVPROP_ONHELP                (DISPID_EVENTS + 13)
#define DISPID_EVMETH_ONHELP                 STDDISPID_XOBJ_ONHELP
#define DISPID_EVPROP_ONFOCUS               (DISPID_EVENTS + 14)
#define DISPID_EVMETH_ONFOCUS                STDDISPID_XOBJ_ONFOCUS
#define DISPID_EVPROP_ONBLUR                (DISPID_EVENTS + 15)
#define DISPID_EVMETH_ONBLUR                 STDDISPID_XOBJ_ONBLUR
#define DISPID_EVPROP_ONROWEXIT             (DISPID_EVENTS + 18)
#define DISPID_EVMETH_ONROWEXIT              STDDISPID_XOBJ_ONROWEXIT
#define DISPID_EVPROP_ONROWENTER            (DISPID_EVENTS + 19)
#define DISPID_EVMETH_ONROWENTER             STDDISPID_XOBJ_ONROWENTER
#define DISPID_EVPROP_ONBOUNCE              (DISPID_EVENTS + 20)
#define DISPID_EVMETH_ONBOUNCE               DISPID_ONBOUNCE
#define DISPID_EVPROP_ONBEFOREUPDATE        (DISPID_EVENTS + 21)
#define DISPID_EVMETH_ONBEFOREUPDATE         STDDISPID_XOBJ_BEFOREUPDATE
#define DISPID_EVPROP_ONAFTERUPDATE         (DISPID_EVENTS + 22)
#define DISPID_EVMETH_ONAFTERUPDATE          STDDISPID_XOBJ_AFTERUPDATE
#define DISPID_EVPROP_ONBEFOREDRAGOVER      (DISPID_EVENTS + 23)
#define DISPID_EVMETH_ONBEFOREDRAGOVER       EVENTID_CommonCtrlEvent_BeforeDragOver
#define DISPID_EVPROP_ONBEFOREDROPORPASTE   (DISPID_EVENTS + 24)
#define DISPID_EVMETH_ONBEFOREDROPORPASTE    EVENTID_CommonCtrlEvent_BeforeDropOrPaste
#define DISPID_EVPROP_ONREADYSTATECHANGE    (DISPID_EVENTS + 25)
#define DISPID_EVMETH_ONREADYSTATECHANGE     DISPID_READYSTATECHANGE
#define DISPID_EVPROP_ONFINISH              (DISPID_EVENTS + 26)
#define DISPID_EVMETH_ONFINISH               DISPID_ONFINISH
#define DISPID_EVPROP_ONSTART               (DISPID_EVENTS + 27)
#define DISPID_EVMETH_ONSTART                DISPID_ONSTART
#define DISPID_EVPROP_ONABORT               (DISPID_EVENTS + 28)
#define DISPID_EVMETH_ONABORT                DISPID_ONABORT
#define DISPID_EVPROP_ONERROR               (DISPID_EVENTS + 29)
#define DISPID_EVMETH_ONERROR                DISPID_ONERROR
#define DISPID_EVPROP_ONCHANGE              (DISPID_EVENTS + 30)
#define DISPID_EVMETH_ONCHANGE               DISPID_ONCHANGE
#define DISPID_EVPROP_ONSCROLL              (DISPID_EVENTS + 31)
#define DISPID_EVMETH_ONSCROLL               DISPID_ONSCROLL
#define DISPID_EVPROP_ONLOAD                (DISPID_EVENTS + 32)
#define DISPID_EVMETH_ONLOAD                 DISPID_ONLOAD
#define DISPID_EVPROP_ONUNLOAD              (DISPID_EVENTS + 33)
#define DISPID_EVMETH_ONUNLOAD               DISPID_ONUNLOAD
#define DISPID_EVPROP_ONLAYOUT              (DISPID_EVENTS + 34)
#define DISPID_EVMETH_ONLAYOUT               DISPID_ONLAYOUT
#define DISPID_EVPROP_ONDRAGSTART           (DISPID_EVENTS + 35)
#define DISPID_EVMETH_ONDRAGSTART            STDDISPID_XOBJ_ONDRAGSTART
#define DISPID_EVPROP_ONRESIZE              (DISPID_EVENTS + 36)
#define DISPID_EVMETH_ONRESIZE               DISPID_ONRESIZE
#define DISPID_EVPROP_ONSELECTSTART         (DISPID_EVENTS + 37)
#define DISPID_EVMETH_ONSELECTSTART          STDDISPID_XOBJ_ONSELECTSTART
#define DISPID_EVPROP_ONERRORUPDATE         (DISPID_EVENTS + 38)
#define DISPID_EVMETH_ONERRORUPDATE          STDDISPID_XOBJ_ERRORUPDATE
#define DISPID_EVPROP_ONBEFOREUNLOAD        (DISPID_EVENTS + 39)
#define DISPID_EVMETH_ONBEFOREUNLOAD         DISPID_ONBEFOREUNLOAD
#define DISPID_EVPROP_ONDATASETCHANGED      (DISPID_EVENTS + 40)
#define DISPID_EVMETH_ONDATASETCHANGED       STDDISPID_XOBJ_ONDATASETCHANGED
#define DISPID_EVPROP_ONDATAAVAILABLE       (DISPID_EVENTS + 41)
#define DISPID_EVMETH_ONDATAAVAILABLE        STDDISPID_XOBJ_ONDATAAVAILABLE
#define DISPID_EVPROP_ONDATASETCOMPLETE     (DISPID_EVENTS + 42)
#define DISPID_EVMETH_ONDATASETCOMPLETE      STDDISPID_XOBJ_ONDATASETCOMPLETE
#define DISPID_EVPROP_ONFILTER              (DISPID_EVENTS + 43)
#define DISPID_EVMETH_ONFILTER               STDDISPID_XOBJ_ONFILTER
#define DISPID_EVPROP_ONCHANGEFOCUS         (DISPID_EVENTS + 44)
#define DISPID_EVMETH_ONCHANGEFOCUS          DISPID_ONCHANGEFOCUS
#define DISPID_EVPROP_ONCHANGEBLUR          (DISPID_EVENTS + 45)
#define DISPID_EVMETH_ONCHANGEBLUR           DISPID_ONCHANGEBLUR
#define DISPID_EVPROP_ONLOSECAPTURE         (DISPID_EVENTS + 46)
#define DISPID_EVMETH_ONLOSECAPTURE          STDDISPID_XOBJ_ONLOSECAPTURE
#define DISPID_EVPROP_ONPROPERTYCHANGE      (DISPID_EVENTS + 47)
#define DISPID_EVMETH_ONPROPERTYCHANGE       STDDISPID_XOBJ_ONPROPERTYCHANGE
#define DISPID_EVPROP_ONPERSISTSAVE         (DISPID_EVENTS + 48)
#define DISPID_EVMETH_ONPERSISTSAVE          DISPID_ONPERSISTSAVE
#define DISPID_EVPROP_ONDRAG                (DISPID_EVENTS + 49)
#define DISPID_EVMETH_ONDRAG                 STDDISPID_XOBJ_ONDRAG
#define DISPID_EVPROP_ONDRAGEND             (DISPID_EVENTS + 50)
#define DISPID_EVMETH_ONDRAGEND              STDDISPID_XOBJ_ONDRAGEND
#define DISPID_EVPROP_ONDRAGENTER           (DISPID_EVENTS + 51)
#define DISPID_EVMETH_ONDRAGENTER            STDDISPID_XOBJ_ONDRAGENTER
#define DISPID_EVPROP_ONDRAGOVER            (DISPID_EVENTS + 52)
#define DISPID_EVMETH_ONDRAGOVER             STDDISPID_XOBJ_ONDRAGOVER
#define DISPID_EVPROP_ONDRAGLEAVE           (DISPID_EVENTS + 53)
#define DISPID_EVMETH_ONDRAGLEAVE            STDDISPID_XOBJ_ONDRAGLEAVE
#define DISPID_EVPROP_ONDROP                (DISPID_EVENTS + 54)
#define DISPID_EVMETH_ONDROP                 STDDISPID_XOBJ_ONDROP
#define DISPID_EVPROP_ONCUT                 (DISPID_EVENTS + 55)
#define DISPID_EVMETH_ONCUT                  STDDISPID_XOBJ_ONCUT
#define DISPID_EVPROP_ONCOPY                (DISPID_EVENTS + 56)
#define DISPID_EVMETH_ONCOPY                 STDDISPID_XOBJ_ONCOPY
#define DISPID_EVPROP_ONPASTE               (DISPID_EVENTS + 57)
#define DISPID_EVMETH_ONPASTE                STDDISPID_XOBJ_ONPASTE
#define DISPID_EVPROP_ONBEFORECUT           (DISPID_EVENTS + 58)
#define DISPID_EVMETH_ONBEFORECUT            STDDISPID_XOBJ_ONBEFORECUT
#define DISPID_EVPROP_ONBEFORECOPY          (DISPID_EVENTS + 59)
#define DISPID_EVMETH_ONBEFORECOPY           STDDISPID_XOBJ_ONBEFORECOPY
#define DISPID_EVPROP_ONBEFOREPASTE         (DISPID_EVENTS + 60)
#define DISPID_EVMETH_ONBEFOREPASTE          STDDISPID_XOBJ_ONBEFOREPASTE
#define DISPID_EVPROP_ONPERSISTLOAD         (DISPID_EVENTS + 61)
#define DISPID_EVMETH_ONPERSISTLOAD          DISPID_ONPERSISTLOAD
#define DISPID_EVPROP_ONROWSDELETE          (DISPID_EVENTS + 62)
#define DISPID_EVMETH_ONROWSDELETE           STDDISPID_XOBJ_ONROWSDELETE
#define DISPID_EVPROP_ONROWSINSERTED        (DISPID_EVENTS + 63)
#define DISPID_EVMETH_ONROWSINSERTED         STDDISPID_XOBJ_ONROWSINSERTED
#define DISPID_EVPROP_ONCELLCHANGE          (DISPID_EVENTS + 64)
#define DISPID_EVMETH_ONCELLCHANGE           STDDISPID_XOBJ_ONCELLCHANGE
#define DISPID_EVPROP_ONCONTEXTMENU         (DISPID_EVENTS + 65)
#define DISPID_EVMETH_ONCONTEXTMENU          DISPID_ONCONTEXTMENU
#define DISPID_EVPROP_ONBEFOREPRINT         (DISPID_EVENTS + 66)
#define DISPID_EVMETH_ONBEFOREPRINT          DISPID_ONBEFOREPRINT
#define DISPID_EVPROP_ONAFTERPRINT          (DISPID_EVENTS + 67)
#define DISPID_EVMETH_ONAFTERPRINT           DISPID_ONAFTERPRINT
#define DISPID_EVPROP_ONSTOP                (DISPID_EVENTS + 68)
#define DISPID_EVMETH_ONSTOP                DISPID_ONSTOP
#define DISPID_EVPROP_ONBEFOREEDITFOCUS     (DISPID_EVENTS + 69)
#define DISPID_EVMETH_ONBEFOREEDITFOCUS      DISPID_ONBEFOREEDITFOCUS
#define DISPID_EVPROP_ONATTACHEVENT         (DISPID_EVENTS + 70)
#define DISPID_EVPROP_ONMOUSEHOVER          (DISPID_EVENTS + 71)
#define DISPID_EVMETH_ONMOUSEHOVER           DISPID_ONMOUSEHOVER
#define DISPID_EVPROP_ONCONTENTREADY        (DISPID_EVENTS + 72)
#define DISPID_EVMETH_ONCONTENTREADY         DISPID_ONCONTENTREADY
#define DISPID_EVPROP_ONLAYOUTCOMPLETE      (DISPID_EVENTS + 73)
#define DISPID_EVMETH_ONLAYOUTCOMPLETE       DISPID_ONLAYOUTCOMPLETE
#define DISPID_EVPROP_ONPAGE                (DISPID_EVENTS + 74)
#define DISPID_EVMETH_ONPAGE                 DISPID_ONPAGE
#define DISPID_EVPROP_ONLINKEDOVERFLOW      (DISPID_EVENTS + 75)
#define DISPID_EVMETH_ONLINKEDOVERFLOW       DISPID_ONLINKEDOVERFLOW
#define DISPID_EVPROP_ONMOUSEWHEEL          (DISPID_EVENTS + 76)
#define DISPID_EVMETH_ONMOUSEWHEEL           DISPID_ONMOUSEWHEEL
#define DISPID_EVPROP_ONBEFOREDEACTIVATE    (DISPID_EVENTS + 77)
#define DISPID_EVMETH_ONBEFOREDEACTIVATE     DISPID_ONBEFOREDEACTIVATE
#define DISPID_EVPROP_ONMOVE                (DISPID_EVENTS + 78)
#define DISPID_EVMETH_ONMOVE                 DISPID_ONMOVE
#define DISPID_EVPROP_ONCONTROLSELECT       (DISPID_EVENTS + 79)
#define DISPID_EVMETH_ONCONTROLSELECT        DISPID_ONCONTROLSELECT
#define DISPID_EVPROP_ONSELECTIONCHANGE     (DISPID_EVENTS + 80)
#define DISPID_EVMETH_ONSELECTIONCHANGE      DISPID_ONSELECTIONCHANGE
#define DISPID_EVPROP_ONMOVESTART           (DISPID_EVENTS + 81)
#define DISPID_EVMETH_ONMOVESTART            DISPID_ONMOVESTART
#define DISPID_EVPROP_ONMOVEEND             (DISPID_EVENTS + 82)
#define DISPID_EVMETH_ONMOVEEND              DISPID_ONMOVEEND
#define DISPID_EVPROP_ONRESIZESTART         (DISPID_EVENTS + 83)
#define DISPID_EVMETH_ONRESIZESTART          DISPID_ONRESIZESTART
#define DISPID_EVPROP_ONRESIZEEND           (DISPID_EVENTS + 84)
#define DISPID_EVMETH_ONRESIZEEND            DISPID_ONRESIZEEND
#define DISPID_EVPROP_ONMOUSEENTER          (DISPID_EVENTS + 85)
#define DISPID_EVMETH_ONMOUSEENTER           DISPID_ONMOUSEENTER
#define DISPID_EVPROP_ONMOUSELEAVE          (DISPID_EVENTS + 86)
#define DISPID_EVMETH_ONMOUSELEAVE           DISPID_ONMOUSELEAVE
#define DISPID_EVPROP_ONACTIVATE            (DISPID_EVENTS + 87)
#define DISPID_EVMETH_ONACTIVATE             DISPID_ONACTIVATE
#define DISPID_EVPROP_ONDEACTIVATE          (DISPID_EVENTS + 88)
#define DISPID_EVMETH_ONDEACTIVATE           DISPID_ONDEACTIVATE
#define DISPID_EVPROP_ONMULTILAYOUTCLEANUP  (DISPID_EVENTS + 89)
#define DISPID_EVMETH_ONMULTILAYOUTCLEANUP   DISPID_ONMULTILAYOUTCLEANUP
#define DISPID_EVPROP_ONBEFOREACTIVATE      (DISPID_EVENTS + 90)
#define DISPID_EVMETH_ONBEFOREACTIVATE       DISPID_ONBEFOREACTIVATE
#define DISPID_EVPROP_ONFOCUSIN             (DISPID_EVENTS + 91)
#define DISPID_EVMETH_ONFOCUSIN              DISPID_ONFOCUSIN
#define DISPID_EVPROP_ONFOCUSOUT            (DISPID_EVENTS + 92)
#define DISPID_EVMETH_ONFOCUSOUT             DISPID_ONFOCUSOUT
#define DISPID_EVPROP_ONVALUECHANGE         (DISPID_EVENTS + 93)
#define DISPID_EVMETH_ONVALUECHANGE          DISPID_ONVALUECHANGE
#define DISPID_EVPROP_ONSELECTADD           (DISPID_EVENTS + 94)
#define DISPID_EVMETH_ONSELECTADD            DISPID_ONSELECTADD
#define DISPID_EVPROP_ONSELECTREMOVE        (DISPID_EVENTS + 95)
#define DISPID_EVMETH_ONSELECTREMOVE         DISPID_ONSELECTREMOVE
#define DISPID_EVPROP_ONSELECTWITHIN        (DISPID_EVENTS + 96)
#define DISPID_EVMETH_ONSELECTWITHIN         DISPID_ONSELECTWITHIN
#define DISPID_EVPROP_ONSYSTEMSCROLLINGSTART (DISPID_EVENTS + 97)
#define DISPID_EVMETH_ONSYSTEMSCROLLINGSTART DISPID_ONSYSTEMSCROLLINGSTART
#define DISPID_EVPROP_ONSYSTEMSCROLLINGEND   (DISPID_EVENTS + 98)
#define DISPID_EVMETH_ONSYSTEMSCROLLINGEND   DISPID_ONSYSTEMSCROLLINGEND
#define DISPID_EVPROP_ONOBJECTCONTENTSCROLLED   (DISPID_EVENTS + 99)
#define DISPID_EVMETH_ONOBJECTCONTENTSCROLLED   DISPID_ONOBJECTCONTENTSCROLLED
#define DISPID_EVPROP_ONSTORAGE              (DISPID_EVENTS + 100)
#define DISPID_EVMETH_ONSTORAGE              DISPID_ONSTORAGE
#define DISPID_EVPROP_ONSTORAGECOMMIT        (DISPID_EVENTS + 101)
#define DISPID_EVMETH_ONSTORAGECOMMIT        DISPID_ONSTORAGECOMMIT
#define DISPID_EVPROP_ONSHOW                 (DISPID_EVENTS + 102)
#define DISPID_EVMETH_ONSHOW                 DISPID_ONSHOW
#define DISPID_EVPROP_ONHIDE                 (DISPID_EVENTS + 103)
#define DISPID_EVMETH_ONHIDE                 DISPID_ONHIDE
#define DISPID_EVPROP_ONALERT                (DISPID_EVENTS + 104)
#define DISPID_EVMETH_ONALERT                DISPID_ONALERT
#define DISPID_EVPROP_ONPOPUPMENUSTART       (DISPID_EVENTS + 105)
#define DISPID_EVMETH_ONPOPUPMENUSTART       DISPID_ONPOPUPMENUSTART
#define DISPID_EVPROP_ONPOPUPMENUEND         (DISPID_EVENTS + 106)
#define DISPID_EVMETH_ONPOPUPMENUEND         DISPID_ONPOPUPMENUEND
#define DISPID_EVPROP_ONONLINE               (DISPID_EVENTS + 107)
#define DISPID_EVMETH_ONONLINE               DISPID_ONONLINE
#define DISPID_EVPROP_ONOFFLINE              (DISPID_EVENTS + 108)
#define DISPID_EVMETH_ONOFFLINE              DISPID_ONOFFLINE
#define DISPID_EVPROP_ONHASHCHANGE           (DISPID_EVENTS + 109)
#define DISPID_EVMETH_ONHASHCHANGE           DISPID_ONHASHCHANGE
#define DISPID_EVPROP_ONMESSAGE              (DISPID_EVENTS + 110)
#define DISPID_EVMETH_ONMESSAGE              DISPID_ONMESSAGE
#define DISPID_EVPROP_ONDOMMUTATION          (DISPID_EVENTS + 111)
#define DISPID_EVMETH_ONDOMMUTATION          DISPID_ONDOMMUTATION

//;begin_internal
#define DISPID_EVPROP_SINKLIMIT              DISPID_EVPROP_ONDOMMUTATION
//;end_internal

#define DISPID_EVPROP_TIMEOUT                (DISPID_EVENTS + 112)
#define DISPID_EVPROP_WHEEL                  (DISPID_EVENTS + 113)
#define DISPID_EVPROP_SVGLOAD               (DISPID_EVENTS + 114)
#define DISPID_EVPROP_SVGUNLOAD             (DISPID_EVENTS + 115)
#define DISPID_EVPROP_SVGABORT              (DISPID_EVENTS + 116)
#define DISPID_EVPROP_SVGERROR              (DISPID_EVENTS + 117)
#define DISPID_EVPROP_SVGRESIZE             (DISPID_EVENTS + 118)
#define DISPID_EVPROP_SVGSCROLL             (DISPID_EVENTS + 119)
#define DISPID_EVPROP_SVGZOOM               (DISPID_EVENTS + 120)
#define DISPID_EVPROP_ONMSTHUMBNAILCLICK    (DISPID_EVENTS + 121)
#define DISPID_EVPROP_COMPOSITIONSTART      (DISPID_EVENTS + 122)
#define DISPID_EVPROP_COMPOSITIONUPDATE     (DISPID_EVENTS + 123)
#define DISPID_EVPROP_COMPOSITIONEND        (DISPID_EVENTS + 124)
#define DISPID_EVPROP_DOMATTRMODIFIED       (DISPID_EVENTS + 125)
#define DISPID_EVPROP_DOMCONTENTLOADED      (DISPID_EVENTS + 126)
#define DISPID_EVPROP_INPUT                 (DISPID_EVENTS + 127)
#define DISPID_EVPROP_DOMCHARDATAMODIFIED   (DISPID_EVENTS + 128)
#define DISPID_EVPROP_TEXTINPUT             (DISPID_EVENTS + 129)
#define DISPID_EVPROP_ONMSSITEMODEJUMPLISTITEMREMOVED (DISPID_EVENTS + 130)
#define DISPID_EVPROP_DOMNODEINSERTED       (DISPID_EVENTS + 131)
#define DISPID_EVPROP_DOMNODEREMOVED        (DISPID_EVENTS + 132)
#define DISPID_EVPROP_DOMSUBTREEMODIFIED    (DISPID_EVENTS + 133)
#define DISPID_EVPROP_CANPLAY               (DISPID_EVENTS + 134)
#define DISPID_EVPROP_CANPLAYTHROUGH        (DISPID_EVENTS + 135)
#define DISPID_EVPROP_DURATIONCHANGE        (DISPID_EVENTS + 136)
#define DISPID_EVPROP_EMPTIED               (DISPID_EVENTS + 137)
#define DISPID_EVPROP_ENDED                 (DISPID_EVENTS + 138)
#define DISPID_EVPROP_LOADEDDATA            (DISPID_EVENTS + 139)
#define DISPID_EVPROP_LOADEDMETADATA        (DISPID_EVENTS + 140)
#define DISPID_EVPROP_LOADSTART             (DISPID_EVENTS + 141)
#define DISPID_EVPROP_PAUSE                 (DISPID_EVENTS + 142)
#define DISPID_EVPROP_PLAY                  (DISPID_EVENTS + 143)
#define DISPID_EVPROP_PLAYING               (DISPID_EVENTS + 144)
#define DISPID_EVPROP_PROGRESS              (DISPID_EVENTS + 145)
#define DISPID_EVPROP_RATECHANGE            (DISPID_EVENTS + 146)
#define DISPID_EVPROP_SEEKED                (DISPID_EVENTS + 147)
#define DISPID_EVPROP_SEEKING               (DISPID_EVENTS + 148)
#define DISPID_EVPROP_STALLED               (DISPID_EVENTS + 149)
#define DISPID_EVPROP_SUSPEND               (DISPID_EVENTS + 150)
#define DISPID_EVPROP_TIMEUPDATE            (DISPID_EVENTS + 151)
#define DISPID_EVPROP_VOLUMECHANGE          (DISPID_EVENTS + 152)
#define DISPID_EVPROP_WAITING               (DISPID_EVENTS + 153)
#define DISPID_EVPROP_ONMSPOINTERDOWN       (DISPID_EVENTS + 154)
#define DISPID_EVPROP_ONMSPOINTERMOVE       (DISPID_EVENTS + 155)
#define DISPID_EVPROP_ONMSPOINTERUP         (DISPID_EVENTS + 156)
#define DISPID_EVPROP_ONMSPOINTEROVER       (DISPID_EVENTS + 157)
#define DISPID_EVPROP_ONMSPOINTEROUT        (DISPID_EVENTS + 158)
#define DISPID_EVPROP_ONMSPOINTERCANCEL     (DISPID_EVENTS + 159)
#define DISPID_EVPROP_ONMSPOINTERHOVER      (DISPID_EVENTS + 160)
#define DISPID_EVPROP_MSCONNECT             (DISPID_EVENTS + 161)
#define DISPID_EVPROP_MSDISCONNECT          (DISPID_EVENTS + 162)
#define DISPID_EVPROP_ONMSGESTURESTART      (DISPID_EVENTS + 163)
#define DISPID_EVPROP_ONMSGESTURECHANGE     (DISPID_EVENTS + 164)
#define DISPID_EVPROP_ONMSGESTUREEND        (DISPID_EVENTS + 165)
#define DISPID_EVPROP_ONMSGESTUREHOLD       (DISPID_EVENTS + 166)
#define DISPID_EVPROP_ONMSGESTURETAP        (DISPID_EVENTS + 167)
#define DISPID_EVPROP_ONMSGESTUREDOUBLETAP  (DISPID_EVENTS + 168)
#define DISPID_EVPROP_ONMSINERTIASTART      (DISPID_EVENTS + 169)
#define DISPID_EVPROP_ONMSLOSTPOINTERCAPTURE (DISPID_EVENTS + 170)
#define DISPID_EVPROP_ONMSGOTPOINTERCAPTURE (DISPID_EVENTS + 171)
#define DISPID_EVPROP_ONMSCONTENTZOOM       (DISPID_EVENTS + 172)
#define DISPID_EVPROP_ONTRANSITIONSTART     (DISPID_EVENTS + 173)
#define DISPID_EVPROP_ONTRANSITIONEND       (DISPID_EVENTS + 174)
#define DISPID_EVPROP_ONANIMATIONSTART      (DISPID_EVENTS + 175)
#define DISPID_EVPROP_ONANIMATIONEND        (DISPID_EVENTS + 176)
#define DISPID_EVPROP_ONANIMATIONITERATION  (DISPID_EVENTS + 177)
#define DISPID_EVPROP_ONMSMANIPULATIONSTATECHANGED    (DISPID_EVENTS + 178)
#define DISPID_EVPROP_ONOPEN                (DISPID_EVENTS + 179)
#define DISPID_EVPROP_ONCLOSE               (DISPID_EVENTS + 180)
#define DISPID_EVPROP_CHECKING              (DISPID_EVENTS + 181)
#define DISPID_EVPROP_NOUPDATE              (DISPID_EVENTS + 182)
#define DISPID_EVPROP_DOWNLOADING           (DISPID_EVENTS + 183)
#define DISPID_EVPROP_UPDATEREADY           (DISPID_EVENTS + 184)
#define DISPID_EVPROP_CACHED                (DISPID_EVENTS + 185)
#define DISPID_EVPROP_OBSOLETE              (DISPID_EVENTS + 186)
#define DISPID_EVPROP_LOADEND               (DISPID_EVENTS + 187)
#define DISPID_EVPROP_INVALID               (DISPID_EVENTS + 188)
#define DISPID_EVPROP_ONSUCCESS             (DISPID_EVENTS + 189)
#define DISPID_EVPROP_ONBLOCKED             (DISPID_EVENTS + 190)
#define DISPID_EVPROP_ONCOMPLETE            (DISPID_EVENTS + 191)
#define DISPID_EVPROP_ONPOPSTATE            (DISPID_EVENTS + 192)
#define DISPID_EVPROP_ONCUECHANGE           (DISPID_EVENTS + 193)
#define DISPID_EVPROP_ONENTER               (DISPID_EVENTS + 194)
#define DISPID_EVPROP_ONEXIT                (DISPID_EVENTS + 195)
#define DISPID_EVPROP_VISIBILITYCHANGE      (DISPID_EVENTS + 196)
#define DISPID_EVPROP_ONMSREGIONUPDATE      (DISPID_EVENTS + 197)
#define DISPID_EVPROP_ONUPGRADENEEDED       (DISPID_EVENTS + 198)
#define DISPID_EVPROP_ONMSVIDEOFORMATCHANGED (DISPID_EVENTS + 199)
#define DISPID_EVPROP_ADDTRACK              (DISPID_EVENTS + 200)
#define DISPID_EVPROP_ONMSVIDEOFRAMESTEPCOMPLETED (DISPID_EVENTS + 201)
#define DISPID_EVPROP_ONMSHOLDVISUAL        (DISPID_EVENTS + 202)
#define DISPID_EVPROP_ONMSVIDEOOPTIMALLAYOUTCHANGED (DISPID_EVENTS + 203)
#define DISPID_EVPROP_ONMSFULLSCREENCHANGE  (DISPID_EVENTS + 204)
#define DISPID_EVPROP_ONMSFULLSCREENERROR   (DISPID_EVENTS + 205)
#define DISPID_EVPROP_MSELEMENTRESIZE       (DISPID_EVENTS + 206)
#define DISPID_EVPROP_ONSOURCEOPEN          (DISPID_EVENTS + 207)
#define DISPID_EVPROP_ONSOURCECLOSE         (DISPID_EVENTS + 208)
#define DISPID_EVPROP_ONSOURCEENDED         (DISPID_EVENTS + 209)
#define DISPID_EVPROP_ONADDSOURCEBUFFER     (DISPID_EVENTS + 210)
#define DISPID_EVPROP_ONREMOVESOURCEBUFFER  (DISPID_EVENTS + 211)
#define DISPID_EVPROP_ONMSNEEDKEY           (DISPID_EVENTS + 212)
#define DISPID_EVPROP_ONMSKEYMESSAGE        (DISPID_EVENTS + 213)
#define DISPID_EVPROP_ONMSKEYERROR          (DISPID_EVENTS + 214)
#define DISPID_EVPROP_ONMSKEYADDED          (DISPID_EVENTS + 215)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONDOMCONTENTLOADED (DISPID_EVENTS + 216)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONCONTENTLOADING (DISPID_EVENTS + 217)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONNAVIGATIONSTARTING (DISPID_EVENTS + 218)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONNAVIGATIONCOMPLETED (DISPID_EVENTS + 219)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONFRAMEDOMCONTENTLOADED (DISPID_EVENTS + 220)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONFRAMECONTENTLOADING (DISPID_EVENTS + 221)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONFRAMENAVIGATIONSTARTING (DISPID_EVENTS + 222)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONFRAMENAVIGATIONCOMPLETED (DISPID_EVENTS + 223)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONSCRIPTNOTIFY (DISPID_EVENTS + 224)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONUNVIEWABLECONTENT (DISPID_EVENTS + 225)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONUNSAFECONTENTWARNINGDISPLAYING (DISPID_EVENTS + 226)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONLONGRUNNINGSCRIPTDETECTED (DISPID_EVENTS + 227)
#define DISPID_EVPROP_WEBGLCONTEXTLOST      (DISPID_EVENTS + 228)
#define DISPID_EVPROP_WEBGLCONTEXTRESTORED  (DISPID_EVENTS + 229)
#define DISPID_EVPROP_ONUPDATESTART         (DISPID_EVENTS + 230)
#define DISPID_EVPROP_ONUPDATE              (DISPID_EVENTS + 231)
#define DISPID_EVPROP_ONUPDATEEND           (DISPID_EVENTS + 232)
#define DISPID_EVPROP_ONMSPOINTERENTER      (DISPID_EVENTS + 233)
#define DISPID_EVPROP_ONMSPOINTERLEAVE      (DISPID_EVENTS + 234)
#define DISPID_EVPROP_ONMSSITEPINNED        (DISPID_EVENTS + 235)
#define DISPID_EVPROP_MSORIENTATIONCHANGE   (DISPID_EVENTS + 236)
#define DISPID_EVPROP_ONDEVICEORIENTATION   (DISPID_EVENTS + 237)
#define DISPID_EVPROP_ONDEVICEMOTION        (DISPID_EVENTS + 238)
#define DISPID_EVPROP_ONPAGESHOW            (DISPID_EVENTS + 239)
#define DISPID_EVPROP_ONPAGEHIDE            (DISPID_EVENTS + 240)
#define DISPID_EVPROP_ONMSCANDIDATEWINDOWSHOW (DISPID_EVENTS + 241)
#define DISPID_EVPROP_ONMSCANDIDATEWINDOWUPDATE (DISPID_EVENTS + 242)
#define DISPID_EVPROP_ONMSCANDIDATEWINDOWHIDE (DISPID_EVENTS + 243)
#define DISPID_EVPROP_HTML5ONREADYSTATECHANGE (DISPID_EVENTS + 244)
#define DISPID_EVPROP_REMOVETRACK           (DISPID_EVENTS + 245)
#define DISPID_EVPROP_ONCOMPASSNEEDSCALIBRATION (DISPID_EVENTS + 246)
#define DISPID_EVPROP_MSHTMLWEBVIEW_ONCONTAINSFULLSCREENELEMENTCHANGED (DISPID_EVENTS + 247)
#define DISPID_EVPROP_ONTOUCHSTART          (DISPID_EVENTS + 248)
#define DISPID_EVPROP_ONTOUCHEND            (DISPID_EVENTS + 249)
#define DISPID_EVPROP_ONTOUCHMOVE           (DISPID_EVENTS + 250)
#define DISPID_EVPROP_ONTOUCHCANCEL         (DISPID_EVENTS + 251)
#define DISPID_EVPROP_ONWEBKITTRANSITIONEND (DISPID_EVENTS + 252)   // webkit compat equivalent of DISPID_EVPROP_ONTRANSITIONEND
#define DISPID_EVPROP_ONWEBKITANIMATIONSTART (DISPID_EVENTS + 253)  // webkit compat equivalent of DISPID_EVPROP_ONANIMATIONSTART
#define DISPID_EVPROP_ONWEBKITANIMATIONEND  (DISPID_EVENTS + 254)   // webkit compat equivalent of DISPID_EVPROP_ONANIMATIONEND
#define DISPID_EVPROP_ONWEBKITANIMATIONITERATION (DISPID_EVENTS + 255)   // webkit compat equivalent of DISPID_EVPROP_ONANIMATIONITERATION
#define DISPID_EVPROP_WEBGLCONTEXTCREATIONERROR (DISPID_EVENTS + 256)
#define DISPID_EVPROP_ONDOMFOCUSIN          (DISPID_EVENTS + 257)   // webkit compat equivalent of DISPID_EVPROP_ONFOCUSIN
#define DISPID_EVPROP_ONDOMFOCUSOUT         (DISPID_EVENTS + 258)   // webkit compat equivalent of DISPID_EVPROP_ONFOCUSOUT
#define DISPID_EVPROP_ORIENTATIONCHANGE     (DISPID_EVENTS + 259)
#define DISPID_EVPROPS_COUNT                (                260)

//;begin_internal
#endif // __COREDISP_H__
//;end_internal//    DISPIDs for interface IHTMLFiltersCollection

#define DISPID_IHTMLFILTERSCOLLECTION_LENGTH                      DISPID_FILTERS+1
#define DISPID_IHTMLFILTERSCOLLECTION__NEWENUM                    DISPID_NEWENUM
#define DISPID_IHTMLFILTERSCOLLECTION_ITEM                        DISPID_VALUE

//    DISPIDs for interface IDispatchEx

#define DISPID_IDISPATCHEX_GETDISPID                              
#define DISPID_IDISPATCHEX_INVOKEEX                               
#define DISPID_IDISPATCHEX_DELETEMEMBERBYNAME                     
#define DISPID_IDISPATCHEX_DELETEMEMBERBYDISPID                   
#define DISPID_IDISPATCHEX_GETMEMBERPROPERTIES                    
#define DISPID_IDISPATCHEX_GETMEMBERNAME                          
#define DISPID_IDISPATCHEX_GETNEXTDISPID                          
#define DISPID_IDISPATCHEX_GETNAMESPACEPARENT                     

//    DISPIDs for interface IObjectIdentity

#define DISPID_IOBJECTIDENTITY_ISEQUALOBJECT                      

//    DISPIDs for interface IPerPropertyBrowsing

#define DISPID_IPERPROPERTYBROWSING_GETDISPLAYSTRING              
#define DISPID_IPERPROPERTYBROWSING_MAPPROPERTYTOPAGE             
#define DISPID_IPERPROPERTYBROWSING_GETPREDEFINEDSTRINGS          
#define DISPID_IPERPROPERTYBROWSING_GETPREDEFINEDVALUE            

//    DISPIDs for interface IHTMLDOMConstructor

#define DISPID_IHTMLDOMCONSTRUCTOR_CONSTRUCTOR                    DISPID_HTMLOBJECT+9
#define DISPID_IHTMLDOMCONSTRUCTOR_LOOKUPGETTER                   
#define DISPID_IHTMLDOMCONSTRUCTOR_LOOKUPSETTER                   
#define DISPID_IHTMLDOMCONSTRUCTOR_DEFINEGETTER                   
#define DISPID_IHTMLDOMCONSTRUCTOR_DEFINESETTER                   

//    DISPIDs for interface IHTMLCSSStyleDeclaration

#define DISPID_IHTMLCSSSTYLEDECLARATION_LENGTH                    DISPID_BASE_STYLE+1
#define DISPID_IHTMLCSSSTYLEDECLARATION_PARENTRULE                DISPID_BASE_STYLE+2
#define DISPID_IHTMLCSSSTYLEDECLARATION_GETPROPERTYVALUE          DISPID_BASE_STYLE+3
#define DISPID_IHTMLCSSSTYLEDECLARATION_GETPROPERTYPRIORITY       DISPID_BASE_STYLE+4
#define DISPID_IHTMLCSSSTYLEDECLARATION_REMOVEPROPERTY            DISPID_BASE_STYLE+5
#define DISPID_IHTMLCSSSTYLEDECLARATION_SETPROPERTY               DISPID_BASE_STYLE+6
#define DISPID_IHTMLCSSSTYLEDECLARATION_ITEM                      DISPID_VALUE
#define DISPID_IHTMLCSSSTYLEDECLARATION_FONTFAMILY                DISPID_A_FONTFACE
#define DISPID_IHTMLCSSSTYLEDECLARATION_FONTSTYLE                 DISPID_A_FONTSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION_FONTVARIANT               DISPID_A_FONTVARIANT
#define DISPID_IHTMLCSSSTYLEDECLARATION_FONTWEIGHT                DISPID_A_FONTWEIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_FONTSIZE                  DISPID_A_FONTSIZE
#define DISPID_IHTMLCSSSTYLEDECLARATION_FONT                      DISPID_A_FONT
#define DISPID_IHTMLCSSSTYLEDECLARATION_COLOR                     DISPID_A_COLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUND                DISPID_A_BACKGROUND
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDCOLOR           DISPID_BACKCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDIMAGE           DISPID_A_BACKGROUNDIMAGE
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDREPEAT          DISPID_A_BACKGROUNDREPEAT
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDATTACHMENT      DISPID_A_BACKGROUNDATTACHMENT
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDPOSITION        DISPID_A_BACKGROUNDPOSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDPOSITIONX       DISPID_A_BACKGROUNDPOSX
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDPOSITIONY       DISPID_A_BACKGROUNDPOSY
#define DISPID_IHTMLCSSSTYLEDECLARATION_WORDSPACING               DISPID_A_WORDSPACING
#define DISPID_IHTMLCSSSTYLEDECLARATION_LETTERSPACING             DISPID_A_LETTERSPACING
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTDECORATION            DISPID_A_TEXTDECORATION
#define DISPID_IHTMLCSSSTYLEDECLARATION_VERTICALALIGN             DISPID_A_VERTICALALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTTRANSFORM             DISPID_A_TEXTTRANSFORM
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTALIGN                 STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTINDENT                DISPID_A_TEXTINDENT
#define DISPID_IHTMLCSSSTYLEDECLARATION_LINEHEIGHT                DISPID_A_LINEHEIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARGINTOP                 DISPID_A_MARGINTOP
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARGINRIGHT               DISPID_A_MARGINRIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARGINBOTTOM              DISPID_A_MARGINBOTTOM
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARGINLEFT                DISPID_A_MARGINLEFT
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARGIN                    DISPID_A_MARGIN
#define DISPID_IHTMLCSSSTYLEDECLARATION_PADDINGTOP                DISPID_A_PADDINGTOP
#define DISPID_IHTMLCSSSTYLEDECLARATION_PADDINGRIGHT              DISPID_A_PADDINGRIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_PADDINGBOTTOM             DISPID_A_PADDINGBOTTOM
#define DISPID_IHTMLCSSSTYLEDECLARATION_PADDINGLEFT               DISPID_A_PADDINGLEFT
#define DISPID_IHTMLCSSSTYLEDECLARATION_PADDING                   DISPID_A_PADDING
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDER                    DISPID_A_BORDER
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERTOP                 DISPID_A_BORDERTOP
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERRIGHT               DISPID_A_BORDERRIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERBOTTOM              DISPID_A_BORDERBOTTOM
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERLEFT                DISPID_A_BORDERLEFT
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERCOLOR               DISPID_A_BORDERCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERTOPCOLOR            DISPID_A_BORDERTOPCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERRIGHTCOLOR          DISPID_A_BORDERRIGHTCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERBOTTOMCOLOR         DISPID_A_BORDERBOTTOMCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERLEFTCOLOR           DISPID_A_BORDERLEFTCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERWIDTH               DISPID_A_BORDERWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERTOPWIDTH            DISPID_A_BORDERTOPWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERRIGHTWIDTH          DISPID_A_BORDERRIGHTWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERBOTTOMWIDTH         DISPID_A_BORDERBOTTOMWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERLEFTWIDTH           DISPID_A_BORDERLEFTWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERSTYLE               DISPID_A_BORDERSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERTOPSTYLE            DISPID_A_BORDERTOPSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERRIGHTSTYLE          DISPID_A_BORDERRIGHTSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERBOTTOMSTYLE         DISPID_A_BORDERBOTTOMSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERLEFTSTYLE           DISPID_A_BORDERLEFTSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION_WIDTH                     STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_HEIGHT                    STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_STYLEFLOAT                DISPID_A_FLOAT
#define DISPID_IHTMLCSSSTYLEDECLARATION_CLEAR                     DISPID_A_CLEAR
#define DISPID_IHTMLCSSSTYLEDECLARATION_DISPLAY                   DISPID_A_DISPLAY
#define DISPID_IHTMLCSSSTYLEDECLARATION_VISIBILITY                DISPID_A_VISIBILITY
#define DISPID_IHTMLCSSSTYLEDECLARATION_LISTSTYLETYPE             DISPID_A_LISTSTYLETYPE
#define DISPID_IHTMLCSSSTYLEDECLARATION_LISTSTYLEPOSITION         DISPID_A_LISTSTYLEPOSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION_LISTSTYLEIMAGE            DISPID_A_LISTSTYLEIMAGE
#define DISPID_IHTMLCSSSTYLEDECLARATION_LISTSTYLE                 DISPID_A_LISTSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION_WHITESPACE                DISPID_A_WHITESPACE
#define DISPID_IHTMLCSSSTYLEDECLARATION_TOP                       STDPROPID_XOBJ_TOP
#define DISPID_IHTMLCSSSTYLEDECLARATION_LEFT                      STDPROPID_XOBJ_LEFT
#define DISPID_IHTMLCSSSTYLEDECLARATION_ZINDEX                    DISPID_A_ZINDEX
#define DISPID_IHTMLCSSSTYLEDECLARATION_OVERFLOW                  DISPID_A_OVERFLOW
#define DISPID_IHTMLCSSSTYLEDECLARATION_PAGEBREAKBEFORE           DISPID_A_PAGEBREAKBEFORE
#define DISPID_IHTMLCSSSTYLEDECLARATION_PAGEBREAKAFTER            DISPID_A_PAGEBREAKAFTER
#define DISPID_IHTMLCSSSTYLEDECLARATION_CSSTEXT                   DISPID_A_STYLETEXT
#define DISPID_IHTMLCSSSTYLEDECLARATION_CURSOR                    DISPID_A_CURSOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_CLIP                      DISPID_A_CLIP
#define DISPID_IHTMLCSSSTYLEDECLARATION_FILTER                    DISPID_A_FILTER
#define DISPID_IHTMLCSSSTYLEDECLARATION_TABLELAYOUT               DISPID_A_TABLELAYOUT
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERCOLLAPSE            DISPID_A_BORDERCOLLAPSE
#define DISPID_IHTMLCSSSTYLEDECLARATION_DIRECTION                 DISPID_A_DIRECTION
#define DISPID_IHTMLCSSSTYLEDECLARATION_BEHAVIOR                  DISPID_A_BEHAVIOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_POSITION                  DISPID_A_POSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION_UNICODEBIDI               DISPID_A_UNICODEBIDI
#define DISPID_IHTMLCSSSTYLEDECLARATION_BOTTOM                    STDPROPID_XOBJ_BOTTOM
#define DISPID_IHTMLCSSSTYLEDECLARATION_RIGHT                     STDPROPID_XOBJ_RIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_IMEMODE                   DISPID_A_IMEMODE
#define DISPID_IHTMLCSSSTYLEDECLARATION_RUBYALIGN                 DISPID_A_RUBYALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION_RUBYPOSITION              DISPID_A_RUBYPOSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION_RUBYOVERHANG              DISPID_A_RUBYOVERHANG
#define DISPID_IHTMLCSSSTYLEDECLARATION_LAYOUTGRIDCHAR            DISPID_A_LAYOUTGRIDCHAR
#define DISPID_IHTMLCSSSTYLEDECLARATION_LAYOUTGRIDLINE            DISPID_A_LAYOUTGRIDLINE
#define DISPID_IHTMLCSSSTYLEDECLARATION_LAYOUTGRIDMODE            DISPID_A_LAYOUTGRIDMODE
#define DISPID_IHTMLCSSSTYLEDECLARATION_LAYOUTGRIDTYPE            DISPID_A_LAYOUTGRIDTYPE
#define DISPID_IHTMLCSSSTYLEDECLARATION_LAYOUTGRID                DISPID_A_LAYOUTGRID
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTAUTOSPACE             DISPID_A_TEXTAUTOSPACE
#define DISPID_IHTMLCSSSTYLEDECLARATION_WORDBREAK                 DISPID_A_WORDBREAK
#define DISPID_IHTMLCSSSTYLEDECLARATION_LINEBREAK                 DISPID_A_LINEBREAK
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTJUSTIFY               DISPID_A_TEXTJUSTIFY
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTJUSTIFYTRIM           DISPID_A_TEXTJUSTIFYTRIM
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTKASHIDA               DISPID_A_TEXTKASHIDA
#define DISPID_IHTMLCSSSTYLEDECLARATION_OVERFLOWX                 DISPID_A_OVERFLOWX
#define DISPID_IHTMLCSSSTYLEDECLARATION_OVERFLOWY                 DISPID_A_OVERFLOWY
#define DISPID_IHTMLCSSSTYLEDECLARATION_ACCELERATOR               DISPID_A_ACCELERATOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_LAYOUTFLOW                DISPID_A_LAYOUTFLOW
#define DISPID_IHTMLCSSSTYLEDECLARATION_ZOOM                      DISPID_A_ZOOM
#define DISPID_IHTMLCSSSTYLEDECLARATION_WORDWRAP                  DISPID_A_WORDWRAP
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTUNDERLINEPOSITION     DISPID_A_TEXTUNDERLINEPOSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION_SCROLLBARBASECOLOR        DISPID_A_SCROLLBARBASECOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_SCROLLBARFACECOLOR        DISPID_A_SCROLLBARFACECOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_SCROLLBAR3DLIGHTCOLOR     DISPID_A_SCROLLBAR3DLIGHTCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_SCROLLBARSHADOWCOLOR      DISPID_A_SCROLLBARSHADOWCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_SCROLLBARHIGHLIGHTCOLOR   DISPID_A_SCROLLBARHIGHLIGHTCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_SCROLLBARDARKSHADOWCOLOR  DISPID_A_SCROLLBARDARKSHADOWCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_SCROLLBARARROWCOLOR       DISPID_A_SCROLLBARARROWCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_SCROLLBARTRACKCOLOR       DISPID_A_SCROLLBARTRACKCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_WRITINGMODE               DISPID_A_WRITINGMODE
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTALIGNLAST             DISPID_A_TEXTALIGNLAST
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTKASHIDASPACE          DISPID_A_TEXTKASHIDASPACE
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTOVERFLOW              DISPID_A_TEXTOVERFLOW
#define DISPID_IHTMLCSSSTYLEDECLARATION_MINHEIGHT                 DISPID_A_MINHEIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_MSINTERPOLATIONMODE       DISPID_A_INTERPOLATION
#define DISPID_IHTMLCSSSTYLEDECLARATION_MAXHEIGHT                 DISPID_A_MAXHEIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_MINWIDTH                  DISPID_A_MINWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_MAXWIDTH                  DISPID_A_MAXWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_CONTENT                   DISPID_A_CONTENT
#define DISPID_IHTMLCSSSTYLEDECLARATION_CAPTIONSIDE               DISPID_A_CAPTIONSIDE
#define DISPID_IHTMLCSSSTYLEDECLARATION_COUNTERINCREMENT          DISPID_A_COUNTERINCREMENT
#define DISPID_IHTMLCSSSTYLEDECLARATION_COUNTERRESET              DISPID_A_COUNTERRESET
#define DISPID_IHTMLCSSSTYLEDECLARATION_OUTLINE                   DISPID_A_OUTLINE
#define DISPID_IHTMLCSSSTYLEDECLARATION_OUTLINEWIDTH              DISPID_A_OUTLINEWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_OUTLINESTYLE              DISPID_A_OUTLINESTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION_OUTLINECOLOR              DISPID_A_OUTLINECOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_BOXSIZING                 DISPID_A_BOXSIZING
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERSPACING             DISPID_A_BORDERSPACING
#define DISPID_IHTMLCSSSTYLEDECLARATION_ORPHANS                   DISPID_A_ORPHANS
#define DISPID_IHTMLCSSSTYLEDECLARATION_WIDOWS                    DISPID_A_WIDOWS
#define DISPID_IHTMLCSSSTYLEDECLARATION_PAGEBREAKINSIDE           DISPID_A_PAGEBREAKINSIDE
#define DISPID_IHTMLCSSSTYLEDECLARATION_EMPTYCELLS                DISPID_A_EMPTYCELLS
#define DISPID_IHTMLCSSSTYLEDECLARATION_MSBLOCKPROGRESSION        DISPID_A_MS_BLOCKPROGRESSION
#define DISPID_IHTMLCSSSTYLEDECLARATION_QUOTES                    DISPID_A_QUOTES
#define DISPID_IHTMLCSSSTYLEDECLARATION_ALIGNMENTBASELINE         DISPID_A_ALIGNMENTBASELINE
#define DISPID_IHTMLCSSSTYLEDECLARATION_BASELINESHIFT             DISPID_A_BASELINESHIFT
#define DISPID_IHTMLCSSSTYLEDECLARATION_DOMINANTBASELINE          DISPID_A_DOMINANTBASELINE
#define DISPID_IHTMLCSSSTYLEDECLARATION_FONTSIZEADJUST            DISPID_A_FONTSIZEADJUST
#define DISPID_IHTMLCSSSTYLEDECLARATION_FONTSTRETCH               DISPID_A_FONTSTRETCH
#define DISPID_IHTMLCSSSTYLEDECLARATION_OPACITY                   DISPID_A_OPACITY
#define DISPID_IHTMLCSSSTYLEDECLARATION_CLIPPATH                  DISPID_A_CLIPPATH
#define DISPID_IHTMLCSSSTYLEDECLARATION_CLIPRULE                  DISPID_A_CLIPRULE
#define DISPID_IHTMLCSSSTYLEDECLARATION_FILL                      DISPID_A_FILL
#define DISPID_IHTMLCSSSTYLEDECLARATION_FILLOPACITY               DISPID_A_FILLOPACITY
#define DISPID_IHTMLCSSSTYLEDECLARATION_FILLRULE                  DISPID_A_FILLRULE
#define DISPID_IHTMLCSSSTYLEDECLARATION_KERNING                   DISPID_A_KERNING
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARKER                    DISPID_A_MARKER
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARKEREND                 DISPID_A_MARKEREND
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARKERMID                 DISPID_A_MARKERMID
#define DISPID_IHTMLCSSSTYLEDECLARATION_MARKERSTART               DISPID_A_MARKERSTART
#define DISPID_IHTMLCSSSTYLEDECLARATION_MASK                      DISPID_A_MASK
#define DISPID_IHTMLCSSSTYLEDECLARATION_POINTEREVENTS             DISPID_A_POINTEREVENTS
#define DISPID_IHTMLCSSSTYLEDECLARATION_STOPCOLOR                 DISPID_A_STOPCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_STOPOPACITY               DISPID_A_STOPOPACITY
#define DISPID_IHTMLCSSSTYLEDECLARATION_STROKE                    DISPID_A_STROKE
#define DISPID_IHTMLCSSSTYLEDECLARATION_STROKEDASHARRAY           DISPID_A_STROKEDASHARRAY
#define DISPID_IHTMLCSSSTYLEDECLARATION_STROKEDASHOFFSET          DISPID_A_STROKEDASHOFFSET
#define DISPID_IHTMLCSSSTYLEDECLARATION_STROKELINECAP             DISPID_A_STROKELINECAP
#define DISPID_IHTMLCSSSTYLEDECLARATION_STROKELINEJOIN            DISPID_A_STROKELINEJOIN
#define DISPID_IHTMLCSSSTYLEDECLARATION_STROKEMITERLIMIT          DISPID_A_STROKEMITERLIMIT
#define DISPID_IHTMLCSSSTYLEDECLARATION_STROKEOPACITY             DISPID_A_STROKEOPACITY
#define DISPID_IHTMLCSSSTYLEDECLARATION_STROKEWIDTH               DISPID_A_STROKEWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION_TEXTANCHOR                DISPID_A_TEXTANCHOR
#define DISPID_IHTMLCSSSTYLEDECLARATION_GLYPHORIENTATIONHORIZONTAL DISPID_A_GLYPHORIENTATIONHORIZONTAL
#define DISPID_IHTMLCSSSTYLEDECLARATION_GLYPHORIENTATIONVERTICAL  DISPID_A_GLYPHORIENTATIONVERTICAL
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERRADIUS              DISPID_A_BORDERRADIUS
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERTOPLEFTRADIUS       DISPID_A_BORDERTOPLEFTRADIUS
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERTOPRIGHTRADIUS      DISPID_A_BORDERTOPRIGHTRADIUS
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERBOTTOMRIGHTRADIUS   DISPID_A_BORDERBOTTOMRIGHTRADIUS
#define DISPID_IHTMLCSSSTYLEDECLARATION_BORDERBOTTOMLEFTRADIUS    DISPID_A_BORDERBOTTOMLEFTRADIUS
#define DISPID_IHTMLCSSSTYLEDECLARATION_CLIPTOP                   DISPID_A_CLIPRECTTOP
#define DISPID_IHTMLCSSSTYLEDECLARATION_CLIPRIGHT                 DISPID_A_CLIPRECTRIGHT
#define DISPID_IHTMLCSSSTYLEDECLARATION_CLIPBOTTOM                DISPID_A_CLIPRECTBOTTOM
#define DISPID_IHTMLCSSSTYLEDECLARATION_CLIPLEFT                  DISPID_A_CLIPRECTLEFT
#define DISPID_IHTMLCSSSTYLEDECLARATION_CSSFLOAT                  DISPID_A_CSSFLOAT
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDCLIP            DISPID_A_IE9_BACKGROUNDCLIP
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDORIGIN          DISPID_A_IE9_BACKGROUNDORIGIN
#define DISPID_IHTMLCSSSTYLEDECLARATION_BACKGROUNDSIZE            DISPID_A_IE9_BACKGROUNDSIZE
#define DISPID_IHTMLCSSSTYLEDECLARATION_BOXSHADOW                 DISPID_A_IE9_BOXSHADOW
#define DISPID_IHTMLCSSSTYLEDECLARATION_MSTRANSFORM               DISPID_A_MS_TRANSFORM
#define DISPID_IHTMLCSSSTYLEDECLARATION_MSTRANSFORMORIGIN         DISPID_A_MS_TRANSFORMORIGIN

//    DISPIDs for interface IHTMLCSSStyleDeclaration2

#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLCHAINING         DISPID_A_MS_SCROLLCHAINING
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSCONTENTZOOMING         DISPID_A_MS_CONTENTZOOMING
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSCONTENTZOOMSNAPTYPE    DISPID_A_MS_CONTENTZOOMSNAPTYPE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLRAILS            DISPID_A_MS_SCROLLRAILS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSCONTENTZOOMCHAINING    DISPID_A_MS_CONTENTZOOMCHAINING
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLSNAPTYPE         DISPID_A_MS_SCROLLSNAPTYPE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSCONTENTZOOMLIMIT       DISPID_A_MS_CONTENTZOOMLIMIT
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSCONTENTZOOMSNAP        DISPID_A_MS_CONTENTZOOMSNAP
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSCONTENTZOOMSNAPPOINTS  DISPID_A_MS_CONTENTZOOMSNAPPOINTS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSCONTENTZOOMLIMITMIN    DISPID_A_MS_CONTENTZOOMLIMITMIN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSCONTENTZOOMLIMITMAX    DISPID_A_MS_CONTENTZOOMLIMITMAX
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLSNAPX            DISPID_A_MS_SCROLLSNAPX
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLSNAPY            DISPID_A_MS_SCROLLSNAPY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLSNAPPOINTSX      DISPID_A_MS_SCROLLSNAPPOINTSX
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLSNAPPOINTSY      DISPID_A_MS_SCROLLSNAPPOINTSY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSGRIDCOLUMN             DISPID_A_MS_GRIDCOLUMN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSGRIDCOLUMNALIGN        DISPID_A_MS_GRIDCOLUMNALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSGRIDCOLUMNS            DISPID_A_MS_GRIDCOLUMNS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSGRIDCOLUMNSPAN         DISPID_A_MS_GRIDCOLUMNSPAN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSGRIDROW                DISPID_A_MS_GRIDROW
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSGRIDROWALIGN           DISPID_A_MS_GRIDROWALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSGRIDROWS               DISPID_A_MS_GRIDROWS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSGRIDROWSPAN            DISPID_A_MS_GRIDROWSPAN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSWRAPTHROUGH            DISPID_A_MS_WRAPTHROUGH
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSWRAPMARGIN             DISPID_A_MS_WRAPMARGIN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSWRAPFLOW               DISPID_A_MS_WRAPFLOW
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATIONNAME          DISPID_A_MS_ANIMATIONNAME
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATIONDURATION      DISPID_A_MS_ANIMATIONDURATION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATIONTIMINGFUNCTION DISPID_A_MS_ANIMATIONTIMINGFUNCTION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATIONDELAY         DISPID_A_MS_ANIMATIONDELAY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATIONDIRECTION     DISPID_A_MS_ANIMATIONDIRECTION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATIONPLAYSTATE     DISPID_A_MS_ANIMATIONPLAYSTATE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATIONITERATIONCOUNT DISPID_A_MS_ANIMATIONITERATIONCOUNT
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATION              DISPID_A_MS_ANIMATION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSANIMATIONFILLMODE      DISPID_A_MS_ANIMATIONFILLMODE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLORINTERPOLATIONFILTERS DISPID_A_COLORINTERPOLATIONFILTERS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNCOUNT              DISPID_A_COLUMNCOUNT
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNWIDTH              DISPID_A_COLUMNWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNGAP                DISPID_A_COLUMNGAP
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNFILL               DISPID_A_COLUMNFILL
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNSPAN               DISPID_A_COLUMNSPAN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNS                  DISPID_A_COLUMNS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNRULE               DISPID_A_COLUMNRULE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNRULECOLOR          DISPID_A_COLUMNRULECOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNRULESTYLE          DISPID_A_COLUMNRULESTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_COLUMNRULEWIDTH          DISPID_A_COLUMNRULEWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION2_BREAKBEFORE              DISPID_A_BREAKBEFORE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_BREAKAFTER               DISPID_A_BREAKAFTER
#define DISPID_IHTMLCSSSTYLEDECLARATION2_BREAKINSIDE              DISPID_A_BREAKINSIDE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_FLOODCOLOR               DISPID_A_FLOODCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION2_FLOODOPACITY             DISPID_A_FLOODOPACITY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_LIGHTINGCOLOR            DISPID_A_LIGHTINGCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLLIMITXMIN        DISPID_A_MS_SCROLLLIMITXMIN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLLIMITYMIN        DISPID_A_MS_SCROLLLIMITYMIN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLLIMITXMAX        DISPID_A_MS_SCROLLLIMITXMAX
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLLIMITYMAX        DISPID_A_MS_SCROLLLIMITYMAX
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLLIMIT            DISPID_A_MS_SCROLLLIMIT
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TEXTSHADOW               DISPID_A_TEXTSHADOW
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLOWFROM               DISPID_A_MS_FLOWFROM
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLOWINTO               DISPID_A_MS_FLOWINTO
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSHYPHENS                DISPID_A_MS_HYPHENS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSHYPHENATELIMITZONE     DISPID_A_MS_HYPHENATE_LIMIT_ZONE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSHYPHENATELIMITCHARS    DISPID_A_MS_HYPHENATE_LIMIT_CHARS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSHYPHENATELIMITLINES    DISPID_A_MS_HYPHENATE_LIMIT_LINES
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSHIGHCONTRASTADJUST     DISPID_A_MS_HIGHCONTRASTADJUST
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ENABLEBACKGROUND         DISPID_A_ENABLEBACKGROUND
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFONTFEATURESETTINGS    DISPID_A_MS_FONTFEATURESETTINGS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSUSERSELECT             DISPID_A_MS_USERSELECT
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSOVERFLOWSTYLE          DISPID_A_MS_OVERFLOWSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSTRANSFORMSTYLE         DISPID_A_MS_TRANSFORMSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSBACKFACEVISIBILITY     DISPID_A_MS_BACKFACEVISIBILITY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSPERSPECTIVE            DISPID_A_MS_PERSPECTIVE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSPERSPECTIVEORIGIN      DISPID_A_MS_PERSPECTIVEORIGIN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSTRANSITIONPROPERTY     DISPID_A_MS_TRANSITIONPROPERTY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSTRANSITIONDURATION     DISPID_A_MS_TRANSITIONDURATION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSTRANSITIONTIMINGFUNCTION DISPID_A_MS_TRANSITIONTIMINGFUNCTION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSTRANSITIONDELAY        DISPID_A_MS_TRANSITIONDELAY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSTRANSITION             DISPID_A_MS_TRANSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSTOUCHACTION            DISPID_A_MS_TOUCHACTION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSSCROLLTRANSLATION      DISPID_A_MS_SCROLLTRANSLATION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEX                   DISPID_A_MS_FLEX
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXPOSITIVE           DISPID_A_MS_FLEXPOSITIVE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXNEGATIVE           DISPID_A_MS_FLEXNEGATIVE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXPREFERREDSIZE      DISPID_A_MS_FLEXPREFERREDSIZE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXFLOW               DISPID_A_MS_FLEXFLOW
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXDIRECTION          DISPID_A_MS_FLEXDIRECTION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXWRAP               DISPID_A_MS_FLEXWRAP
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXALIGN              DISPID_A_MS_FLEXALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXITEMALIGN          DISPID_A_MS_FLEXITEMALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXPACK               DISPID_A_MS_FLEXPACK
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXLINEPACK           DISPID_A_MS_FLEXLINEPACK
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSFLEXORDER              DISPID_A_MS_FLEXORDER
#define DISPID_IHTMLCSSSTYLEDECLARATION2_MSTOUCHSELECT            DISPID_A_MS_TOUCHSELECT
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TRANSFORM                DISPID_A_TRANSFORM
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TRANSFORMORIGIN          DISPID_A_TRANSFORMORIGIN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TRANSFORMSTYLE           DISPID_A_TRANSFORMSTYLE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_BACKFACEVISIBILITY       DISPID_A_BACKFACEVISIBILITY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_PERSPECTIVE              DISPID_A_PERSPECTIVE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_PERSPECTIVEORIGIN        DISPID_A_PERSPECTIVEORIGIN
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TRANSITIONPROPERTY       DISPID_A_TRANSITIONPROPERTY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TRANSITIONDURATION       DISPID_A_TRANSITIONDURATION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TRANSITIONTIMINGFUNCTION DISPID_A_TRANSITIONTIMINGFUNCTION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TRANSITIONDELAY          DISPID_A_TRANSITIONDELAY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_TRANSITION               DISPID_A_TRANSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_FONTFEATURESETTINGS      DISPID_A_FONTFEATURESETTINGS
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATIONNAME            DISPID_A_ANIMATIONNAME
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATIONDURATION        DISPID_A_ANIMATIONDURATION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATIONTIMINGFUNCTION  DISPID_A_ANIMATIONTIMINGFUNCTION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATIONDELAY           DISPID_A_ANIMATIONDELAY
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATIONDIRECTION       DISPID_A_ANIMATIONDIRECTION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATIONPLAYSTATE       DISPID_A_ANIMATIONPLAYSTATE
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATIONITERATIONCOUNT  DISPID_A_ANIMATIONITERATIONCOUNT
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATION                DISPID_A_ANIMATION
#define DISPID_IHTMLCSSSTYLEDECLARATION2_ANIMATIONFILLMODE        DISPID_A_ANIMATIONFILLMODE

//    DISPIDs for interface IHTMLCSSStyleDeclaration3

#define DISPID_IHTMLCSSSTYLEDECLARATION3_FLEX                     DISPID_A_FLEX
#define DISPID_IHTMLCSSSTYLEDECLARATION3_FLEXDIRECTION            DISPID_A_FLEXDIRECTION
#define DISPID_IHTMLCSSSTYLEDECLARATION3_FLEXWRAP                 DISPID_A_FLEXWRAP
#define DISPID_IHTMLCSSSTYLEDECLARATION3_FLEXFLOW                 DISPID_A_FLEXFLOW
#define DISPID_IHTMLCSSSTYLEDECLARATION3_FLEXGROW                 DISPID_A_FLEXGROW
#define DISPID_IHTMLCSSSTYLEDECLARATION3_FLEXSHRINK               DISPID_A_FLEXSHRINK
#define DISPID_IHTMLCSSSTYLEDECLARATION3_FLEXBASIS                DISPID_A_FLEXBASIS
#define DISPID_IHTMLCSSSTYLEDECLARATION3_JUSTIFYCONTENT           DISPID_A_JUSTIFYCONTENT
#define DISPID_IHTMLCSSSTYLEDECLARATION3_ALIGNITEMS               DISPID_A_ALIGNITEMS
#define DISPID_IHTMLCSSSTYLEDECLARATION3_ALIGNSELF                DISPID_A_ALIGNSELF
#define DISPID_IHTMLCSSSTYLEDECLARATION3_ALIGNCONTENT             DISPID_A_ALIGNCONTENT
#define DISPID_IHTMLCSSSTYLEDECLARATION3_BORDERIMAGE              DISPID_A_BORDERIMAGE
#define DISPID_IHTMLCSSSTYLEDECLARATION3_BORDERIMAGESOURCE        DISPID_A_BORDERIMAGESOURCE
#define DISPID_IHTMLCSSSTYLEDECLARATION3_BORDERIMAGESLICE         DISPID_A_BORDERIMAGESLICE
#define DISPID_IHTMLCSSSTYLEDECLARATION3_BORDERIMAGEWIDTH         DISPID_A_BORDERIMAGEWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION3_BORDERIMAGEOUTSET        DISPID_A_BORDERIMAGEOUTSET
#define DISPID_IHTMLCSSSTYLEDECLARATION3_BORDERIMAGEREPEAT        DISPID_A_BORDERIMAGEREPEAT
#define DISPID_IHTMLCSSSTYLEDECLARATION3_MSIMEALIGN               DISPID_A_MS_IMEALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION3_MSTEXTCOMBINEHORIZONTAL  DISPID_A_MS_TEXTCOMBINEHORIZONTAL
#define DISPID_IHTMLCSSSTYLEDECLARATION3_TOUCHACTION              DISPID_A_TOUCHACTION

//    DISPIDs for interface IHTMLCSSStyleDeclaration4

#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITAPPEARANCE         DISPID_A_WEBKIT_APPEARANCE
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITUSERSELECT         DISPID_A_WEBKIT_USERSELECT
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBOXALIGN           DISPID_A_WEBKIT_BOXALIGN
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBOXORDINALGROUP    DISPID_A_WEBKIT_BOXORDINALGROUP
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBOXPACK            DISPID_A_WEBKIT_BOXPACK
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBOXFLEX            DISPID_A_WEBKIT_BOXFLEX
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBOXORIENT          DISPID_A_WEBKIT_BOXORIENT
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBOXDIRECTION       DISPID_A_WEBKIT_BOXDIRECTION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITTRANSFORM          DISPID_A_WEBKIT_TRANSFORM
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDSIZE     DISPID_A_WEBKIT_BACKGROUNDSIZE
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKFACEVISIBILITY DISPID_A_WEBKIT_BACKFACEVISIBILITY
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATION          DISPID_A_WEBKIT_ANIMATION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITTRANSITION         DISPID_A_WEBKIT_TRANSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATIONNAME      DISPID_A_WEBKIT_ANIMATIONNAME
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATIONDURATION  DISPID_A_WEBKIT_ANIMATIONDURATION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATIONTIMINGFUNCTION DISPID_A_WEBKIT_ANIMATIONTIMINGFUNCTION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATIONDELAY     DISPID_A_WEBKIT_ANIMATIONDELAY
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATIONITERATIONCOUNT DISPID_A_WEBKIT_ANIMATIONITERATIONCOUNT
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATIONDIRECTION DISPID_A_WEBKIT_ANIMATIONDIRECTION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATIONPLAYSTATE DISPID_A_WEBKIT_ANIMATIONPLAYSTATE
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITTRANSITIONPROPERTY DISPID_A_WEBKIT_TRANSITIONPROPERTY
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITTRANSITIONDURATION DISPID_A_WEBKIT_TRANSITIONDURATION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITTRANSITIONTIMINGFUNCTION DISPID_A_WEBKIT_TRANSITIONTIMINGFUNCTION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITTRANSITIONDELAY    DISPID_A_WEBKIT_TRANSITIONDELAY
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDATTACHMENT DISPID_A_WEBKIT_BACKGROUNDATTACHMENT
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDCOLOR    DISPID_A_WEBKIT_BACKGROUNDCOLOR
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDCLIP     DISPID_A_WEBKIT_BACKGROUNDCLIP
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDIMAGE    DISPID_A_WEBKIT_BACKGROUNDIMAGE
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDREPEAT   DISPID_A_WEBKIT_BACKGROUNDREPEAT
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDORIGIN   DISPID_A_WEBKIT_BACKGROUNDORIGIN
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDPOSITION DISPID_A_WEBKIT_BACKGROUNDPOSITION
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDPOSITIONX DISPID_A_WEBKIT_BACKGROUNDPOSITIONX
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUNDPOSITIONY DISPID_A_WEBKIT_BACKGROUNDPOSITIONY
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBACKGROUND         DISPID_A_WEBKIT_BACKGROUND
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITTRANSFORMORIGIN    DISPID_A_WEBKIT_TRANSFORMORIGIN
#define DISPID_IHTMLCSSSTYLEDECLARATION4_MSTEXTSIZEADJUST         DISPID_A_MS_TEXTSIZEADJUST
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITTEXTSIZEADJUST     DISPID_A_WEBKIT_TEXTSIZEADJUST
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBORDERIMAGE        DISPID_A_WEBKIT_BORDERIMAGE
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBORDERIMAGESOURCE  DISPID_A_WEBKIT_BORDERIMAGESOURCE
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBORDERIMAGESLICE   DISPID_A_WEBKIT_BORDERIMAGESLICE
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBORDERIMAGEWIDTH   DISPID_A_WEBKIT_BORDERIMAGEWIDTH
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBORDERIMAGEOUTSET  DISPID_A_WEBKIT_BORDERIMAGEOUTSET
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBORDERIMAGEREPEAT  DISPID_A_WEBKIT_BORDERIMAGEREPEAT
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITBOXSIZING          DISPID_A_WEBKIT_BOXSIZING
#define DISPID_IHTMLCSSSTYLEDECLARATION4_WEBKITANIMATIONFILLMODE  DISPID_A_WEBKIT_ANIMATIONFILLMODE

//    DISPIDs for interface IHTMLStyleEnabled

#define DISPID_IHTMLSTYLEENABLED_MSGETPROPERTYENABLED             DISPID_BASE_STYLE+7
#define DISPID_IHTMLSTYLEENABLED_MSPUTPROPERTYENABLED             DISPID_BASE_STYLE+8

//    DISPIDs for interface IHTMLStyle

#define DISPID_IHTMLSTYLE_FONTFAMILY                              DISPID_A_FONTFACE
#define DISPID_IHTMLSTYLE_FONTSTYLE                               DISPID_A_FONTSTYLE
#define DISPID_IHTMLSTYLE_FONTVARIANT                             DISPID_A_FONTVARIANT
#define DISPID_IHTMLSTYLE_FONTWEIGHT                              DISPID_A_FONTWEIGHT
#define DISPID_IHTMLSTYLE_FONTSIZE                                DISPID_A_FONTSIZE
#define DISPID_IHTMLSTYLE_FONT                                    DISPID_A_FONT
#define DISPID_IHTMLSTYLE_COLOR                                   DISPID_A_COLOR
#define DISPID_IHTMLSTYLE_BACKGROUND                              DISPID_A_BACKGROUND
#define DISPID_IHTMLSTYLE_BACKGROUNDCOLOR                         DISPID_BACKCOLOR
#define DISPID_IHTMLSTYLE_BACKGROUNDIMAGE                         DISPID_A_BACKGROUNDIMAGE
#define DISPID_IHTMLSTYLE_BACKGROUNDREPEAT                        DISPID_A_BACKGROUNDREPEAT
#define DISPID_IHTMLSTYLE_BACKGROUNDATTACHMENT                    DISPID_A_BACKGROUNDATTACHMENT
#define DISPID_IHTMLSTYLE_BACKGROUNDPOSITION                      DISPID_A_BACKGROUNDPOSITION
#define DISPID_IHTMLSTYLE_BACKGROUNDPOSITIONX                     DISPID_A_BACKGROUNDPOSX
#define DISPID_IHTMLSTYLE_BACKGROUNDPOSITIONY                     DISPID_A_BACKGROUNDPOSY
#define DISPID_IHTMLSTYLE_WORDSPACING                             DISPID_A_WORDSPACING
#define DISPID_IHTMLSTYLE_LETTERSPACING                           DISPID_A_LETTERSPACING
#define DISPID_IHTMLSTYLE_TEXTDECORATION                          DISPID_A_TEXTDECORATION
#define DISPID_IHTMLSTYLE_TEXTDECORATIONNONE                      DISPID_A_TEXTDECORATIONNONE
#define DISPID_IHTMLSTYLE_TEXTDECORATIONUNDERLINE                 DISPID_A_TEXTDECORATIONUNDERLINE
#define DISPID_IHTMLSTYLE_TEXTDECORATIONOVERLINE                  DISPID_A_TEXTDECORATIONOVERLINE
#define DISPID_IHTMLSTYLE_TEXTDECORATIONLINETHROUGH               DISPID_A_TEXTDECORATIONLINETHROUGH
#define DISPID_IHTMLSTYLE_TEXTDECORATIONBLINK                     DISPID_A_TEXTDECORATIONBLINK
#define DISPID_IHTMLSTYLE_VERTICALALIGN                           DISPID_A_VERTICALALIGN
#define DISPID_IHTMLSTYLE_TEXTTRANSFORM                           DISPID_A_TEXTTRANSFORM
#define DISPID_IHTMLSTYLE_TEXTALIGN                               STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLSTYLE_TEXTINDENT                              DISPID_A_TEXTINDENT
#define DISPID_IHTMLSTYLE_LINEHEIGHT                              DISPID_A_LINEHEIGHT
#define DISPID_IHTMLSTYLE_MARGINTOP                               DISPID_A_MARGINTOP
#define DISPID_IHTMLSTYLE_MARGINRIGHT                             DISPID_A_MARGINRIGHT
#define DISPID_IHTMLSTYLE_MARGINBOTTOM                            DISPID_A_MARGINBOTTOM
#define DISPID_IHTMLSTYLE_MARGINLEFT                              DISPID_A_MARGINLEFT
#define DISPID_IHTMLSTYLE_MARGIN                                  DISPID_A_MARGIN
#define DISPID_IHTMLSTYLE_PADDINGTOP                              DISPID_A_PADDINGTOP
#define DISPID_IHTMLSTYLE_PADDINGRIGHT                            DISPID_A_PADDINGRIGHT
#define DISPID_IHTMLSTYLE_PADDINGBOTTOM                           DISPID_A_PADDINGBOTTOM
#define DISPID_IHTMLSTYLE_PADDINGLEFT                             DISPID_A_PADDINGLEFT
#define DISPID_IHTMLSTYLE_PADDING                                 DISPID_A_PADDING
#define DISPID_IHTMLSTYLE_BORDER                                  DISPID_A_BORDER
#define DISPID_IHTMLSTYLE_BORDERTOP                               DISPID_A_BORDERTOP
#define DISPID_IHTMLSTYLE_BORDERRIGHT                             DISPID_A_BORDERRIGHT
#define DISPID_IHTMLSTYLE_BORDERBOTTOM                            DISPID_A_BORDERBOTTOM
#define DISPID_IHTMLSTYLE_BORDERLEFT                              DISPID_A_BORDERLEFT
#define DISPID_IHTMLSTYLE_BORDERCOLOR                             DISPID_A_BORDERCOLOR
#define DISPID_IHTMLSTYLE_BORDERTOPCOLOR                          DISPID_A_BORDERTOPCOLOR
#define DISPID_IHTMLSTYLE_BORDERRIGHTCOLOR                        DISPID_A_BORDERRIGHTCOLOR
#define DISPID_IHTMLSTYLE_BORDERBOTTOMCOLOR                       DISPID_A_BORDERBOTTOMCOLOR
#define DISPID_IHTMLSTYLE_BORDERLEFTCOLOR                         DISPID_A_BORDERLEFTCOLOR
#define DISPID_IHTMLSTYLE_BORDERWIDTH                             DISPID_A_BORDERWIDTH
#define DISPID_IHTMLSTYLE_BORDERTOPWIDTH                          DISPID_A_BORDERTOPWIDTH
#define DISPID_IHTMLSTYLE_BORDERRIGHTWIDTH                        DISPID_A_BORDERRIGHTWIDTH
#define DISPID_IHTMLSTYLE_BORDERBOTTOMWIDTH                       DISPID_A_BORDERBOTTOMWIDTH
#define DISPID_IHTMLSTYLE_BORDERLEFTWIDTH                         DISPID_A_BORDERLEFTWIDTH
#define DISPID_IHTMLSTYLE_BORDERSTYLE                             DISPID_A_BORDERSTYLE
#define DISPID_IHTMLSTYLE_BORDERTOPSTYLE                          DISPID_A_BORDERTOPSTYLE
#define DISPID_IHTMLSTYLE_BORDERRIGHTSTYLE                        DISPID_A_BORDERRIGHTSTYLE
#define DISPID_IHTMLSTYLE_BORDERBOTTOMSTYLE                       DISPID_A_BORDERBOTTOMSTYLE
#define DISPID_IHTMLSTYLE_BORDERLEFTSTYLE                         DISPID_A_BORDERLEFTSTYLE
#define DISPID_IHTMLSTYLE_WIDTH                                   STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLSTYLE_HEIGHT                                  STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLSTYLE_STYLEFLOAT                              DISPID_A_FLOAT
#define DISPID_IHTMLSTYLE_CLEAR                                   DISPID_A_CLEAR
#define DISPID_IHTMLSTYLE_DISPLAY                                 DISPID_A_DISPLAY
#define DISPID_IHTMLSTYLE_VISIBILITY                              DISPID_A_VISIBILITY
#define DISPID_IHTMLSTYLE_LISTSTYLETYPE                           DISPID_A_LISTSTYLETYPE
#define DISPID_IHTMLSTYLE_LISTSTYLEPOSITION                       DISPID_A_LISTSTYLEPOSITION
#define DISPID_IHTMLSTYLE_LISTSTYLEIMAGE                          DISPID_A_LISTSTYLEIMAGE
#define DISPID_IHTMLSTYLE_LISTSTYLE                               DISPID_A_LISTSTYLE
#define DISPID_IHTMLSTYLE_WHITESPACE                              DISPID_A_WHITESPACE
#define DISPID_IHTMLSTYLE_TOP                                     STDPROPID_XOBJ_TOP
#define DISPID_IHTMLSTYLE_LEFT                                    STDPROPID_XOBJ_LEFT
#define DISPID_IHTMLSTYLE_POSITION                                DISPID_A_POSITION
#define DISPID_IHTMLSTYLE_ZINDEX                                  DISPID_A_ZINDEX
#define DISPID_IHTMLSTYLE_OVERFLOW                                DISPID_A_OVERFLOW
#define DISPID_IHTMLSTYLE_PAGEBREAKBEFORE                         DISPID_A_PAGEBREAKBEFORE
#define DISPID_IHTMLSTYLE_PAGEBREAKAFTER                          DISPID_A_PAGEBREAKAFTER
#define DISPID_IHTMLSTYLE_CSSTEXT                                 DISPID_A_STYLETEXT
#define DISPID_IHTMLSTYLE_PIXELTOP                                DISPID_STYLE+0
#define DISPID_IHTMLSTYLE_PIXELLEFT                               DISPID_STYLE+1
#define DISPID_IHTMLSTYLE_PIXELWIDTH                              DISPID_STYLE+2
#define DISPID_IHTMLSTYLE_PIXELHEIGHT                             DISPID_STYLE+3
#define DISPID_IHTMLSTYLE_POSTOP                                  DISPID_STYLE+4
#define DISPID_IHTMLSTYLE_POSLEFT                                 DISPID_STYLE+5
#define DISPID_IHTMLSTYLE_POSWIDTH                                DISPID_STYLE+6
#define DISPID_IHTMLSTYLE_POSHEIGHT                               DISPID_STYLE+7
#define DISPID_IHTMLSTYLE_CURSOR                                  DISPID_A_CURSOR
#define DISPID_IHTMLSTYLE_CLIP                                    DISPID_A_CLIP
#define DISPID_IHTMLSTYLE_FILTER                                  DISPID_A_FILTER
#define DISPID_IHTMLSTYLE_SETATTRIBUTE                            DISPID_HTMLOBJECT+1
#define DISPID_IHTMLSTYLE_GETATTRIBUTE                            DISPID_HTMLOBJECT+2
#define DISPID_IHTMLSTYLE_REMOVEATTRIBUTE                         DISPID_HTMLOBJECT+3
#define DISPID_IHTMLSTYLE_TOSTRING                                DISPID_STYLE+8

//    DISPIDs for interface IHTMLStyle2

#define DISPID_IHTMLSTYLE2_TABLELAYOUT                            DISPID_A_TABLELAYOUT
#define DISPID_IHTMLSTYLE2_BORDERCOLLAPSE                         DISPID_A_BORDERCOLLAPSE
#define DISPID_IHTMLSTYLE2_DIRECTION                              DISPID_A_DIRECTION
#define DISPID_IHTMLSTYLE2_BEHAVIOR                               DISPID_A_BEHAVIOR
#define DISPID_IHTMLSTYLE2_SETEXPRESSION                          DISPID_HTMLOBJECT+4
#define DISPID_IHTMLSTYLE2_GETEXPRESSION                          DISPID_HTMLOBJECT+5
#define DISPID_IHTMLSTYLE2_REMOVEEXPRESSION                       DISPID_HTMLOBJECT+6
#define DISPID_IHTMLSTYLE2_POSITION                               DISPID_A_POSITION
#define DISPID_IHTMLSTYLE2_UNICODEBIDI                            DISPID_A_UNICODEBIDI
#define DISPID_IHTMLSTYLE2_BOTTOM                                 STDPROPID_XOBJ_BOTTOM
#define DISPID_IHTMLSTYLE2_RIGHT                                  STDPROPID_XOBJ_RIGHT
#define DISPID_IHTMLSTYLE2_PIXELBOTTOM                            DISPID_STYLE+9
#define DISPID_IHTMLSTYLE2_PIXELRIGHT                             DISPID_STYLE+10
#define DISPID_IHTMLSTYLE2_POSBOTTOM                              DISPID_STYLE+11
#define DISPID_IHTMLSTYLE2_POSRIGHT                               DISPID_STYLE+12
#define DISPID_IHTMLSTYLE2_IMEMODE                                DISPID_A_IMEMODE
#define DISPID_IHTMLSTYLE2_RUBYALIGN                              DISPID_A_RUBYALIGN
#define DISPID_IHTMLSTYLE2_RUBYPOSITION                           DISPID_A_RUBYPOSITION
#define DISPID_IHTMLSTYLE2_RUBYOVERHANG                           DISPID_A_RUBYOVERHANG
#define DISPID_IHTMLSTYLE2_LAYOUTGRIDCHAR                         DISPID_A_LAYOUTGRIDCHAR
#define DISPID_IHTMLSTYLE2_LAYOUTGRIDLINE                         DISPID_A_LAYOUTGRIDLINE
#define DISPID_IHTMLSTYLE2_LAYOUTGRIDMODE                         DISPID_A_LAYOUTGRIDMODE
#define DISPID_IHTMLSTYLE2_LAYOUTGRIDTYPE                         DISPID_A_LAYOUTGRIDTYPE
#define DISPID_IHTMLSTYLE2_LAYOUTGRID                             DISPID_A_LAYOUTGRID
#define DISPID_IHTMLSTYLE2_WORDBREAK                              DISPID_A_WORDBREAK
#define DISPID_IHTMLSTYLE2_LINEBREAK                              DISPID_A_LINEBREAK
#define DISPID_IHTMLSTYLE2_TEXTJUSTIFY                            DISPID_A_TEXTJUSTIFY
#define DISPID_IHTMLSTYLE2_TEXTJUSTIFYTRIM                        DISPID_A_TEXTJUSTIFYTRIM
#define DISPID_IHTMLSTYLE2_TEXTKASHIDA                            DISPID_A_TEXTKASHIDA
#define DISPID_IHTMLSTYLE2_TEXTAUTOSPACE                          DISPID_A_TEXTAUTOSPACE
#define DISPID_IHTMLSTYLE2_OVERFLOWX                              DISPID_A_OVERFLOWX
#define DISPID_IHTMLSTYLE2_OVERFLOWY                              DISPID_A_OVERFLOWY
#define DISPID_IHTMLSTYLE2_ACCELERATOR                            DISPID_A_ACCELERATOR

//    DISPIDs for interface IHTMLStyle3

#define DISPID_IHTMLSTYLE3_LAYOUTFLOW                             DISPID_A_LAYOUTFLOW
#define DISPID_IHTMLSTYLE3_ZOOM                                   DISPID_A_ZOOM
#define DISPID_IHTMLSTYLE3_WORDWRAP                               DISPID_A_WORDWRAP
#define DISPID_IHTMLSTYLE3_TEXTUNDERLINEPOSITION                  DISPID_A_TEXTUNDERLINEPOSITION
#define DISPID_IHTMLSTYLE3_SCROLLBARBASECOLOR                     DISPID_A_SCROLLBARBASECOLOR
#define DISPID_IHTMLSTYLE3_SCROLLBARFACECOLOR                     DISPID_A_SCROLLBARFACECOLOR
#define DISPID_IHTMLSTYLE3_SCROLLBAR3DLIGHTCOLOR                  DISPID_A_SCROLLBAR3DLIGHTCOLOR
#define DISPID_IHTMLSTYLE3_SCROLLBARSHADOWCOLOR                   DISPID_A_SCROLLBARSHADOWCOLOR
#define DISPID_IHTMLSTYLE3_SCROLLBARHIGHLIGHTCOLOR                DISPID_A_SCROLLBARHIGHLIGHTCOLOR
#define DISPID_IHTMLSTYLE3_SCROLLBARDARKSHADOWCOLOR               DISPID_A_SCROLLBARDARKSHADOWCOLOR
#define DISPID_IHTMLSTYLE3_SCROLLBARARROWCOLOR                    DISPID_A_SCROLLBARARROWCOLOR
#define DISPID_IHTMLSTYLE3_SCROLLBARTRACKCOLOR                    DISPID_A_SCROLLBARTRACKCOLOR
#define DISPID_IHTMLSTYLE3_WRITINGMODE                            DISPID_A_WRITINGMODE
#define DISPID_IHTMLSTYLE3_TEXTALIGNLAST                          DISPID_A_TEXTALIGNLAST
#define DISPID_IHTMLSTYLE3_TEXTKASHIDASPACE                       DISPID_A_TEXTKASHIDASPACE

//    DISPIDs for interface IHTMLStyle4

#define DISPID_IHTMLSTYLE4_TEXTOVERFLOW                           DISPID_A_TEXTOVERFLOW
#define DISPID_IHTMLSTYLE4_MINHEIGHT                              DISPID_A_MINHEIGHT

//    DISPIDs for interface IHTMLStyle5

#define DISPID_IHTMLSTYLE5_MSINTERPOLATIONMODE                    DISPID_A_INTERPOLATION
#define DISPID_IHTMLSTYLE5_MAXHEIGHT                              DISPID_A_MAXHEIGHT
#define DISPID_IHTMLSTYLE5_MINWIDTH                               DISPID_A_MINWIDTH
#define DISPID_IHTMLSTYLE5_MAXWIDTH                               DISPID_A_MAXWIDTH

//    DISPIDs for interface IHTMLStyle6

#define DISPID_IHTMLSTYLE6_CONTENT                                DISPID_A_CONTENT
#define DISPID_IHTMLSTYLE6_CAPTIONSIDE                            DISPID_A_CAPTIONSIDE
#define DISPID_IHTMLSTYLE6_COUNTERINCREMENT                       DISPID_A_COUNTERINCREMENT
#define DISPID_IHTMLSTYLE6_COUNTERRESET                           DISPID_A_COUNTERRESET
#define DISPID_IHTMLSTYLE6_OUTLINE                                DISPID_A_OUTLINE
#define DISPID_IHTMLSTYLE6_OUTLINEWIDTH                           DISPID_A_OUTLINEWIDTH
#define DISPID_IHTMLSTYLE6_OUTLINESTYLE                           DISPID_A_OUTLINESTYLE
#define DISPID_IHTMLSTYLE6_OUTLINECOLOR                           DISPID_A_OUTLINECOLOR
#define DISPID_IHTMLSTYLE6_BOXSIZING                              DISPID_A_BOXSIZING
#define DISPID_IHTMLSTYLE6_BORDERSPACING                          DISPID_A_BORDERSPACING
#define DISPID_IHTMLSTYLE6_ORPHANS                                DISPID_A_ORPHANS
#define DISPID_IHTMLSTYLE6_WIDOWS                                 DISPID_A_WIDOWS
#define DISPID_IHTMLSTYLE6_PAGEBREAKINSIDE                        DISPID_A_PAGEBREAKINSIDE
#define DISPID_IHTMLSTYLE6_EMPTYCELLS                             DISPID_A_EMPTYCELLS
#define DISPID_IHTMLSTYLE6_MSBLOCKPROGRESSION                     DISPID_A_MS_BLOCKPROGRESSION
#define DISPID_IHTMLSTYLE6_QUOTES                                 DISPID_A_QUOTES

//    DISPIDs for interface IHTMLRuleStyle

#define DISPID_IHTMLRULESTYLE_FONTFAMILY                          DISPID_A_FONTFACE
#define DISPID_IHTMLRULESTYLE_FONTSTYLE                           DISPID_A_FONTSTYLE
#define DISPID_IHTMLRULESTYLE_FONTVARIANT                         DISPID_A_FONTVARIANT
#define DISPID_IHTMLRULESTYLE_FONTWEIGHT                          DISPID_A_FONTWEIGHT
#define DISPID_IHTMLRULESTYLE_FONTSIZE                            DISPID_A_FONTSIZE
#define DISPID_IHTMLRULESTYLE_FONT                                DISPID_A_FONT
#define DISPID_IHTMLRULESTYLE_COLOR                               DISPID_A_COLOR
#define DISPID_IHTMLRULESTYLE_BACKGROUND                          DISPID_A_BACKGROUND
#define DISPID_IHTMLRULESTYLE_BACKGROUNDCOLOR                     DISPID_BACKCOLOR
#define DISPID_IHTMLRULESTYLE_BACKGROUNDIMAGE                     DISPID_A_BACKGROUNDIMAGE
#define DISPID_IHTMLRULESTYLE_BACKGROUNDREPEAT                    DISPID_A_BACKGROUNDREPEAT
#define DISPID_IHTMLRULESTYLE_BACKGROUNDATTACHMENT                DISPID_A_BACKGROUNDATTACHMENT
#define DISPID_IHTMLRULESTYLE_BACKGROUNDPOSITION                  DISPID_A_BACKGROUNDPOSITION
#define DISPID_IHTMLRULESTYLE_BACKGROUNDPOSITIONX                 DISPID_A_BACKGROUNDPOSX
#define DISPID_IHTMLRULESTYLE_BACKGROUNDPOSITIONY                 DISPID_A_BACKGROUNDPOSY
#define DISPID_IHTMLRULESTYLE_WORDSPACING                         DISPID_A_WORDSPACING
#define DISPID_IHTMLRULESTYLE_LETTERSPACING                       DISPID_A_LETTERSPACING
#define DISPID_IHTMLRULESTYLE_TEXTDECORATION                      DISPID_A_TEXTDECORATION
#define DISPID_IHTMLRULESTYLE_TEXTDECORATIONNONE                  DISPID_A_TEXTDECORATIONNONE
#define DISPID_IHTMLRULESTYLE_TEXTDECORATIONUNDERLINE             DISPID_A_TEXTDECORATIONUNDERLINE
#define DISPID_IHTMLRULESTYLE_TEXTDECORATIONOVERLINE              DISPID_A_TEXTDECORATIONOVERLINE
#define DISPID_IHTMLRULESTYLE_TEXTDECORATIONLINETHROUGH           DISPID_A_TEXTDECORATIONLINETHROUGH
#define DISPID_IHTMLRULESTYLE_TEXTDECORATIONBLINK                 DISPID_A_TEXTDECORATIONBLINK
#define DISPID_IHTMLRULESTYLE_VERTICALALIGN                       DISPID_A_VERTICALALIGN
#define DISPID_IHTMLRULESTYLE_TEXTTRANSFORM                       DISPID_A_TEXTTRANSFORM
#define DISPID_IHTMLRULESTYLE_TEXTALIGN                           STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLRULESTYLE_TEXTINDENT                          DISPID_A_TEXTINDENT
#define DISPID_IHTMLRULESTYLE_LINEHEIGHT                          DISPID_A_LINEHEIGHT
#define DISPID_IHTMLRULESTYLE_MARGINTOP                           DISPID_A_MARGINTOP
#define DISPID_IHTMLRULESTYLE_MARGINRIGHT                         DISPID_A_MARGINRIGHT
#define DISPID_IHTMLRULESTYLE_MARGINBOTTOM                        DISPID_A_MARGINBOTTOM
#define DISPID_IHTMLRULESTYLE_MARGINLEFT                          DISPID_A_MARGINLEFT
#define DISPID_IHTMLRULESTYLE_MARGIN                              DISPID_A_MARGIN
#define DISPID_IHTMLRULESTYLE_PADDINGTOP                          DISPID_A_PADDINGTOP
#define DISPID_IHTMLRULESTYLE_PADDINGRIGHT                        DISPID_A_PADDINGRIGHT
#define DISPID_IHTMLRULESTYLE_PADDINGBOTTOM                       DISPID_A_PADDINGBOTTOM
#define DISPID_IHTMLRULESTYLE_PADDINGLEFT                         DISPID_A_PADDINGLEFT
#define DISPID_IHTMLRULESTYLE_PADDING                             DISPID_A_PADDING
#define DISPID_IHTMLRULESTYLE_BORDER                              DISPID_A_BORDER
#define DISPID_IHTMLRULESTYLE_BORDERTOP                           DISPID_A_BORDERTOP
#define DISPID_IHTMLRULESTYLE_BORDERRIGHT                         DISPID_A_BORDERRIGHT
#define DISPID_IHTMLRULESTYLE_BORDERBOTTOM                        DISPID_A_BORDERBOTTOM
#define DISPID_IHTMLRULESTYLE_BORDERLEFT                          DISPID_A_BORDERLEFT
#define DISPID_IHTMLRULESTYLE_BORDERCOLOR                         DISPID_A_BORDERCOLOR
#define DISPID_IHTMLRULESTYLE_BORDERTOPCOLOR                      DISPID_A_BORDERTOPCOLOR
#define DISPID_IHTMLRULESTYLE_BORDERRIGHTCOLOR                    DISPID_A_BORDERRIGHTCOLOR
#define DISPID_IHTMLRULESTYLE_BORDERBOTTOMCOLOR                   DISPID_A_BORDERBOTTOMCOLOR
#define DISPID_IHTMLRULESTYLE_BORDERLEFTCOLOR                     DISPID_A_BORDERLEFTCOLOR
#define DISPID_IHTMLRULESTYLE_BORDERWIDTH                         DISPID_A_BORDERWIDTH
#define DISPID_IHTMLRULESTYLE_BORDERTOPWIDTH                      DISPID_A_BORDERTOPWIDTH
#define DISPID_IHTMLRULESTYLE_BORDERRIGHTWIDTH                    DISPID_A_BORDERRIGHTWIDTH
#define DISPID_IHTMLRULESTYLE_BORDERBOTTOMWIDTH                   DISPID_A_BORDERBOTTOMWIDTH
#define DISPID_IHTMLRULESTYLE_BORDERLEFTWIDTH                     DISPID_A_BORDERLEFTWIDTH
#define DISPID_IHTMLRULESTYLE_BORDERSTYLE                         DISPID_A_BORDERSTYLE
#define DISPID_IHTMLRULESTYLE_BORDERTOPSTYLE                      DISPID_A_BORDERTOPSTYLE
#define DISPID_IHTMLRULESTYLE_BORDERRIGHTSTYLE                    DISPID_A_BORDERRIGHTSTYLE
#define DISPID_IHTMLRULESTYLE_BORDERBOTTOMSTYLE                   DISPID_A_BORDERBOTTOMSTYLE
#define DISPID_IHTMLRULESTYLE_BORDERLEFTSTYLE                     DISPID_A_BORDERLEFTSTYLE
#define DISPID_IHTMLRULESTYLE_WIDTH                               STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLRULESTYLE_HEIGHT                              STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLRULESTYLE_STYLEFLOAT                          DISPID_A_FLOAT
#define DISPID_IHTMLRULESTYLE_CLEAR                               DISPID_A_CLEAR
#define DISPID_IHTMLRULESTYLE_DISPLAY                             DISPID_A_DISPLAY
#define DISPID_IHTMLRULESTYLE_VISIBILITY                          DISPID_A_VISIBILITY
#define DISPID_IHTMLRULESTYLE_LISTSTYLETYPE                       DISPID_A_LISTSTYLETYPE
#define DISPID_IHTMLRULESTYLE_LISTSTYLEPOSITION                   DISPID_A_LISTSTYLEPOSITION
#define DISPID_IHTMLRULESTYLE_LISTSTYLEIMAGE                      DISPID_A_LISTSTYLEIMAGE
#define DISPID_IHTMLRULESTYLE_LISTSTYLE                           DISPID_A_LISTSTYLE
#define DISPID_IHTMLRULESTYLE_WHITESPACE                          DISPID_A_WHITESPACE
#define DISPID_IHTMLRULESTYLE_TOP                                 STDPROPID_XOBJ_TOP
#define DISPID_IHTMLRULESTYLE_LEFT                                STDPROPID_XOBJ_LEFT
#define DISPID_IHTMLRULESTYLE_POSITION                            DISPID_A_POSITION
#define DISPID_IHTMLRULESTYLE_ZINDEX                              DISPID_A_ZINDEX
#define DISPID_IHTMLRULESTYLE_OVERFLOW                            DISPID_A_OVERFLOW
#define DISPID_IHTMLRULESTYLE_PAGEBREAKBEFORE                     DISPID_A_PAGEBREAKBEFORE
#define DISPID_IHTMLRULESTYLE_PAGEBREAKAFTER                      DISPID_A_PAGEBREAKAFTER
#define DISPID_IHTMLRULESTYLE_CSSTEXT                             DISPID_A_STYLETEXT
#define DISPID_IHTMLRULESTYLE_CURSOR                              DISPID_A_CURSOR
#define DISPID_IHTMLRULESTYLE_CLIP                                DISPID_A_CLIP
#define DISPID_IHTMLRULESTYLE_FILTER                              DISPID_A_FILTER
#define DISPID_IHTMLRULESTYLE_SETATTRIBUTE                        DISPID_HTMLOBJECT+1
#define DISPID_IHTMLRULESTYLE_GETATTRIBUTE                        DISPID_HTMLOBJECT+2
#define DISPID_IHTMLRULESTYLE_REMOVEATTRIBUTE                     DISPID_HTMLOBJECT+3

//    DISPIDs for interface IHTMLRuleStyle2

#define DISPID_IHTMLRULESTYLE2_TABLELAYOUT                        DISPID_A_TABLELAYOUT
#define DISPID_IHTMLRULESTYLE2_BORDERCOLLAPSE                     DISPID_A_BORDERCOLLAPSE
#define DISPID_IHTMLRULESTYLE2_DIRECTION                          DISPID_A_DIRECTION
#define DISPID_IHTMLRULESTYLE2_BEHAVIOR                           DISPID_A_BEHAVIOR
#define DISPID_IHTMLRULESTYLE2_POSITION                           DISPID_A_POSITION
#define DISPID_IHTMLRULESTYLE2_UNICODEBIDI                        DISPID_A_UNICODEBIDI
#define DISPID_IHTMLRULESTYLE2_BOTTOM                             STDPROPID_XOBJ_BOTTOM
#define DISPID_IHTMLRULESTYLE2_RIGHT                              STDPROPID_XOBJ_RIGHT
#define DISPID_IHTMLRULESTYLE2_PIXELBOTTOM                        DISPID_STYLE+9
#define DISPID_IHTMLRULESTYLE2_PIXELRIGHT                         DISPID_STYLE+10
#define DISPID_IHTMLRULESTYLE2_POSBOTTOM                          DISPID_STYLE+11
#define DISPID_IHTMLRULESTYLE2_POSRIGHT                           DISPID_STYLE+12
#define DISPID_IHTMLRULESTYLE2_IMEMODE                            DISPID_A_IMEMODE
#define DISPID_IHTMLRULESTYLE2_RUBYALIGN                          DISPID_A_RUBYALIGN
#define DISPID_IHTMLRULESTYLE2_RUBYPOSITION                       DISPID_A_RUBYPOSITION
#define DISPID_IHTMLRULESTYLE2_RUBYOVERHANG                       DISPID_A_RUBYOVERHANG
#define DISPID_IHTMLRULESTYLE2_LAYOUTGRIDCHAR                     DISPID_A_LAYOUTGRIDCHAR
#define DISPID_IHTMLRULESTYLE2_LAYOUTGRIDLINE                     DISPID_A_LAYOUTGRIDLINE
#define DISPID_IHTMLRULESTYLE2_LAYOUTGRIDMODE                     DISPID_A_LAYOUTGRIDMODE
#define DISPID_IHTMLRULESTYLE2_LAYOUTGRIDTYPE                     DISPID_A_LAYOUTGRIDTYPE
#define DISPID_IHTMLRULESTYLE2_LAYOUTGRID                         DISPID_A_LAYOUTGRID
#define DISPID_IHTMLRULESTYLE2_TEXTAUTOSPACE                      DISPID_A_TEXTAUTOSPACE
#define DISPID_IHTMLRULESTYLE2_WORDBREAK                          DISPID_A_WORDBREAK
#define DISPID_IHTMLRULESTYLE2_LINEBREAK                          DISPID_A_LINEBREAK
#define DISPID_IHTMLRULESTYLE2_TEXTJUSTIFY                        DISPID_A_TEXTJUSTIFY
#define DISPID_IHTMLRULESTYLE2_TEXTJUSTIFYTRIM                    DISPID_A_TEXTJUSTIFYTRIM
#define DISPID_IHTMLRULESTYLE2_TEXTKASHIDA                        DISPID_A_TEXTKASHIDA
#define DISPID_IHTMLRULESTYLE2_OVERFLOWX                          DISPID_A_OVERFLOWX
#define DISPID_IHTMLRULESTYLE2_OVERFLOWY                          DISPID_A_OVERFLOWY
#define DISPID_IHTMLRULESTYLE2_ACCELERATOR                        DISPID_A_ACCELERATOR

//    DISPIDs for interface IHTMLRuleStyle3

#define DISPID_IHTMLRULESTYLE3_LAYOUTFLOW                         DISPID_A_LAYOUTFLOW
#define DISPID_IHTMLRULESTYLE3_ZOOM                               DISPID_A_ZOOM
#define DISPID_IHTMLRULESTYLE3_WORDWRAP                           DISPID_A_WORDWRAP
#define DISPID_IHTMLRULESTYLE3_TEXTUNDERLINEPOSITION              DISPID_A_TEXTUNDERLINEPOSITION
#define DISPID_IHTMLRULESTYLE3_SCROLLBARBASECOLOR                 DISPID_A_SCROLLBARBASECOLOR
#define DISPID_IHTMLRULESTYLE3_SCROLLBARFACECOLOR                 DISPID_A_SCROLLBARFACECOLOR
#define DISPID_IHTMLRULESTYLE3_SCROLLBAR3DLIGHTCOLOR              DISPID_A_SCROLLBAR3DLIGHTCOLOR
#define DISPID_IHTMLRULESTYLE3_SCROLLBARSHADOWCOLOR               DISPID_A_SCROLLBARSHADOWCOLOR
#define DISPID_IHTMLRULESTYLE3_SCROLLBARHIGHLIGHTCOLOR            DISPID_A_SCROLLBARHIGHLIGHTCOLOR
#define DISPID_IHTMLRULESTYLE3_SCROLLBARDARKSHADOWCOLOR           DISPID_A_SCROLLBARDARKSHADOWCOLOR
#define DISPID_IHTMLRULESTYLE3_SCROLLBARARROWCOLOR                DISPID_A_SCROLLBARARROWCOLOR
#define DISPID_IHTMLRULESTYLE3_SCROLLBARTRACKCOLOR                DISPID_A_SCROLLBARTRACKCOLOR
#define DISPID_IHTMLRULESTYLE3_WRITINGMODE                        DISPID_A_WRITINGMODE
#define DISPID_IHTMLRULESTYLE3_TEXTALIGNLAST                      DISPID_A_TEXTALIGNLAST
#define DISPID_IHTMLRULESTYLE3_TEXTKASHIDASPACE                   DISPID_A_TEXTKASHIDASPACE

//    DISPIDs for interface IHTMLRuleStyle4

#define DISPID_IHTMLRULESTYLE4_TEXTOVERFLOW                       DISPID_A_TEXTOVERFLOW
#define DISPID_IHTMLRULESTYLE4_MINHEIGHT                          DISPID_A_MINHEIGHT

//    DISPIDs for interface IHTMLRuleStyle5

#define DISPID_IHTMLRULESTYLE5_MSINTERPOLATIONMODE                DISPID_A_INTERPOLATION
#define DISPID_IHTMLRULESTYLE5_MAXHEIGHT                          DISPID_A_MAXHEIGHT
#define DISPID_IHTMLRULESTYLE5_MINWIDTH                           DISPID_A_MINWIDTH
#define DISPID_IHTMLRULESTYLE5_MAXWIDTH                           DISPID_A_MAXWIDTH

//    DISPIDs for interface IHTMLRuleStyle6

#define DISPID_IHTMLRULESTYLE6_CONTENT                            DISPID_A_CONTENT
#define DISPID_IHTMLRULESTYLE6_CAPTIONSIDE                        DISPID_A_CAPTIONSIDE
#define DISPID_IHTMLRULESTYLE6_COUNTERINCREMENT                   DISPID_A_COUNTERINCREMENT
#define DISPID_IHTMLRULESTYLE6_COUNTERRESET                       DISPID_A_COUNTERRESET
#define DISPID_IHTMLRULESTYLE6_OUTLINE                            DISPID_A_OUTLINE
#define DISPID_IHTMLRULESTYLE6_OUTLINEWIDTH                       DISPID_A_OUTLINEWIDTH
#define DISPID_IHTMLRULESTYLE6_OUTLINESTYLE                       DISPID_A_OUTLINESTYLE
#define DISPID_IHTMLRULESTYLE6_OUTLINECOLOR                       DISPID_A_OUTLINECOLOR
#define DISPID_IHTMLRULESTYLE6_BOXSIZING                          DISPID_A_BOXSIZING
#define DISPID_IHTMLRULESTYLE6_BORDERSPACING                      DISPID_A_BORDERSPACING
#define DISPID_IHTMLRULESTYLE6_ORPHANS                            DISPID_A_ORPHANS
#define DISPID_IHTMLRULESTYLE6_WIDOWS                             DISPID_A_WIDOWS
#define DISPID_IHTMLRULESTYLE6_PAGEBREAKINSIDE                    DISPID_A_PAGEBREAKINSIDE
#define DISPID_IHTMLRULESTYLE6_EMPTYCELLS                         DISPID_A_EMPTYCELLS
#define DISPID_IHTMLRULESTYLE6_MSBLOCKPROGRESSION                 DISPID_A_MS_BLOCKPROGRESSION
#define DISPID_IHTMLRULESTYLE6_QUOTES                             DISPID_A_QUOTES

//    DISPIDs for interface IHTMLCSSRule

#define DISPID_IHTMLCSSRULE_TYPE                                  DISPID_BASE_STYLERULE+1
#define DISPID_IHTMLCSSRULE_CSSTEXT                               DISPID_BASE_STYLERULE+2
#define DISPID_IHTMLCSSRULE_PARENTRULE                            DISPID_BASE_STYLERULE+3
#define DISPID_IHTMLCSSRULE_PARENTSTYLESHEET                      DISPID_BASE_STYLERULE+4

//    DISPIDs for interface IHTMLCSSImportRule

#define DISPID_IHTMLCSSIMPORTRULE_HREF                            DISPID_STYLERULE+1
#define DISPID_IHTMLCSSIMPORTRULE_MEDIA                           DISPID_STYLERULE+2
#define DISPID_IHTMLCSSIMPORTRULE_STYLESHEET                      DISPID_STYLERULE+3

//    DISPIDs for interface IHTMLCSSMediaRule

#define DISPID_IHTMLCSSMEDIARULE_MEDIA                            DISPID_STYLERULE+1
#define DISPID_IHTMLCSSMEDIARULE_CSSRULES                         DISPID_STYLERULE+2
#define DISPID_IHTMLCSSMEDIARULE_INSERTRULE                       DISPID_STYLERULE+3
#define DISPID_IHTMLCSSMEDIARULE_DELETERULE                       DISPID_STYLERULE+4

//    DISPIDs for interface IHTMLCSSMediaList

#define DISPID_IHTMLCSSMEDIALIST_MEDIATEXT                        DISPID_MEDIALIST+1
#define DISPID_IHTMLCSSMEDIALIST_LENGTH                           DISPID_MEDIALIST+2
#define DISPID_IHTMLCSSMEDIALIST_ITEM                             DISPID_MEDIALIST+3
#define DISPID_IHTMLCSSMEDIALIST_APPENDMEDIUM                     DISPID_MEDIALIST+4
#define DISPID_IHTMLCSSMEDIALIST_DELETEMEDIUM                     DISPID_MEDIALIST+5

//    DISPIDs for interface IHTMLCSSNamespaceRule

#define DISPID_IHTMLCSSNAMESPACERULE_NAMESPACEURI                 DISPID_STYLERULE+1
#define DISPID_IHTMLCSSNAMESPACERULE_PREFIX                       DISPID_STYLERULE+2

//    DISPIDs for interface IHTMLMSCSSKeyframeRule

#define DISPID_IHTMLMSCSSKEYFRAMERULE_KEYTEXT                     DISPID_STYLERULE+1
#define DISPID_IHTMLMSCSSKEYFRAMERULE_STYLE                       DISPID_STYLERULE+2

//    DISPIDs for interface IHTMLMSCSSKeyframesRule

#define DISPID_IHTMLMSCSSKEYFRAMESRULE_NAME                       DISPID_STYLERULE+1
#define DISPID_IHTMLMSCSSKEYFRAMESRULE_CSSRULES                   DISPID_STYLERULE+2
#define DISPID_IHTMLMSCSSKEYFRAMESRULE_APPENDRULE                 DISPID_STYLERULE+3
#define DISPID_IHTMLMSCSSKEYFRAMESRULE_DELETERULE                 DISPID_STYLERULE+4
#define DISPID_IHTMLMSCSSKEYFRAMESRULE_FINDRULE                   DISPID_STYLERULE+5

//    DISPIDs for interface IHTMLRenderStyle

#define DISPID_IHTMLRENDERSTYLE_TEXTLINETHROUGHSTYLE              DISPID_A_TEXTLINETHROUGHSTYLE
#define DISPID_IHTMLRENDERSTYLE_TEXTUNDERLINESTYLE                DISPID_A_TEXTUNDERLINESTYLE
#define DISPID_IHTMLRENDERSTYLE_TEXTEFFECT                        DISPID_A_TEXTEFFECT
#define DISPID_IHTMLRENDERSTYLE_TEXTCOLOR                         DISPID_A_TEXTCOLOR
#define DISPID_IHTMLRENDERSTYLE_TEXTBACKGROUNDCOLOR               DISPID_A_TEXTBACKGROUNDCOLOR
#define DISPID_IHTMLRENDERSTYLE_TEXTDECORATIONCOLOR               DISPID_A_TEXTDECORATIONCOLOR
#define DISPID_IHTMLRENDERSTYLE_RENDERINGPRIORITY                 DISPID_A_RENDERINGPRIORITY
#define DISPID_IHTMLRENDERSTYLE_DEFAULTTEXTSELECTION              DISPID_A_DEFAULTTEXTSELECTION
#define DISPID_IHTMLRENDERSTYLE_TEXTDECORATION                    DISPID_A_STYLETEXTDECORATION

//    DISPIDs for interface IHTMLCurrentStyle

#define DISPID_IHTMLCURRENTSTYLE_POSITION                         DISPID_A_POSITION
#define DISPID_IHTMLCURRENTSTYLE_STYLEFLOAT                       DISPID_A_FLOAT
#define DISPID_IHTMLCURRENTSTYLE_COLOR                            DISPID_A_COLOR
#define DISPID_IHTMLCURRENTSTYLE_BACKGROUNDCOLOR                  DISPID_BACKCOLOR
#define DISPID_IHTMLCURRENTSTYLE_FONTFAMILY                       DISPID_A_FONTFACE
#define DISPID_IHTMLCURRENTSTYLE_FONTSTYLE                        DISPID_A_FONTSTYLE
#define DISPID_IHTMLCURRENTSTYLE_FONTVARIANT                      DISPID_A_FONTVARIANT
#define DISPID_IHTMLCURRENTSTYLE_FONTWEIGHT                       DISPID_A_FONTWEIGHT
#define DISPID_IHTMLCURRENTSTYLE_FONTSIZE                         DISPID_A_FONTSIZE
#define DISPID_IHTMLCURRENTSTYLE_BACKGROUNDIMAGE                  DISPID_A_BACKGROUNDIMAGE
#define DISPID_IHTMLCURRENTSTYLE_BACKGROUNDPOSITIONX              DISPID_A_BACKGROUNDPOSX
#define DISPID_IHTMLCURRENTSTYLE_BACKGROUNDPOSITIONY              DISPID_A_BACKGROUNDPOSY
#define DISPID_IHTMLCURRENTSTYLE_BACKGROUNDREPEAT                 DISPID_A_BACKGROUNDREPEAT
#define DISPID_IHTMLCURRENTSTYLE_BORDERLEFTCOLOR                  DISPID_A_BORDERLEFTCOLOR
#define DISPID_IHTMLCURRENTSTYLE_BORDERTOPCOLOR                   DISPID_A_BORDERTOPCOLOR
#define DISPID_IHTMLCURRENTSTYLE_BORDERRIGHTCOLOR                 DISPID_A_BORDERRIGHTCOLOR
#define DISPID_IHTMLCURRENTSTYLE_BORDERBOTTOMCOLOR                DISPID_A_BORDERBOTTOMCOLOR
#define DISPID_IHTMLCURRENTSTYLE_BORDERTOPSTYLE                   DISPID_A_BORDERTOPSTYLE
#define DISPID_IHTMLCURRENTSTYLE_BORDERRIGHTSTYLE                 DISPID_A_BORDERRIGHTSTYLE
#define DISPID_IHTMLCURRENTSTYLE_BORDERBOTTOMSTYLE                DISPID_A_BORDERBOTTOMSTYLE
#define DISPID_IHTMLCURRENTSTYLE_BORDERLEFTSTYLE                  DISPID_A_BORDERLEFTSTYLE
#define DISPID_IHTMLCURRENTSTYLE_BORDERTOPWIDTH                   DISPID_A_BORDERTOPWIDTH
#define DISPID_IHTMLCURRENTSTYLE_BORDERRIGHTWIDTH                 DISPID_A_BORDERRIGHTWIDTH
#define DISPID_IHTMLCURRENTSTYLE_BORDERBOTTOMWIDTH                DISPID_A_BORDERBOTTOMWIDTH
#define DISPID_IHTMLCURRENTSTYLE_BORDERLEFTWIDTH                  DISPID_A_BORDERLEFTWIDTH
#define DISPID_IHTMLCURRENTSTYLE_LEFT                             STDPROPID_XOBJ_LEFT
#define DISPID_IHTMLCURRENTSTYLE_TOP                              STDPROPID_XOBJ_TOP
#define DISPID_IHTMLCURRENTSTYLE_WIDTH                            STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLCURRENTSTYLE_HEIGHT                           STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLCURRENTSTYLE_PADDINGLEFT                      DISPID_A_PADDINGLEFT
#define DISPID_IHTMLCURRENTSTYLE_PADDINGTOP                       DISPID_A_PADDINGTOP
#define DISPID_IHTMLCURRENTSTYLE_PADDINGRIGHT                     DISPID_A_PADDINGRIGHT
#define DISPID_IHTMLCURRENTSTYLE_PADDINGBOTTOM                    DISPID_A_PADDINGBOTTOM
#define DISPID_IHTMLCURRENTSTYLE_TEXTALIGN                        STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLCURRENTSTYLE_TEXTDECORATION                   DISPID_A_TEXTDECORATION
#define DISPID_IHTMLCURRENTSTYLE_DISPLAY                          DISPID_A_DISPLAY
#define DISPID_IHTMLCURRENTSTYLE_VISIBILITY                       DISPID_A_VISIBILITY
#define DISPID_IHTMLCURRENTSTYLE_ZINDEX                           DISPID_A_ZINDEX
#define DISPID_IHTMLCURRENTSTYLE_LETTERSPACING                    DISPID_A_LETTERSPACING
#define DISPID_IHTMLCURRENTSTYLE_LINEHEIGHT                       DISPID_A_LINEHEIGHT
#define DISPID_IHTMLCURRENTSTYLE_TEXTINDENT                       DISPID_A_TEXTINDENT
#define DISPID_IHTMLCURRENTSTYLE_VERTICALALIGN                    DISPID_A_VERTICALALIGN
#define DISPID_IHTMLCURRENTSTYLE_BACKGROUNDATTACHMENT             DISPID_A_BACKGROUNDATTACHMENT
#define DISPID_IHTMLCURRENTSTYLE_MARGINTOP                        DISPID_A_MARGINTOP
#define DISPID_IHTMLCURRENTSTYLE_MARGINRIGHT                      DISPID_A_MARGINRIGHT
#define DISPID_IHTMLCURRENTSTYLE_MARGINBOTTOM                     DISPID_A_MARGINBOTTOM
#define DISPID_IHTMLCURRENTSTYLE_MARGINLEFT                       DISPID_A_MARGINLEFT
#define DISPID_IHTMLCURRENTSTYLE_CLEAR                            DISPID_A_CLEAR
#define DISPID_IHTMLCURRENTSTYLE_LISTSTYLETYPE                    DISPID_A_LISTSTYLETYPE
#define DISPID_IHTMLCURRENTSTYLE_LISTSTYLEPOSITION                DISPID_A_LISTSTYLEPOSITION
#define DISPID_IHTMLCURRENTSTYLE_LISTSTYLEIMAGE                   DISPID_A_LISTSTYLEIMAGE
#define DISPID_IHTMLCURRENTSTYLE_CLIPTOP                          DISPID_A_CLIPRECTTOP
#define DISPID_IHTMLCURRENTSTYLE_CLIPRIGHT                        DISPID_A_CLIPRECTRIGHT
#define DISPID_IHTMLCURRENTSTYLE_CLIPBOTTOM                       DISPID_A_CLIPRECTBOTTOM
#define DISPID_IHTMLCURRENTSTYLE_CLIPLEFT                         DISPID_A_CLIPRECTLEFT
#define DISPID_IHTMLCURRENTSTYLE_OVERFLOW                         DISPID_A_OVERFLOW
#define DISPID_IHTMLCURRENTSTYLE_PAGEBREAKBEFORE                  DISPID_A_PAGEBREAKBEFORE
#define DISPID_IHTMLCURRENTSTYLE_PAGEBREAKAFTER                   DISPID_A_PAGEBREAKAFTER
#define DISPID_IHTMLCURRENTSTYLE_CURSOR                           DISPID_A_CURSOR
#define DISPID_IHTMLCURRENTSTYLE_TABLELAYOUT                      DISPID_A_TABLELAYOUT
#define DISPID_IHTMLCURRENTSTYLE_BORDERCOLLAPSE                   DISPID_A_BORDERCOLLAPSE
#define DISPID_IHTMLCURRENTSTYLE_DIRECTION                        DISPID_A_DIRECTION
#define DISPID_IHTMLCURRENTSTYLE_BEHAVIOR                         DISPID_A_BEHAVIOR
#define DISPID_IHTMLCURRENTSTYLE_GETATTRIBUTE                     DISPID_HTMLOBJECT+2
#define DISPID_IHTMLCURRENTSTYLE_UNICODEBIDI                      DISPID_A_UNICODEBIDI
#define DISPID_IHTMLCURRENTSTYLE_RIGHT                            STDPROPID_XOBJ_RIGHT
#define DISPID_IHTMLCURRENTSTYLE_BOTTOM                           STDPROPID_XOBJ_BOTTOM
#define DISPID_IHTMLCURRENTSTYLE_IMEMODE                          DISPID_A_IMEMODE
#define DISPID_IHTMLCURRENTSTYLE_RUBYALIGN                        DISPID_A_RUBYALIGN
#define DISPID_IHTMLCURRENTSTYLE_RUBYPOSITION                     DISPID_A_RUBYPOSITION
#define DISPID_IHTMLCURRENTSTYLE_RUBYOVERHANG                     DISPID_A_RUBYOVERHANG
#define DISPID_IHTMLCURRENTSTYLE_TEXTAUTOSPACE                    DISPID_A_TEXTAUTOSPACE
#define DISPID_IHTMLCURRENTSTYLE_LINEBREAK                        DISPID_A_LINEBREAK
#define DISPID_IHTMLCURRENTSTYLE_WORDBREAK                        DISPID_A_WORDBREAK
#define DISPID_IHTMLCURRENTSTYLE_TEXTJUSTIFY                      DISPID_A_TEXTJUSTIFY
#define DISPID_IHTMLCURRENTSTYLE_TEXTJUSTIFYTRIM                  DISPID_A_TEXTJUSTIFYTRIM
#define DISPID_IHTMLCURRENTSTYLE_TEXTKASHIDA                      DISPID_A_TEXTKASHIDA
#define DISPID_IHTMLCURRENTSTYLE_BLOCKDIRECTION                   DISPID_A_DIR
#define DISPID_IHTMLCURRENTSTYLE_LAYOUTGRIDCHAR                   DISPID_A_LAYOUTGRIDCHAR
#define DISPID_IHTMLCURRENTSTYLE_LAYOUTGRIDLINE                   DISPID_A_LAYOUTGRIDLINE
#define DISPID_IHTMLCURRENTSTYLE_LAYOUTGRIDMODE                   DISPID_A_LAYOUTGRIDMODE
#define DISPID_IHTMLCURRENTSTYLE_LAYOUTGRIDTYPE                   DISPID_A_LAYOUTGRIDTYPE
#define DISPID_IHTMLCURRENTSTYLE_BORDERSTYLE                      DISPID_A_BORDERSTYLE
#define DISPID_IHTMLCURRENTSTYLE_BORDERCOLOR                      DISPID_A_BORDERCOLOR
#define DISPID_IHTMLCURRENTSTYLE_BORDERWIDTH                      DISPID_A_BORDERWIDTH
#define DISPID_IHTMLCURRENTSTYLE_PADDING                          DISPID_A_PADDING
#define DISPID_IHTMLCURRENTSTYLE_MARGIN                           DISPID_A_MARGIN
#define DISPID_IHTMLCURRENTSTYLE_ACCELERATOR                      DISPID_A_ACCELERATOR
#define DISPID_IHTMLCURRENTSTYLE_OVERFLOWX                        DISPID_A_OVERFLOWX
#define DISPID_IHTMLCURRENTSTYLE_OVERFLOWY                        DISPID_A_OVERFLOWY
#define DISPID_IHTMLCURRENTSTYLE_TEXTTRANSFORM                    DISPID_A_TEXTTRANSFORM

//    DISPIDs for interface IHTMLCurrentStyle2

#define DISPID_IHTMLCURRENTSTYLE2_LAYOUTFLOW                      DISPID_A_LAYOUTFLOW
#define DISPID_IHTMLCURRENTSTYLE2_WORDWRAP                        DISPID_A_WORDWRAP
#define DISPID_IHTMLCURRENTSTYLE2_TEXTUNDERLINEPOSITION           DISPID_A_TEXTUNDERLINEPOSITION
#define DISPID_IHTMLCURRENTSTYLE2_HASLAYOUT                       DISPID_A_HASLAYOUT
#define DISPID_IHTMLCURRENTSTYLE2_SCROLLBARBASECOLOR              DISPID_A_SCROLLBARBASECOLOR
#define DISPID_IHTMLCURRENTSTYLE2_SCROLLBARFACECOLOR              DISPID_A_SCROLLBARFACECOLOR
#define DISPID_IHTMLCURRENTSTYLE2_SCROLLBAR3DLIGHTCOLOR           DISPID_A_SCROLLBAR3DLIGHTCOLOR
#define DISPID_IHTMLCURRENTSTYLE2_SCROLLBARSHADOWCOLOR            DISPID_A_SCROLLBARSHADOWCOLOR
#define DISPID_IHTMLCURRENTSTYLE2_SCROLLBARHIGHLIGHTCOLOR         DISPID_A_SCROLLBARHIGHLIGHTCOLOR
#define DISPID_IHTMLCURRENTSTYLE2_SCROLLBARDARKSHADOWCOLOR        DISPID_A_SCROLLBARDARKSHADOWCOLOR
#define DISPID_IHTMLCURRENTSTYLE2_SCROLLBARARROWCOLOR             DISPID_A_SCROLLBARARROWCOLOR
#define DISPID_IHTMLCURRENTSTYLE2_SCROLLBARTRACKCOLOR             DISPID_A_SCROLLBARTRACKCOLOR
#define DISPID_IHTMLCURRENTSTYLE2_WRITINGMODE                     DISPID_A_WRITINGMODE
#define DISPID_IHTMLCURRENTSTYLE2_ZOOM                            DISPID_A_ZOOM
#define DISPID_IHTMLCURRENTSTYLE2_FILTER                          DISPID_A_FILTER
#define DISPID_IHTMLCURRENTSTYLE2_TEXTALIGNLAST                   DISPID_A_TEXTALIGNLAST
#define DISPID_IHTMLCURRENTSTYLE2_TEXTKASHIDASPACE                DISPID_A_TEXTKASHIDASPACE
#define DISPID_IHTMLCURRENTSTYLE2_ISBLOCK                         DISPID_A_ISBLOCK

//    DISPIDs for interface IHTMLCurrentStyle3

#define DISPID_IHTMLCURRENTSTYLE3_TEXTOVERFLOW                    DISPID_A_TEXTOVERFLOW
#define DISPID_IHTMLCURRENTSTYLE3_MINHEIGHT                       DISPID_A_MINHEIGHT
#define DISPID_IHTMLCURRENTSTYLE3_WORDSPACING                     DISPID_A_WORDSPACING
#define DISPID_IHTMLCURRENTSTYLE3_WHITESPACE                      DISPID_A_WHITESPACE

//    DISPIDs for interface IHTMLCurrentStyle4

#define DISPID_IHTMLCURRENTSTYLE4_MSINTERPOLATIONMODE             DISPID_A_INTERPOLATION
#define DISPID_IHTMLCURRENTSTYLE4_MAXHEIGHT                       DISPID_A_MAXHEIGHT
#define DISPID_IHTMLCURRENTSTYLE4_MINWIDTH                        DISPID_A_MINWIDTH
#define DISPID_IHTMLCURRENTSTYLE4_MAXWIDTH                        DISPID_A_MAXWIDTH

//    DISPIDs for interface IHTMLCurrentStyle5

#define DISPID_IHTMLCURRENTSTYLE5_CAPTIONSIDE                     DISPID_A_CAPTIONSIDE
#define DISPID_IHTMLCURRENTSTYLE5_OUTLINE                         DISPID_A_OUTLINE
#define DISPID_IHTMLCURRENTSTYLE5_OUTLINEWIDTH                    DISPID_A_OUTLINEWIDTH
#define DISPID_IHTMLCURRENTSTYLE5_OUTLINESTYLE                    DISPID_A_OUTLINESTYLE
#define DISPID_IHTMLCURRENTSTYLE5_OUTLINECOLOR                    DISPID_A_OUTLINECOLOR
#define DISPID_IHTMLCURRENTSTYLE5_BOXSIZING                       DISPID_A_BOXSIZING
#define DISPID_IHTMLCURRENTSTYLE5_BORDERSPACING                   DISPID_A_BORDERSPACING
#define DISPID_IHTMLCURRENTSTYLE5_ORPHANS                         DISPID_A_ORPHANS
#define DISPID_IHTMLCURRENTSTYLE5_WIDOWS                          DISPID_A_WIDOWS
#define DISPID_IHTMLCURRENTSTYLE5_PAGEBREAKINSIDE                 DISPID_A_PAGEBREAKINSIDE
#define DISPID_IHTMLCURRENTSTYLE5_EMPTYCELLS                      DISPID_A_EMPTYCELLS
#define DISPID_IHTMLCURRENTSTYLE5_MSBLOCKPROGRESSION              DISPID_A_MS_BLOCKPROGRESSION
#define DISPID_IHTMLCURRENTSTYLE5_QUOTES                          DISPID_A_QUOTES

//    DISPIDs for interface IHTMLRect

#define DISPID_IHTMLRECT_LEFT                                     DISPID_OMRECT+1
#define DISPID_IHTMLRECT_TOP                                      DISPID_OMRECT+2
#define DISPID_IHTMLRECT_RIGHT                                    DISPID_OMRECT+3
#define DISPID_IHTMLRECT_BOTTOM                                   DISPID_OMRECT+4

//    DISPIDs for interface IHTMLRect2

#define DISPID_IHTMLRECT2_WIDTH                                   DISPID_OMRECT+5
#define DISPID_IHTMLRECT2_HEIGHT                                  DISPID_OMRECT+6

//    DISPIDs for interface IHTMLRectCollection

#define DISPID_IHTMLRECTCOLLECTION_LENGTH                         DISPID_COLLECTION
#define DISPID_IHTMLRECTCOLLECTION__NEWENUM                       DISPID_NEWENUM
#define DISPID_IHTMLRECTCOLLECTION_ITEM                           DISPID_VALUE

//    DISPIDs for interface IHTMLDOMNode

#define DISPID_IHTMLDOMNODE_NODETYPE                              DISPID_ELEMENT+46
#define DISPID_IHTMLDOMNODE_PARENTNODE                            DISPID_ELEMENT+47
#define DISPID_IHTMLDOMNODE_HASCHILDNODES                         DISPID_ELEMENT+48
#define DISPID_IHTMLDOMNODE_CHILDNODES                            DISPID_ELEMENT+49
#define DISPID_IHTMLDOMNODE_ATTRIBUTES                            DISPID_ELEMENT+50
#define DISPID_IHTMLDOMNODE_INSERTBEFORE                          DISPID_ELEMENT+51
#define DISPID_IHTMLDOMNODE_REMOVECHILD                           DISPID_ELEMENT+52
#define DISPID_IHTMLDOMNODE_REPLACECHILD                          DISPID_ELEMENT+53
#define DISPID_IHTMLDOMNODE_CLONENODE                             DISPID_ELEMENT+61
#define DISPID_IHTMLDOMNODE_REMOVENODE                            DISPID_ELEMENT+66
#define DISPID_IHTMLDOMNODE_SWAPNODE                              DISPID_ELEMENT+68
#define DISPID_IHTMLDOMNODE_REPLACENODE                           DISPID_ELEMENT+67
#define DISPID_IHTMLDOMNODE_APPENDCHILD                           DISPID_ELEMENT+73
#define DISPID_IHTMLDOMNODE_NODENAME                              DISPID_ELEMENT+74
#define DISPID_IHTMLDOMNODE_NODEVALUE                             DISPID_ELEMENT+75
#define DISPID_IHTMLDOMNODE_FIRSTCHILD                            DISPID_ELEMENT+76
#define DISPID_IHTMLDOMNODE_LASTCHILD                             DISPID_ELEMENT+77
#define DISPID_IHTMLDOMNODE_PREVIOUSSIBLING                       DISPID_ELEMENT+78
#define DISPID_IHTMLDOMNODE_NEXTSIBLING                           DISPID_ELEMENT+79

//    DISPIDs for interface IHTMLDOMNode2

#define DISPID_IHTMLDOMNODE2_OWNERDOCUMENT                        DISPID_ELEMENT+113

//    DISPIDs for interface IHTMLDOMNode3

#define DISPID_IHTMLDOMNODE3_PREFIX                               DISPID_ELEMENT+120
#define DISPID_IHTMLDOMNODE3_LOCALNAME                            DISPID_ELEMENT+118
#define DISPID_IHTMLDOMNODE3_NAMESPACEURI                         DISPID_ELEMENT+119
#define DISPID_IHTMLDOMNODE3_TEXTCONTENT                          DISPID_ELEMENT+127
#define DISPID_IHTMLDOMNODE3_ISEQUALNODE                          DISPID_ELEMENT+121
#define DISPID_IHTMLDOMNODE3_LOOKUPNAMESPACEURI                   DISPID_ELEMENT+122
#define DISPID_IHTMLDOMNODE3_LOOKUPPREFIX                         DISPID_ELEMENT+123
#define DISPID_IHTMLDOMNODE3_ISDEFAULTNAMESPACE                   DISPID_ELEMENT+124
#define DISPID_IHTMLDOMNODE3_IE9_APPENDCHILD                      DISPID_IE9_ELEMENT+18
#define DISPID_IHTMLDOMNODE3_IE9_INSERTBEFORE                     DISPID_IE9_ELEMENT+19
#define DISPID_IHTMLDOMNODE3_IE9_REMOVECHILD                      DISPID_IE9_ELEMENT+20
#define DISPID_IHTMLDOMNODE3_IE9_REPLACECHILD                     DISPID_IE9_ELEMENT+21
#define DISPID_IHTMLDOMNODE3_ISSAMENODE                           DISPID_ELEMENT+125
#define DISPID_IHTMLDOMNODE3_COMPAREDOCUMENTPOSITION              DISPID_ELEMENT+126
#define DISPID_IHTMLDOMNODE3_ISSUPPORTED                          DISPID_IE9_ELEMENT+27

//    DISPIDs for interface IHTMLDOMAttribute

#define DISPID_IHTMLDOMATTRIBUTE_NODENAME                         DISPID_DOMATTRIBUTE
#define DISPID_IHTMLDOMATTRIBUTE_NODEVALUE                        DISPID_DOMATTRIBUTE+2
#define DISPID_IHTMLDOMATTRIBUTE_SPECIFIED                        DISPID_DOMATTRIBUTE+1

//    DISPIDs for interface IHTMLDOMAttribute2

#define DISPID_IHTMLDOMATTRIBUTE2_NAME                            DISPID_DOMATTRIBUTE+3
#define DISPID_IHTMLDOMATTRIBUTE2_VALUE                           DISPID_DOMATTRIBUTE+4
#define DISPID_IHTMLDOMATTRIBUTE2_EXPANDO                         DISPID_DOMATTRIBUTE+5
#define DISPID_IHTMLDOMATTRIBUTE2_NODETYPE                        DISPID_DOMATTRIBUTE+6
#define DISPID_IHTMLDOMATTRIBUTE2_PARENTNODE                      DISPID_DOMATTRIBUTE+7
#define DISPID_IHTMLDOMATTRIBUTE2_CHILDNODES                      DISPID_DOMATTRIBUTE+8
#define DISPID_IHTMLDOMATTRIBUTE2_FIRSTCHILD                      DISPID_DOMATTRIBUTE+9
#define DISPID_IHTMLDOMATTRIBUTE2_LASTCHILD                       DISPID_DOMATTRIBUTE+10
#define DISPID_IHTMLDOMATTRIBUTE2_PREVIOUSSIBLING                 DISPID_DOMATTRIBUTE+11
#define DISPID_IHTMLDOMATTRIBUTE2_NEXTSIBLING                     DISPID_DOMATTRIBUTE+12
#define DISPID_IHTMLDOMATTRIBUTE2_ATTRIBUTES                      DISPID_DOMATTRIBUTE+13
#define DISPID_IHTMLDOMATTRIBUTE2_OWNERDOCUMENT                   DISPID_DOMATTRIBUTE+14
#define DISPID_IHTMLDOMATTRIBUTE2_INSERTBEFORE                    DISPID_DOMATTRIBUTE+15
#define DISPID_IHTMLDOMATTRIBUTE2_REPLACECHILD                    DISPID_DOMATTRIBUTE+16
#define DISPID_IHTMLDOMATTRIBUTE2_REMOVECHILD                     DISPID_DOMATTRIBUTE+17
#define DISPID_IHTMLDOMATTRIBUTE2_APPENDCHILD                     DISPID_DOMATTRIBUTE+18
#define DISPID_IHTMLDOMATTRIBUTE2_HASCHILDNODES                   DISPID_DOMATTRIBUTE+19
#define DISPID_IHTMLDOMATTRIBUTE2_CLONENODE                       DISPID_DOMATTRIBUTE+20

//    DISPIDs for interface IHTMLDOMAttribute3

#define DISPID_IHTMLDOMATTRIBUTE3_IE8_NODEVALUE                   DISPID_IE8_ATTR+3
#define DISPID_IHTMLDOMATTRIBUTE3_IE8_VALUE                       DISPID_IE8_ATTR+4
#define DISPID_IHTMLDOMATTRIBUTE3_IE8_SPECIFIED                   DISPID_IE8_ATTR
#define DISPID_IHTMLDOMATTRIBUTE3_OWNERELEMENT                    DISPID_IE8_ATTR+1

//    DISPIDs for interface IHTMLDOMAttribute4

#define DISPID_IHTMLDOMATTRIBUTE4_IE9_NODEVALUE                   DISPID_IE8_ATTR+9
#define DISPID_IHTMLDOMATTRIBUTE4_IE9_NODENAME                    DISPID_IE8_ATTR+10
#define DISPID_IHTMLDOMATTRIBUTE4_IE9_NAME                        DISPID_IE8_ATTR+11
#define DISPID_IHTMLDOMATTRIBUTE4_IE9_VALUE                       DISPID_IE8_ATTR+12
#define DISPID_IHTMLDOMATTRIBUTE4_IE9_FIRSTCHILD                  DISPID_IE8_ATTR+13
#define DISPID_IHTMLDOMATTRIBUTE4_IE9_LASTCHILD                   DISPID_IE8_ATTR+14
#define DISPID_IHTMLDOMATTRIBUTE4_IE9_CHILDNODES                  DISPID_IE8_ATTR+15
#define DISPID_IHTMLDOMATTRIBUTE4_HASATTRIBUTES                   DISPID_IE8_ATTR+16
#define DISPID_IHTMLDOMATTRIBUTE4_IE9_HASCHILDNODES               DISPID_IE8_ATTR+17
#define DISPID_IHTMLDOMATTRIBUTE4_NORMALIZE                       DISPID_IE8_ATTR+20
#define DISPID_IHTMLDOMATTRIBUTE4_IE9_SPECIFIED                   DISPID_IE8_ATTR+21

//    DISPIDs for interface IHTMLDOMTextNode

#define DISPID_IHTMLDOMTEXTNODE_DATA                              DISPID_DOMTEXTNODE
#define DISPID_IHTMLDOMTEXTNODE_TOSTRING                          DISPID_DOMTEXTNODE+1
#define DISPID_IHTMLDOMTEXTNODE_LENGTH                            DISPID_DOMTEXTNODE+2
#define DISPID_IHTMLDOMTEXTNODE_SPLITTEXT                         DISPID_DOMTEXTNODE+3

//    DISPIDs for interface IHTMLDOMTextNode2

#define DISPID_IHTMLDOMTEXTNODE2_SUBSTRINGDATA                    DISPID_DOMTEXTNODE+4
#define DISPID_IHTMLDOMTEXTNODE2_APPENDDATA                       DISPID_DOMTEXTNODE+5
#define DISPID_IHTMLDOMTEXTNODE2_INSERTDATA                       DISPID_DOMTEXTNODE+6
#define DISPID_IHTMLDOMTEXTNODE2_DELETEDATA                       DISPID_DOMTEXTNODE+7
#define DISPID_IHTMLDOMTEXTNODE2_REPLACEDATA                      DISPID_DOMTEXTNODE+8

//    DISPIDs for interface IHTMLDOMTextNode3

#define DISPID_IHTMLDOMTEXTNODE3_IE9_SUBSTRINGDATA                DISPID_DOMTEXTNODE+10
#define DISPID_IHTMLDOMTEXTNODE3_IE9_INSERTDATA                   DISPID_DOMTEXTNODE+11
#define DISPID_IHTMLDOMTEXTNODE3_IE9_DELETEDATA                   DISPID_DOMTEXTNODE+12
#define DISPID_IHTMLDOMTEXTNODE3_IE9_REPLACEDATA                  DISPID_DOMTEXTNODE+13
#define DISPID_IHTMLDOMTEXTNODE3_IE9_SPLITTEXT                    DISPID_DOMTEXTNODE+9
#define DISPID_IHTMLDOMTEXTNODE3_WHOLETEXT                        DISPID_DOMTEXTNODE+14
#define DISPID_IHTMLDOMTEXTNODE3_REPLACEWHOLETEXT                 DISPID_DOMTEXTNODE+15
#define DISPID_IHTMLDOMTEXTNODE3_HASATTRIBUTES                    DISPID_DOMTEXTNODE+17
#define DISPID_IHTMLDOMTEXTNODE3_NORMALIZE                        DISPID_DOMTEXTNODE+19

//    DISPIDs for interface IHTMLDOMImplementation

#define DISPID_IHTMLDOMIMPLEMENTATION_HASFEATURE                  DISPID_DOMIMPLEMENTATION

//    DISPIDs for interface IHTMLDOMImplementation2

#define DISPID_IHTMLDOMIMPLEMENTATION2_CREATEDOCUMENTTYPE         DISPID_DOMIMPLEMENTATION+1
#define DISPID_IHTMLDOMIMPLEMENTATION2_CREATEDOCUMENT             DISPID_DOMIMPLEMENTATION+2
#define DISPID_IHTMLDOMIMPLEMENTATION2_CREATEHTMLDOCUMENT         DISPID_DOMIMPLEMENTATION+3
#define DISPID_IHTMLDOMIMPLEMENTATION2_IE9_HASFEATURE             DISPID_DOMIMPLEMENTATION+4

//    DISPIDs for interface IHTMLAttributeCollection

#define DISPID_IHTMLATTRIBUTECOLLECTION_LENGTH                    DISPID_COLLECTION
#define DISPID_IHTMLATTRIBUTECOLLECTION__NEWENUM                  DISPID_NEWENUM
#define DISPID_IHTMLATTRIBUTECOLLECTION_ITEM                      DISPID_VALUE

//    DISPIDs for interface IHTMLAttributeCollection2

#define DISPID_IHTMLATTRIBUTECOLLECTION2_GETNAMEDITEM             DISPID_COLLECTION+1
#define DISPID_IHTMLATTRIBUTECOLLECTION2_SETNAMEDITEM             DISPID_COLLECTION+2
#define DISPID_IHTMLATTRIBUTECOLLECTION2_REMOVENAMEDITEM          DISPID_COLLECTION+3

//    DISPIDs for interface IHTMLAttributeCollection3

#define DISPID_IHTMLATTRIBUTECOLLECTION3_IE8_GETNAMEDITEM         DISPID_IE8_NAMEDNODEMAP
#define DISPID_IHTMLATTRIBUTECOLLECTION3_IE8_SETNAMEDITEM         DISPID_IE8_NAMEDNODEMAP+1
#define DISPID_IHTMLATTRIBUTECOLLECTION3_IE8_REMOVENAMEDITEM      DISPID_IE8_NAMEDNODEMAP+2
#define DISPID_IHTMLATTRIBUTECOLLECTION3_IE8_ITEM                 DISPID_IE8_NAMEDNODEMAP+4
#define DISPID_IHTMLATTRIBUTECOLLECTION3_IE8_LENGTH               DISPID_IE8_NAMEDNODEMAP+3

//    DISPIDs for interface IHTMLAttributeCollection4

#define DISPID_IHTMLATTRIBUTECOLLECTION4_GETNAMEDITEMNS           DISPID_IE8_NAMEDNODEMAP+5
#define DISPID_IHTMLATTRIBUTECOLLECTION4_SETNAMEDITEMNS           DISPID_IE8_NAMEDNODEMAP+6
#define DISPID_IHTMLATTRIBUTECOLLECTION4_REMOVENAMEDITEMNS        DISPID_IE8_NAMEDNODEMAP+7
#define DISPID_IHTMLATTRIBUTECOLLECTION4_IE9_GETNAMEDITEM         DISPID_IE8_NAMEDNODEMAP+8
#define DISPID_IHTMLATTRIBUTECOLLECTION4_IE9_SETNAMEDITEM         DISPID_IE8_NAMEDNODEMAP+9
#define DISPID_IHTMLATTRIBUTECOLLECTION4_IE9_REMOVENAMEDITEM      DISPID_IE8_NAMEDNODEMAP+10
#define DISPID_IHTMLATTRIBUTECOLLECTION4_IE9_ITEM                 DISPID_IE8_NAMEDNODEMAP+11
#define DISPID_IHTMLATTRIBUTECOLLECTION4_IE9_LENGTH               DISPID_IE8_NAMEDNODEMAP+12

//    DISPIDs for interface IHTMLDOMChildrenCollection

#define DISPID_IHTMLDOMCHILDRENCOLLECTION_LENGTH                  DISPID_COLLECTION
#define DISPID_IHTMLDOMCHILDRENCOLLECTION__NEWENUM                DISPID_NEWENUM
#define DISPID_IHTMLDOMCHILDRENCOLLECTION_ITEM                    DISPID_VALUE

//    DISPIDs for interface IHTMLDOMChildrenCollection2

#define DISPID_IHTMLDOMCHILDRENCOLLECTION2_IE9_ITEM               DISPID_VALUE+1

//    DISPIDs for interface IHTMLElement

#define DISPID_IHTMLELEMENT_SETATTRIBUTE                          DISPID_HTMLOBJECT+1
#define DISPID_IHTMLELEMENT_GETATTRIBUTE                          DISPID_HTMLOBJECT+2
#define DISPID_IHTMLELEMENT_REMOVEATTRIBUTE                       DISPID_HTMLOBJECT+3
#define DISPID_IHTMLELEMENT_CLASSNAME                             DISPID_ELEMENT+1
#define DISPID_IHTMLELEMENT_ID                                    DISPID_ELEMENT+2
#define DISPID_IHTMLELEMENT_TAGNAME                               DISPID_ELEMENT+4
#define DISPID_IHTMLELEMENT_PARENTELEMENT                         STDPROPID_XOBJ_PARENT
#define DISPID_IHTMLELEMENT_STYLE                                 STDPROPID_XOBJ_STYLE
#define DISPID_IHTMLELEMENT_ONHELP                                DISPID_EVPROP_ONHELP
#define DISPID_IHTMLELEMENT_ONCLICK                               DISPID_EVPROP_ONCLICK
#define DISPID_IHTMLELEMENT_ONDBLCLICK                            DISPID_EVPROP_ONDBLCLICK
#define DISPID_IHTMLELEMENT_ONKEYDOWN                             DISPID_EVPROP_ONKEYDOWN
#define DISPID_IHTMLELEMENT_ONKEYUP                               DISPID_EVPROP_ONKEYUP
#define DISPID_IHTMLELEMENT_ONKEYPRESS                            DISPID_EVPROP_ONKEYPRESS
#define DISPID_IHTMLELEMENT_ONMOUSEOUT                            DISPID_EVPROP_ONMOUSEOUT
#define DISPID_IHTMLELEMENT_ONMOUSEOVER                           DISPID_EVPROP_ONMOUSEOVER
#define DISPID_IHTMLELEMENT_ONMOUSEMOVE                           DISPID_EVPROP_ONMOUSEMOVE
#define DISPID_IHTMLELEMENT_ONMOUSEDOWN                           DISPID_EVPROP_ONMOUSEDOWN
#define DISPID_IHTMLELEMENT_ONMOUSEUP                             DISPID_EVPROP_ONMOUSEUP
#define DISPID_IHTMLELEMENT_DOCUMENT                              DISPID_ELEMENT+18
#define DISPID_IHTMLELEMENT_TITLE                                 STDPROPID_XOBJ_CONTROLTIPTEXT
#define DISPID_IHTMLELEMENT_LANGUAGE                              DISPID_A_LANGUAGE
#define DISPID_IHTMLELEMENT_ONSELECTSTART                         DISPID_EVPROP_ONSELECTSTART
#define DISPID_IHTMLELEMENT_SCROLLINTOVIEW                        DISPID_ELEMENT+19
#define DISPID_IHTMLELEMENT_CONTAINS                              DISPID_ELEMENT+20
#define DISPID_IHTMLELEMENT_SOURCEINDEX                           DISPID_ELEMENT+24
#define DISPID_IHTMLELEMENT_RECORDNUMBER                          DISPID_ELEMENT+25
#define DISPID_IHTMLELEMENT_LANG                                  DISPID_A_LANG
#define DISPID_IHTMLELEMENT_OFFSETLEFT                            DISPID_ELEMENT+8
#define DISPID_IHTMLELEMENT_OFFSETTOP                             DISPID_ELEMENT+9
#define DISPID_IHTMLELEMENT_OFFSETWIDTH                           DISPID_ELEMENT+10
#define DISPID_IHTMLELEMENT_OFFSETHEIGHT                          DISPID_ELEMENT+11
#define DISPID_IHTMLELEMENT_OFFSETPARENT                          DISPID_ELEMENT+12
#define DISPID_IHTMLELEMENT_INNERHTML                             DISPID_ELEMENT+26
#define DISPID_IHTMLELEMENT_INNERTEXT                             DISPID_ELEMENT+27
#define DISPID_IHTMLELEMENT_OUTERHTML                             DISPID_ELEMENT+28
#define DISPID_IHTMLELEMENT_OUTERTEXT                             DISPID_ELEMENT+29
#define DISPID_IHTMLELEMENT_INSERTADJACENTHTML                    DISPID_ELEMENT+30
#define DISPID_IHTMLELEMENT_INSERTADJACENTTEXT                    DISPID_ELEMENT+31
#define DISPID_IHTMLELEMENT_PARENTTEXTEDIT                        DISPID_ELEMENT+32
#define DISPID_IHTMLELEMENT_ISTEXTEDIT                            DISPID_ELEMENT+34
#define DISPID_IHTMLELEMENT_CLICK                                 DISPID_ELEMENT+33
#define DISPID_IHTMLELEMENT_FILTERS                               DISPID_ELEMENT+35
#define DISPID_IHTMLELEMENT_ONDRAGSTART                           DISPID_EVPROP_ONDRAGSTART
#define DISPID_IHTMLELEMENT_TOSTRING                              DISPID_ELEMENT+36
#define DISPID_IHTMLELEMENT_ONBEFOREUPDATE                        DISPID_EVPROP_ONBEFOREUPDATE
#define DISPID_IHTMLELEMENT_ONAFTERUPDATE                         DISPID_EVPROP_ONAFTERUPDATE
#define DISPID_IHTMLELEMENT_ONERRORUPDATE                         DISPID_EVPROP_ONERRORUPDATE
#define DISPID_IHTMLELEMENT_ONROWEXIT                             DISPID_EVPROP_ONROWEXIT
#define DISPID_IHTMLELEMENT_ONROWENTER                            DISPID_EVPROP_ONROWENTER
#define DISPID_IHTMLELEMENT_ONDATASETCHANGED                      DISPID_EVPROP_ONDATASETCHANGED
#define DISPID_IHTMLELEMENT_ONDATAAVAILABLE                       DISPID_EVPROP_ONDATAAVAILABLE
#define DISPID_IHTMLELEMENT_ONDATASETCOMPLETE                     DISPID_EVPROP_ONDATASETCOMPLETE
#define DISPID_IHTMLELEMENT_ONFILTERCHANGE                        DISPID_EVPROP_ONFILTER
#define DISPID_IHTMLELEMENT_CHILDREN                              DISPID_ELEMENT+37
#define DISPID_IHTMLELEMENT_ALL                                   DISPID_ELEMENT+38

//    DISPIDs for interface IHTMLElement2

#define DISPID_IHTMLELEMENT2_SCOPENAME                            DISPID_ELEMENT+39
#define DISPID_IHTMLELEMENT2_SETCAPTURE                           DISPID_ELEMENT+40
#define DISPID_IHTMLELEMENT2_RELEASECAPTURE                       DISPID_ELEMENT+41
#define DISPID_IHTMLELEMENT2_ONLOSECAPTURE                        DISPID_EVPROP_ONLOSECAPTURE
#define DISPID_IHTMLELEMENT2_COMPONENTFROMPOINT                   DISPID_ELEMENT+42
#define DISPID_IHTMLELEMENT2_DOSCROLL                             DISPID_ELEMENT+43
#define DISPID_IHTMLELEMENT2_ONSCROLL                             DISPID_EVPROP_ONSCROLL
#define DISPID_IHTMLELEMENT2_ONDRAG                               DISPID_EVPROP_ONDRAG
#define DISPID_IHTMLELEMENT2_ONDRAGEND                            DISPID_EVPROP_ONDRAGEND
#define DISPID_IHTMLELEMENT2_ONDRAGENTER                          DISPID_EVPROP_ONDRAGENTER
#define DISPID_IHTMLELEMENT2_ONDRAGOVER                           DISPID_EVPROP_ONDRAGOVER
#define DISPID_IHTMLELEMENT2_ONDRAGLEAVE                          DISPID_EVPROP_ONDRAGLEAVE
#define DISPID_IHTMLELEMENT2_ONDROP                               DISPID_EVPROP_ONDROP
#define DISPID_IHTMLELEMENT2_ONBEFORECUT                          DISPID_EVPROP_ONBEFORECUT
#define DISPID_IHTMLELEMENT2_ONCUT                                DISPID_EVPROP_ONCUT
#define DISPID_IHTMLELEMENT2_ONBEFORECOPY                         DISPID_EVPROP_ONBEFORECOPY
#define DISPID_IHTMLELEMENT2_ONCOPY                               DISPID_EVPROP_ONCOPY
#define DISPID_IHTMLELEMENT2_ONBEFOREPASTE                        DISPID_EVPROP_ONBEFOREPASTE
#define DISPID_IHTMLELEMENT2_ONPASTE                              DISPID_EVPROP_ONPASTE
#define DISPID_IHTMLELEMENT2_CURRENTSTYLE                         DISPID_ELEMENT+7
#define DISPID_IHTMLELEMENT2_ONPROPERTYCHANGE                     DISPID_EVPROP_ONPROPERTYCHANGE
#define DISPID_IHTMLELEMENT2_GETCLIENTRECTS                       DISPID_ELEMENT+44
#define DISPID_IHTMLELEMENT2_GETBOUNDINGCLIENTRECT                DISPID_ELEMENT+45
#define DISPID_IHTMLELEMENT2_SETEXPRESSION                        DISPID_HTMLOBJECT+4
#define DISPID_IHTMLELEMENT2_GETEXPRESSION                        DISPID_HTMLOBJECT+5
#define DISPID_IHTMLELEMENT2_REMOVEEXPRESSION                     DISPID_HTMLOBJECT+6
#define DISPID_IHTMLELEMENT2_TABINDEX                             STDPROPID_XOBJ_TABINDEX
#define DISPID_IHTMLELEMENT2_FOCUS                                DISPID_SITE+0
#define DISPID_IHTMLELEMENT2_ACCESSKEY                            DISPID_SITE+5
#define DISPID_IHTMLELEMENT2_ONBLUR                               DISPID_EVPROP_ONBLUR
#define DISPID_IHTMLELEMENT2_ONFOCUS                              DISPID_EVPROP_ONFOCUS
#define DISPID_IHTMLELEMENT2_ONRESIZE                             DISPID_EVPROP_ONRESIZE
#define DISPID_IHTMLELEMENT2_BLUR                                 DISPID_SITE+2
#define DISPID_IHTMLELEMENT2_ADDFILTER                            DISPID_SITE+17
#define DISPID_IHTMLELEMENT2_REMOVEFILTER                         DISPID_SITE+18
#define DISPID_IHTMLELEMENT2_CLIENTHEIGHT                         DISPID_SITE+19
#define DISPID_IHTMLELEMENT2_CLIENTWIDTH                          DISPID_SITE+20
#define DISPID_IHTMLELEMENT2_CLIENTTOP                            DISPID_SITE+21
#define DISPID_IHTMLELEMENT2_CLIENTLEFT                           DISPID_SITE+22
#define DISPID_IHTMLELEMENT2_ATTACHEVENT                          DISPID_HTMLOBJECT+7
#define DISPID_IHTMLELEMENT2_DETACHEVENT                          DISPID_HTMLOBJECT+8
#define DISPID_IHTMLELEMENT2_READYSTATE                           DISPID_A_READYSTATE
#define DISPID_IHTMLELEMENT2_ONREADYSTATECHANGE                   DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLELEMENT2_ONROWSDELETE                         DISPID_EVPROP_ONROWSDELETE
#define DISPID_IHTMLELEMENT2_ONROWSINSERTED                       DISPID_EVPROP_ONROWSINSERTED
#define DISPID_IHTMLELEMENT2_ONCELLCHANGE                         DISPID_EVPROP_ONCELLCHANGE
#define DISPID_IHTMLELEMENT2_DIR                                  DISPID_A_DIR
#define DISPID_IHTMLELEMENT2_CREATECONTROLRANGE                   DISPID_ELEMENT+56
#define DISPID_IHTMLELEMENT2_SCROLLHEIGHT                         DISPID_ELEMENT+57
#define DISPID_IHTMLELEMENT2_SCROLLWIDTH                          DISPID_ELEMENT+58
#define DISPID_IHTMLELEMENT2_SCROLLTOP                            DISPID_ELEMENT+59
#define DISPID_IHTMLELEMENT2_SCROLLLEFT                           DISPID_ELEMENT+60
#define DISPID_IHTMLELEMENT2_CLEARATTRIBUTES                      DISPID_ELEMENT+62
#define DISPID_IHTMLELEMENT2_MERGEATTRIBUTES                      DISPID_ELEMENT+63
#define DISPID_IHTMLELEMENT2_ONCONTEXTMENU                        DISPID_EVPROP_ONCONTEXTMENU
#define DISPID_IHTMLELEMENT2_INSERTADJACENTELEMENT                DISPID_ELEMENT+69
#define DISPID_IHTMLELEMENT2_APPLYELEMENT                         DISPID_ELEMENT+65
#define DISPID_IHTMLELEMENT2_GETADJACENTTEXT                      DISPID_ELEMENT+70
#define DISPID_IHTMLELEMENT2_REPLACEADJACENTTEXT                  DISPID_ELEMENT+71
#define DISPID_IHTMLELEMENT2_CANHAVECHILDREN                      DISPID_ELEMENT+72
#define DISPID_IHTMLELEMENT2_ADDBEHAVIOR                          DISPID_ELEMENT+80
#define DISPID_IHTMLELEMENT2_REMOVEBEHAVIOR                       DISPID_ELEMENT+81
#define DISPID_IHTMLELEMENT2_RUNTIMESTYLE                         DISPID_ELEMENT+64
#define DISPID_IHTMLELEMENT2_BEHAVIORURNS                         DISPID_ELEMENT+82
#define DISPID_IHTMLELEMENT2_TAGURN                               DISPID_ELEMENT+83
#define DISPID_IHTMLELEMENT2_ONBEFOREEDITFOCUS                    DISPID_EVPROP_ONBEFOREEDITFOCUS
#define DISPID_IHTMLELEMENT2_READYSTATEVALUE                      DISPID_ELEMENT+84
#define DISPID_IHTMLELEMENT2_GETELEMENTSBYTAGNAME                 DISPID_ELEMENT+85

//    DISPIDs for interface IHTMLElement3

#define DISPID_IHTMLELEMENT3_MERGEATTRIBUTES                      DISPID_ELEMENT+96
#define DISPID_IHTMLELEMENT3_ISMULTILINE                          DISPID_ELEMENT+97
#define DISPID_IHTMLELEMENT3_CANHAVEHTML                          DISPID_ELEMENT+98
#define DISPID_IHTMLELEMENT3_ONLAYOUTCOMPLETE                     DISPID_EVPROP_ONLAYOUTCOMPLETE
#define DISPID_IHTMLELEMENT3_ONPAGE                               DISPID_EVPROP_ONPAGE
#define DISPID_IHTMLELEMENT3_INFLATEBLOCK                         DISPID_ELEMENT+100
#define DISPID_IHTMLELEMENT3_ONBEFOREDEACTIVATE                   DISPID_EVPROP_ONBEFOREDEACTIVATE
#define DISPID_IHTMLELEMENT3_SETACTIVE                            DISPID_ELEMENT+101
#define DISPID_IHTMLELEMENT3_CONTENTEDITABLE                      DISPID_A_EDITABLE
#define DISPID_IHTMLELEMENT3_ISCONTENTEDITABLE                    DISPID_ELEMENT+102
#define DISPID_IHTMLELEMENT3_HIDEFOCUS                            DISPID_A_HIDEFOCUS
#define DISPID_IHTMLELEMENT3_DISABLED                             STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLELEMENT3_ISDISABLED                           DISPID_ELEMENT+105
#define DISPID_IHTMLELEMENT3_ONMOVE                               DISPID_EVPROP_ONMOVE
#define DISPID_IHTMLELEMENT3_ONCONTROLSELECT                      DISPID_EVPROP_ONCONTROLSELECT
#define DISPID_IHTMLELEMENT3_FIREEVENT                            DISPID_ELEMENT+106
#define DISPID_IHTMLELEMENT3_ONRESIZESTART                        DISPID_EVPROP_ONRESIZESTART
#define DISPID_IHTMLELEMENT3_ONRESIZEEND                          DISPID_EVPROP_ONRESIZEEND
#define DISPID_IHTMLELEMENT3_ONMOVESTART                          DISPID_EVPROP_ONMOVESTART
#define DISPID_IHTMLELEMENT3_ONMOVEEND                            DISPID_EVPROP_ONMOVEEND
#define DISPID_IHTMLELEMENT3_ONMOUSEENTER                         DISPID_EVPROP_ONMOUSEENTER
#define DISPID_IHTMLELEMENT3_ONMOUSELEAVE                         DISPID_EVPROP_ONMOUSELEAVE
#define DISPID_IHTMLELEMENT3_ONACTIVATE                           DISPID_EVPROP_ONACTIVATE
#define DISPID_IHTMLELEMENT3_ONDEACTIVATE                         DISPID_EVPROP_ONDEACTIVATE
#define DISPID_IHTMLELEMENT3_DRAGDROP                             DISPID_ELEMENT+107
#define DISPID_IHTMLELEMENT3_GLYPHMODE                            DISPID_ELEMENT+108

//    DISPIDs for interface IHTMLElement4

#define DISPID_IHTMLELEMENT4_ONMOUSEWHEEL                         DISPID_EVPROP_ONMOUSEWHEEL
#define DISPID_IHTMLELEMENT4_NORMALIZE                            DISPID_ELEMENT+112
#define DISPID_IHTMLELEMENT4_GETATTRIBUTENODE                     DISPID_ELEMENT+109
#define DISPID_IHTMLELEMENT4_SETATTRIBUTENODE                     DISPID_ELEMENT+110
#define DISPID_IHTMLELEMENT4_REMOVEATTRIBUTENODE                  DISPID_ELEMENT+111
#define DISPID_IHTMLELEMENT4_ONBEFOREACTIVATE                     DISPID_EVPROP_ONBEFOREACTIVATE
#define DISPID_IHTMLELEMENT4_ONFOCUSIN                            DISPID_EVPROP_ONFOCUSIN
#define DISPID_IHTMLELEMENT4_ONFOCUSOUT                           DISPID_EVPROP_ONFOCUSOUT

//    DISPIDs for interface IElementSelector

#define DISPID_IELEMENTSELECTOR_QUERYSELECTOR                     DISPID_ELEMENT+114
#define DISPID_IELEMENTSELECTOR_QUERYSELECTORALL                  DISPID_ELEMENT+115

//    DISPIDs for interface IHTMLElementRender

#define DISPID_IHTMLELEMENTRENDER_DRAWTODC                        
#define DISPID_IHTMLELEMENTRENDER_SETDOCUMENTPRINTER              

//    DISPIDs for interface IHTMLUniqueName

#define DISPID_IHTMLUNIQUENAME_UNIQUENUMBER                       DISPID_ELEMENT+54
#define DISPID_IHTMLUNIQUENAME_UNIQUEID                           DISPID_ELEMENT+55

//    DISPIDs for interface IHTMLElement5

#define DISPID_IHTMLELEMENT5_IE8_GETATTRIBUTENODE                 DISPID_IE8_ELEMENT
#define DISPID_IHTMLELEMENT5_IE8_SETATTRIBUTENODE                 DISPID_IE8_ELEMENT+1
#define DISPID_IHTMLELEMENT5_IE8_REMOVEATTRIBUTENODE              DISPID_IE8_ELEMENT+2
#define DISPID_IHTMLELEMENT5_HASATTRIBUTE                         DISPID_IE8_ELEMENT+3
#define DISPID_IHTMLELEMENT5_ROLE                                 DISPID_IE8_ELEMENT+4
#define DISPID_IHTMLELEMENT5_ARIABUSY                             DISPID_IE8_ELEMENT+5
#define DISPID_IHTMLELEMENT5_ARIACHECKED                          DISPID_IE8_ELEMENT+6
#define DISPID_IHTMLELEMENT5_ARIADISABLED                         DISPID_IE8_ELEMENT+7
#define DISPID_IHTMLELEMENT5_ARIAEXPANDED                         DISPID_IE8_ELEMENT+8
#define DISPID_IHTMLELEMENT5_ARIAHASPOPUP                         DISPID_IE8_ELEMENT+9
#define DISPID_IHTMLELEMENT5_ARIAHIDDEN                           DISPID_IE8_ELEMENT+10
#define DISPID_IHTMLELEMENT5_ARIAINVALID                          DISPID_IE8_ELEMENT+11
#define DISPID_IHTMLELEMENT5_ARIAMULTISELECTABLE                  DISPID_IE8_ELEMENT+12
#define DISPID_IHTMLELEMENT5_ARIAPRESSED                          DISPID_IE8_ELEMENT+13
#define DISPID_IHTMLELEMENT5_ARIAREADONLY                         DISPID_IE8_ELEMENT+14
#define DISPID_IHTMLELEMENT5_ARIAREQUIRED                         DISPID_IE8_ELEMENT+15
#define DISPID_IHTMLELEMENT5_ARIASECRET                           DISPID_IE8_ELEMENT+16
#define DISPID_IHTMLELEMENT5_ARIASELECTED                         DISPID_IE8_ELEMENT+17
#define DISPID_IHTMLELEMENT5_IE8_GETATTRIBUTE                     DISPID_IE8_ELEMENT+18
#define DISPID_IHTMLELEMENT5_IE8_SETATTRIBUTE                     DISPID_IE8_ELEMENT+19
#define DISPID_IHTMLELEMENT5_IE8_REMOVEATTRIBUTE                  DISPID_IE8_ELEMENT+20
#define DISPID_IHTMLELEMENT5_IE8_ATTRIBUTES                       DISPID_IE8_ELEMENT+21
#define DISPID_IHTMLELEMENT5_ARIAVALUENOW                         DISPID_IE8_ELEMENT+22
#define DISPID_IHTMLELEMENT5_ARIAPOSINSET                         DISPID_IE8_ELEMENT+23
#define DISPID_IHTMLELEMENT5_ARIASETSIZE                          DISPID_IE8_ELEMENT+24
#define DISPID_IHTMLELEMENT5_ARIALEVEL                            DISPID_IE8_ELEMENT+25
#define DISPID_IHTMLELEMENT5_ARIAVALUEMIN                         DISPID_IE8_ELEMENT+26
#define DISPID_IHTMLELEMENT5_ARIAVALUEMAX                         DISPID_IE8_ELEMENT+27
#define DISPID_IHTMLELEMENT5_ARIACONTROLS                         DISPID_IE8_ELEMENT+28
#define DISPID_IHTMLELEMENT5_ARIADESCRIBEDBY                      DISPID_IE8_ELEMENT+29
#define DISPID_IHTMLELEMENT5_ARIAFLOWTO                           DISPID_IE8_ELEMENT+30
#define DISPID_IHTMLELEMENT5_ARIALABELLEDBY                       DISPID_IE8_ELEMENT+31
#define DISPID_IHTMLELEMENT5_ARIAACTIVEDESCENDANT                 DISPID_IE8_ELEMENT+32
#define DISPID_IHTMLELEMENT5_ARIAOWNS                             DISPID_IE8_ELEMENT+33
#define DISPID_IHTMLELEMENT5_HASATTRIBUTES                        DISPID_IE8_ELEMENT+34
#define DISPID_IHTMLELEMENT5_ARIALIVE                             DISPID_IE8_ELEMENT+35
#define DISPID_IHTMLELEMENT5_ARIARELEVANT                         DISPID_IE8_ELEMENT+36

//    DISPIDs for interface IHTMLElement6

#define DISPID_IHTMLELEMENT6_GETATTRIBUTENS                       DISPID_IE9_ELEMENT+3
#define DISPID_IHTMLELEMENT6_SETATTRIBUTENS                       DISPID_IE9_ELEMENT+4
#define DISPID_IHTMLELEMENT6_REMOVEATTRIBUTENS                    DISPID_IE9_ELEMENT+5
#define DISPID_IHTMLELEMENT6_GETATTRIBUTENODENS                   DISPID_IE9_ELEMENT
#define DISPID_IHTMLELEMENT6_SETATTRIBUTENODENS                   DISPID_IE9_ELEMENT+1
#define DISPID_IHTMLELEMENT6_HASATTRIBUTENS                       DISPID_IE9_ELEMENT+2
#define DISPID_IHTMLELEMENT6_IE9_GETATTRIBUTE                     DISPID_IE9_ELEMENT+10
#define DISPID_IHTMLELEMENT6_IE9_SETATTRIBUTE                     DISPID_IE9_ELEMENT+11
#define DISPID_IHTMLELEMENT6_IE9_REMOVEATTRIBUTE                  DISPID_IE9_ELEMENT+12
#define DISPID_IHTMLELEMENT6_IE9_GETATTRIBUTENODE                 DISPID_IE9_ELEMENT+6
#define DISPID_IHTMLELEMENT6_IE9_SETATTRIBUTENODE                 DISPID_IE9_ELEMENT+7
#define DISPID_IHTMLELEMENT6_IE9_REMOVEATTRIBUTENODE              DISPID_IE9_ELEMENT+8
#define DISPID_IHTMLELEMENT6_IE9_HASATTRIBUTE                     DISPID_IE9_ELEMENT+9
#define DISPID_IHTMLELEMENT6_GETELEMENTSBYTAGNAMENS               DISPID_IE9_ELEMENT+13
#define DISPID_IHTMLELEMENT6_IE9_TAGNAME                          DISPID_IE9_ELEMENT+15
#define DISPID_IHTMLELEMENT6_IE9_NODENAME                         DISPID_IE9_ELEMENT+16
#define DISPID_IHTMLELEMENT6_GETELEMENTSBYCLASSNAME               DISPID_IE9_ELEMENT+17
#define DISPID_IHTMLELEMENT6_MSMATCHESSELECTOR                    DISPID_IE9_ELEMENT+28
#define DISPID_IHTMLELEMENT6_ONABORT                              DISPID_EVPROP_ONABORT
#define DISPID_IHTMLELEMENT6_ONCANPLAY                            DISPID_EVPROP_CANPLAY
#define DISPID_IHTMLELEMENT6_ONCANPLAYTHROUGH                     DISPID_EVPROP_CANPLAYTHROUGH
#define DISPID_IHTMLELEMENT6_ONCHANGE                             DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLELEMENT6_ONDURATIONCHANGE                     DISPID_EVPROP_DURATIONCHANGE
#define DISPID_IHTMLELEMENT6_ONEMPTIED                            DISPID_EVPROP_EMPTIED
#define DISPID_IHTMLELEMENT6_ONENDED                              DISPID_EVPROP_ENDED
#define DISPID_IHTMLELEMENT6_ONERROR                              DISPID_EVPROP_ONERROR
#define DISPID_IHTMLELEMENT6_ONINPUT                              DISPID_EVPROP_INPUT
#define DISPID_IHTMLELEMENT6_ONLOAD                               DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLELEMENT6_ONLOADEDDATA                         DISPID_EVPROP_LOADEDDATA
#define DISPID_IHTMLELEMENT6_ONLOADEDMETADATA                     DISPID_EVPROP_LOADEDMETADATA
#define DISPID_IHTMLELEMENT6_ONLOADSTART                          DISPID_EVPROP_LOADSTART
#define DISPID_IHTMLELEMENT6_ONPAUSE                              DISPID_EVPROP_PAUSE
#define DISPID_IHTMLELEMENT6_ONPLAY                               DISPID_EVPROP_PLAY
#define DISPID_IHTMLELEMENT6_ONPLAYING                            DISPID_EVPROP_PLAYING
#define DISPID_IHTMLELEMENT6_ONPROGRESS                           DISPID_EVPROP_PROGRESS
#define DISPID_IHTMLELEMENT6_ONRATECHANGE                         DISPID_EVPROP_RATECHANGE
#define DISPID_IHTMLELEMENT6_ONRESET                              DISPID_EVPROP_ONRESET
#define DISPID_IHTMLELEMENT6_ONSEEKED                             DISPID_EVPROP_SEEKED
#define DISPID_IHTMLELEMENT6_ONSEEKING                            DISPID_EVPROP_SEEKING
#define DISPID_IHTMLELEMENT6_ONSELECT                             DISPID_EVPROP_ONSELECT
#define DISPID_IHTMLELEMENT6_ONSTALLED                            DISPID_EVPROP_STALLED
#define DISPID_IHTMLELEMENT6_ONSUBMIT                             DISPID_EVPROP_ONSUBMIT
#define DISPID_IHTMLELEMENT6_ONSUSPEND                            DISPID_EVPROP_SUSPEND
#define DISPID_IHTMLELEMENT6_ONTIMEUPDATE                         DISPID_EVPROP_TIMEUPDATE
#define DISPID_IHTMLELEMENT6_ONVOLUMECHANGE                       DISPID_EVPROP_VOLUMECHANGE
#define DISPID_IHTMLELEMENT6_ONWAITING                            DISPID_EVPROP_WAITING
#define DISPID_IHTMLELEMENT6_IE9_HASATTRIBUTES                    DISPID_IE9_ELEMENT+29

//    DISPIDs for interface IHTMLElement7

#define DISPID_IHTMLELEMENT7_ONMSPOINTERDOWN                      DISPID_EVPROP_ONMSPOINTERDOWN
#define DISPID_IHTMLELEMENT7_ONMSPOINTERMOVE                      DISPID_EVPROP_ONMSPOINTERMOVE
#define DISPID_IHTMLELEMENT7_ONMSPOINTERUP                        DISPID_EVPROP_ONMSPOINTERUP
#define DISPID_IHTMLELEMENT7_ONMSPOINTEROVER                      DISPID_EVPROP_ONMSPOINTEROVER
#define DISPID_IHTMLELEMENT7_ONMSPOINTEROUT                       DISPID_EVPROP_ONMSPOINTEROUT
#define DISPID_IHTMLELEMENT7_ONMSPOINTERCANCEL                    DISPID_EVPROP_ONMSPOINTERCANCEL
#define DISPID_IHTMLELEMENT7_ONMSPOINTERHOVER                     DISPID_EVPROP_ONMSPOINTERHOVER
#define DISPID_IHTMLELEMENT7_ONMSLOSTPOINTERCAPTURE               DISPID_EVPROP_ONMSLOSTPOINTERCAPTURE
#define DISPID_IHTMLELEMENT7_ONMSGOTPOINTERCAPTURE                DISPID_EVPROP_ONMSGOTPOINTERCAPTURE
#define DISPID_IHTMLELEMENT7_ONMSGESTURESTART                     DISPID_EVPROP_ONMSGESTURESTART
#define DISPID_IHTMLELEMENT7_ONMSGESTURECHANGE                    DISPID_EVPROP_ONMSGESTURECHANGE
#define DISPID_IHTMLELEMENT7_ONMSGESTUREEND                       DISPID_EVPROP_ONMSGESTUREEND
#define DISPID_IHTMLELEMENT7_ONMSGESTUREHOLD                      DISPID_EVPROP_ONMSGESTUREHOLD
#define DISPID_IHTMLELEMENT7_ONMSGESTURETAP                       DISPID_EVPROP_ONMSGESTURETAP
#define DISPID_IHTMLELEMENT7_ONMSGESTUREDOUBLETAP                 DISPID_EVPROP_ONMSGESTUREDOUBLETAP
#define DISPID_IHTMLELEMENT7_ONMSINERTIASTART                     DISPID_EVPROP_ONMSINERTIASTART
#define DISPID_IHTMLELEMENT7_MSSETPOINTERCAPTURE                  DISPID_IE10_ELEMENT
#define DISPID_IHTMLELEMENT7_MSRELEASEPOINTERCAPTURE              DISPID_IE10_ELEMENT+1
#define DISPID_IHTMLELEMENT7_ONMSTRANSITIONSTART                  DISPID_EVPROP_ONTRANSITIONSTART
#define DISPID_IHTMLELEMENT7_ONMSTRANSITIONEND                    DISPID_EVPROP_ONTRANSITIONEND
#define DISPID_IHTMLELEMENT7_ONMSANIMATIONSTART                   DISPID_EVPROP_ONANIMATIONSTART
#define DISPID_IHTMLELEMENT7_ONMSANIMATIONEND                     DISPID_EVPROP_ONANIMATIONEND
#define DISPID_IHTMLELEMENT7_ONMSANIMATIONITERATION               DISPID_EVPROP_ONANIMATIONITERATION
#define DISPID_IHTMLELEMENT7_ONINVALID                            DISPID_EVPROP_INVALID
#define DISPID_IHTMLELEMENT7_XMSACCELERATORKEY                    DISPID_IE10_ELEMENT+12
#define DISPID_IHTMLELEMENT7_SPELLCHECK                           DISPID_A_SPELLCHECK
#define DISPID_IHTMLELEMENT7_ONMSMANIPULATIONSTATECHANGED         DISPID_EVPROP_ONMSMANIPULATIONSTATECHANGED
#define DISPID_IHTMLELEMENT7_ONCUECHANGE                          DISPID_EVPROP_ONCUECHANGE

//    DISPIDs for interface IHTMLElementAppliedStyles

#define DISPID_IHTMLELEMENTAPPLIEDSTYLES_MSGETRULESAPPLIED        DISPID_ELEMENT+116
#define DISPID_IHTMLELEMENTAPPLIEDSTYLES_MSGETRULESAPPLIEDWITHANCESTOR DISPID_ELEMENT+117

//    DISPIDs for interface IElementTraversal

#define DISPID_IELEMENTTRAVERSAL_FIRSTELEMENTCHILD                DISPID_IE9_ELEMENT+22
#define DISPID_IELEMENTTRAVERSAL_LASTELEMENTCHILD                 DISPID_IE9_ELEMENT+23
#define DISPID_IELEMENTTRAVERSAL_PREVIOUSELEMENTSIBLING           DISPID_IE9_ELEMENT+24
#define DISPID_IELEMENTTRAVERSAL_NEXTELEMENTSIBLING               DISPID_IE9_ELEMENT+25
#define DISPID_IELEMENTTRAVERSAL_CHILDELEMENTCOUNT                DISPID_IE9_ELEMENT+26

//    DISPIDs for interface IHTMLDatabinding

#define DISPID_IHTMLDATABINDING_DATAFLD                           DISPID_ELEMENT+21
#define DISPID_IHTMLDATABINDING_DATASRC                           DISPID_ELEMENT+22
#define DISPID_IHTMLDATABINDING_DATAFORMATAS                      DISPID_ELEMENT+23

//    DISPIDs for event set HTMLElementEvents4

#define DISPID_HTMLELEMENTEVENTS4_ONABORT                         DISPID_EVMETH_ONABORT
#define DISPID_HTMLELEMENTEVENTS4_ONCHANGE                        DISPID_EVMETH_ONCHANGE
#define DISPID_HTMLELEMENTEVENTS4_ONERROR                         DISPID_EVMETH_ONERROR
#define DISPID_HTMLELEMENTEVENTS4_ONLOAD                          DISPID_EVMETH_ONLOAD
#define DISPID_HTMLELEMENTEVENTS4_ONRESET                         DISPID_EVMETH_ONRESET
#define DISPID_HTMLELEMENTEVENTS4_ONSELECT                        DISPID_EVMETH_ONSELECT
#define DISPID_HTMLELEMENTEVENTS4_ONSUBMIT                        DISPID_EVMETH_ONSUBMIT
#define DISPID_HTMLELEMENTEVENTS4_ONMSCONTENTZOOM                 DISPID_EVPROP_ONMSCONTENTZOOM

//    DISPIDs for event set HTMLElementEvents3

#define DISPID_HTMLELEMENTEVENTS3_ONONLINE                        DISPID_EVMETH_ONONLINE
#define DISPID_HTMLELEMENTEVENTS3_ONOFFLINE                       DISPID_EVMETH_ONOFFLINE

//    DISPIDs for event set HTMLElementEvents2

#define DISPID_HTMLELEMENTEVENTS2_ONHELP                          DISPID_EVMETH_ONHELP
#define DISPID_HTMLELEMENTEVENTS2_ONCLICK                         DISPID_EVMETH_ONCLICK
#define DISPID_HTMLELEMENTEVENTS2_ONDBLCLICK                      DISPID_EVMETH_ONDBLCLICK
#define DISPID_HTMLELEMENTEVENTS2_ONKEYPRESS                      DISPID_EVMETH_ONKEYPRESS
#define DISPID_HTMLELEMENTEVENTS2_ONKEYDOWN                       DISPID_EVMETH_ONKEYDOWN
#define DISPID_HTMLELEMENTEVENTS2_ONKEYUP                         DISPID_EVMETH_ONKEYUP
#define DISPID_HTMLELEMENTEVENTS2_ONMOUSEOUT                      DISPID_EVMETH_ONMOUSEOUT
#define DISPID_HTMLELEMENTEVENTS2_ONMOUSEOVER                     DISPID_EVMETH_ONMOUSEOVER
#define DISPID_HTMLELEMENTEVENTS2_ONMOUSEMOVE                     DISPID_EVMETH_ONMOUSEMOVE
#define DISPID_HTMLELEMENTEVENTS2_ONMOUSEDOWN                     DISPID_EVMETH_ONMOUSEDOWN
#define DISPID_HTMLELEMENTEVENTS2_ONMOUSEUP                       DISPID_EVMETH_ONMOUSEUP
#define DISPID_HTMLELEMENTEVENTS2_ONSELECTSTART                   DISPID_EVMETH_ONSELECTSTART
#define DISPID_HTMLELEMENTEVENTS2_ONFILTERCHANGE                  DISPID_EVMETH_ONFILTER
#define DISPID_HTMLELEMENTEVENTS2_ONDRAGSTART                     DISPID_EVMETH_ONDRAGSTART
#define DISPID_HTMLELEMENTEVENTS2_ONBEFOREUPDATE                  DISPID_EVMETH_ONBEFOREUPDATE
#define DISPID_HTMLELEMENTEVENTS2_ONAFTERUPDATE                   DISPID_EVMETH_ONAFTERUPDATE
#define DISPID_HTMLELEMENTEVENTS2_ONERRORUPDATE                   DISPID_EVMETH_ONERRORUPDATE
#define DISPID_HTMLELEMENTEVENTS2_ONROWEXIT                       DISPID_EVMETH_ONROWEXIT
#define DISPID_HTMLELEMENTEVENTS2_ONROWENTER                      DISPID_EVMETH_ONROWENTER
#define DISPID_HTMLELEMENTEVENTS2_ONDATASETCHANGED                DISPID_EVMETH_ONDATASETCHANGED
#define DISPID_HTMLELEMENTEVENTS2_ONDATAAVAILABLE                 DISPID_EVMETH_ONDATAAVAILABLE
#define DISPID_HTMLELEMENTEVENTS2_ONDATASETCOMPLETE               DISPID_EVMETH_ONDATASETCOMPLETE
#define DISPID_HTMLELEMENTEVENTS2_ONLOSECAPTURE                   DISPID_EVMETH_ONLOSECAPTURE
#define DISPID_HTMLELEMENTEVENTS2_ONPROPERTYCHANGE                DISPID_EVMETH_ONPROPERTYCHANGE
#define DISPID_HTMLELEMENTEVENTS2_ONSCROLL                        DISPID_EVMETH_ONSCROLL
#define DISPID_HTMLELEMENTEVENTS2_ONFOCUS                         DISPID_EVMETH_ONFOCUS
#define DISPID_HTMLELEMENTEVENTS2_ONBLUR                          DISPID_EVMETH_ONBLUR
#define DISPID_HTMLELEMENTEVENTS2_ONRESIZE                        DISPID_EVMETH_ONRESIZE
#define DISPID_HTMLELEMENTEVENTS2_ONDRAG                          DISPID_EVMETH_ONDRAG
#define DISPID_HTMLELEMENTEVENTS2_ONDRAGEND                       DISPID_EVMETH_ONDRAGEND
#define DISPID_HTMLELEMENTEVENTS2_ONDRAGENTER                     DISPID_EVMETH_ONDRAGENTER
#define DISPID_HTMLELEMENTEVENTS2_ONDRAGOVER                      DISPID_EVMETH_ONDRAGOVER
#define DISPID_HTMLELEMENTEVENTS2_ONDRAGLEAVE                     DISPID_EVMETH_ONDRAGLEAVE
#define DISPID_HTMLELEMENTEVENTS2_ONDROP                          DISPID_EVMETH_ONDROP
#define DISPID_HTMLELEMENTEVENTS2_ONBEFORECUT                     DISPID_EVMETH_ONBEFORECUT
#define DISPID_HTMLELEMENTEVENTS2_ONCUT                           DISPID_EVMETH_ONCUT
#define DISPID_HTMLELEMENTEVENTS2_ONBEFORECOPY                    DISPID_EVMETH_ONBEFORECOPY
#define DISPID_HTMLELEMENTEVENTS2_ONCOPY                          DISPID_EVMETH_ONCOPY
#define DISPID_HTMLELEMENTEVENTS2_ONBEFOREPASTE                   DISPID_EVMETH_ONBEFOREPASTE
#define DISPID_HTMLELEMENTEVENTS2_ONPASTE                         DISPID_EVMETH_ONPASTE
#define DISPID_HTMLELEMENTEVENTS2_ONCONTEXTMENU                   DISPID_EVMETH_ONCONTEXTMENU
#define DISPID_HTMLELEMENTEVENTS2_ONROWSDELETE                    DISPID_EVMETH_ONROWSDELETE
#define DISPID_HTMLELEMENTEVENTS2_ONROWSINSERTED                  DISPID_EVMETH_ONROWSINSERTED
#define DISPID_HTMLELEMENTEVENTS2_ONCELLCHANGE                    DISPID_EVMETH_ONCELLCHANGE
#define DISPID_HTMLELEMENTEVENTS2_ONREADYSTATECHANGE              DISPID_EVMETH_ONREADYSTATECHANGE
#define DISPID_HTMLELEMENTEVENTS2_ONLAYOUTCOMPLETE                DISPID_EVMETH_ONLAYOUTCOMPLETE
#define DISPID_HTMLELEMENTEVENTS2_ONPAGE                          DISPID_EVMETH_ONPAGE
#define DISPID_HTMLELEMENTEVENTS2_ONMOUSEENTER                    DISPID_EVMETH_ONMOUSEENTER
#define DISPID_HTMLELEMENTEVENTS2_ONMOUSELEAVE                    DISPID_EVMETH_ONMOUSELEAVE
#define DISPID_HTMLELEMENTEVENTS2_ONACTIVATE                      DISPID_EVMETH_ONACTIVATE
#define DISPID_HTMLELEMENTEVENTS2_ONDEACTIVATE                    DISPID_EVMETH_ONDEACTIVATE
#define DISPID_HTMLELEMENTEVENTS2_ONBEFOREDEACTIVATE              DISPID_EVMETH_ONBEFOREDEACTIVATE
#define DISPID_HTMLELEMENTEVENTS2_ONBEFOREACTIVATE                DISPID_EVMETH_ONBEFOREACTIVATE
#define DISPID_HTMLELEMENTEVENTS2_ONFOCUSIN                       DISPID_EVMETH_ONFOCUSIN
#define DISPID_HTMLELEMENTEVENTS2_ONFOCUSOUT                      DISPID_EVMETH_ONFOCUSOUT
#define DISPID_HTMLELEMENTEVENTS2_ONMOVE                          DISPID_EVMETH_ONMOVE
#define DISPID_HTMLELEMENTEVENTS2_ONCONTROLSELECT                 DISPID_EVMETH_ONCONTROLSELECT
#define DISPID_HTMLELEMENTEVENTS2_ONMOVESTART                     DISPID_EVMETH_ONMOVESTART
#define DISPID_HTMLELEMENTEVENTS2_ONMOVEEND                       DISPID_EVMETH_ONMOVEEND
#define DISPID_HTMLELEMENTEVENTS2_ONRESIZESTART                   DISPID_EVMETH_ONRESIZESTART
#define DISPID_HTMLELEMENTEVENTS2_ONRESIZEEND                     DISPID_EVMETH_ONRESIZEEND
#define DISPID_HTMLELEMENTEVENTS2_ONMOUSEWHEEL                    DISPID_EVMETH_ONMOUSEWHEEL

//    DISPIDs for event set HTMLElementEvents

#define DISPID_HTMLELEMENTEVENTS_ONHELP                           DISPID_EVMETH_ONHELP
#define DISPID_HTMLELEMENTEVENTS_ONCLICK                          DISPID_EVMETH_ONCLICK
#define DISPID_HTMLELEMENTEVENTS_ONDBLCLICK                       DISPID_EVMETH_ONDBLCLICK
#define DISPID_HTMLELEMENTEVENTS_ONKEYPRESS                       DISPID_EVMETH_ONKEYPRESS
#define DISPID_HTMLELEMENTEVENTS_ONKEYDOWN                        DISPID_EVMETH_ONKEYDOWN
#define DISPID_HTMLELEMENTEVENTS_ONKEYUP                          DISPID_EVMETH_ONKEYUP
#define DISPID_HTMLELEMENTEVENTS_ONMOUSEOUT                       DISPID_EVMETH_ONMOUSEOUT
#define DISPID_HTMLELEMENTEVENTS_ONMOUSEOVER                      DISPID_EVMETH_ONMOUSEOVER
#define DISPID_HTMLELEMENTEVENTS_ONMOUSEMOVE                      DISPID_EVMETH_ONMOUSEMOVE
#define DISPID_HTMLELEMENTEVENTS_ONMOUSEDOWN                      DISPID_EVMETH_ONMOUSEDOWN
#define DISPID_HTMLELEMENTEVENTS_ONMOUSEUP                        DISPID_EVMETH_ONMOUSEUP
#define DISPID_HTMLELEMENTEVENTS_ONSELECTSTART                    DISPID_EVMETH_ONSELECTSTART
#define DISPID_HTMLELEMENTEVENTS_ONFILTERCHANGE                   DISPID_EVMETH_ONFILTER
#define DISPID_HTMLELEMENTEVENTS_ONDRAGSTART                      DISPID_EVMETH_ONDRAGSTART
#define DISPID_HTMLELEMENTEVENTS_ONBEFOREUPDATE                   DISPID_EVMETH_ONBEFOREUPDATE
#define DISPID_HTMLELEMENTEVENTS_ONAFTERUPDATE                    DISPID_EVMETH_ONAFTERUPDATE
#define DISPID_HTMLELEMENTEVENTS_ONERRORUPDATE                    DISPID_EVMETH_ONERRORUPDATE
#define DISPID_HTMLELEMENTEVENTS_ONROWEXIT                        DISPID_EVMETH_ONROWEXIT
#define DISPID_HTMLELEMENTEVENTS_ONROWENTER                       DISPID_EVMETH_ONROWENTER
#define DISPID_HTMLELEMENTEVENTS_ONDATASETCHANGED                 DISPID_EVMETH_ONDATASETCHANGED
#define DISPID_HTMLELEMENTEVENTS_ONDATAAVAILABLE                  DISPID_EVMETH_ONDATAAVAILABLE
#define DISPID_HTMLELEMENTEVENTS_ONDATASETCOMPLETE                DISPID_EVMETH_ONDATASETCOMPLETE
#define DISPID_HTMLELEMENTEVENTS_ONLOSECAPTURE                    DISPID_EVMETH_ONLOSECAPTURE
#define DISPID_HTMLELEMENTEVENTS_ONPROPERTYCHANGE                 DISPID_EVMETH_ONPROPERTYCHANGE
#define DISPID_HTMLELEMENTEVENTS_ONSCROLL                         DISPID_EVMETH_ONSCROLL
#define DISPID_HTMLELEMENTEVENTS_ONFOCUS                          DISPID_EVMETH_ONFOCUS
#define DISPID_HTMLELEMENTEVENTS_ONBLUR                           DISPID_EVMETH_ONBLUR
#define DISPID_HTMLELEMENTEVENTS_ONRESIZE                         DISPID_EVMETH_ONRESIZE
#define DISPID_HTMLELEMENTEVENTS_ONDRAG                           DISPID_EVMETH_ONDRAG
#define DISPID_HTMLELEMENTEVENTS_ONDRAGEND                        DISPID_EVMETH_ONDRAGEND
#define DISPID_HTMLELEMENTEVENTS_ONDRAGENTER                      DISPID_EVMETH_ONDRAGENTER
#define DISPID_HTMLELEMENTEVENTS_ONDRAGOVER                       DISPID_EVMETH_ONDRAGOVER
#define DISPID_HTMLELEMENTEVENTS_ONDRAGLEAVE                      DISPID_EVMETH_ONDRAGLEAVE
#define DISPID_HTMLELEMENTEVENTS_ONDROP                           DISPID_EVMETH_ONDROP
#define DISPID_HTMLELEMENTEVENTS_ONBEFORECUT                      DISPID_EVMETH_ONBEFORECUT
#define DISPID_HTMLELEMENTEVENTS_ONCUT                            DISPID_EVMETH_ONCUT
#define DISPID_HTMLELEMENTEVENTS_ONBEFORECOPY                     DISPID_EVMETH_ONBEFORECOPY
#define DISPID_HTMLELEMENTEVENTS_ONCOPY                           DISPID_EVMETH_ONCOPY
#define DISPID_HTMLELEMENTEVENTS_ONBEFOREPASTE                    DISPID_EVMETH_ONBEFOREPASTE
#define DISPID_HTMLELEMENTEVENTS_ONPASTE                          DISPID_EVMETH_ONPASTE
#define DISPID_HTMLELEMENTEVENTS_ONCONTEXTMENU                    DISPID_EVMETH_ONCONTEXTMENU
#define DISPID_HTMLELEMENTEVENTS_ONROWSDELETE                     DISPID_EVMETH_ONROWSDELETE
#define DISPID_HTMLELEMENTEVENTS_ONROWSINSERTED                   DISPID_EVMETH_ONROWSINSERTED
#define DISPID_HTMLELEMENTEVENTS_ONCELLCHANGE                     DISPID_EVMETH_ONCELLCHANGE
#define DISPID_HTMLELEMENTEVENTS_ONREADYSTATECHANGE               DISPID_EVMETH_ONREADYSTATECHANGE
#define DISPID_HTMLELEMENTEVENTS_ONBEFOREEDITFOCUS                DISPID_EVMETH_ONBEFOREEDITFOCUS
#define DISPID_HTMLELEMENTEVENTS_ONLAYOUTCOMPLETE                 DISPID_EVMETH_ONLAYOUTCOMPLETE
#define DISPID_HTMLELEMENTEVENTS_ONPAGE                           DISPID_EVMETH_ONPAGE
#define DISPID_HTMLELEMENTEVENTS_ONBEFOREDEACTIVATE               DISPID_EVMETH_ONBEFOREDEACTIVATE
#define DISPID_HTMLELEMENTEVENTS_ONBEFOREACTIVATE                 DISPID_EVMETH_ONBEFOREACTIVATE
#define DISPID_HTMLELEMENTEVENTS_ONMOVE                           DISPID_EVMETH_ONMOVE
#define DISPID_HTMLELEMENTEVENTS_ONCONTROLSELECT                  DISPID_EVMETH_ONCONTROLSELECT
#define DISPID_HTMLELEMENTEVENTS_ONMOVESTART                      DISPID_EVMETH_ONMOVESTART
#define DISPID_HTMLELEMENTEVENTS_ONMOVEEND                        DISPID_EVMETH_ONMOVEEND
#define DISPID_HTMLELEMENTEVENTS_ONRESIZESTART                    DISPID_EVMETH_ONRESIZESTART
#define DISPID_HTMLELEMENTEVENTS_ONRESIZEEND                      DISPID_EVMETH_ONRESIZEEND
#define DISPID_HTMLELEMENTEVENTS_ONMOUSEENTER                     DISPID_EVMETH_ONMOUSEENTER
#define DISPID_HTMLELEMENTEVENTS_ONMOUSELEAVE                     DISPID_EVMETH_ONMOUSELEAVE
#define DISPID_HTMLELEMENTEVENTS_ONMOUSEWHEEL                     DISPID_EVMETH_ONMOUSEWHEEL
#define DISPID_HTMLELEMENTEVENTS_ONACTIVATE                       DISPID_EVMETH_ONACTIVATE
#define DISPID_HTMLELEMENTEVENTS_ONDEACTIVATE                     DISPID_EVMETH_ONDEACTIVATE
#define DISPID_HTMLELEMENTEVENTS_ONFOCUSIN                        DISPID_EVMETH_ONFOCUSIN
#define DISPID_HTMLELEMENTEVENTS_ONFOCUSOUT                       DISPID_EVMETH_ONFOCUSOUT

//    DISPIDs for interface IHTMLElementDefaults

#define DISPID_IHTMLELEMENTDEFAULTS_STYLE                         DISPID_DEFAULTS+1
#define DISPID_IHTMLELEMENTDEFAULTS_TABSTOP                       DISPID_DEFAULTS+2
#define DISPID_IHTMLELEMENTDEFAULTS_VIEWINHERITSTYLE              DISPID_A_VIEWINHERITSTYLE
#define DISPID_IHTMLELEMENTDEFAULTS_VIEWMASTERTAB                 DISPID_DEFAULTS+6
#define DISPID_IHTMLELEMENTDEFAULTS_SCROLLSEGMENTX                DISPID_DEFAULTS+3
#define DISPID_IHTMLELEMENTDEFAULTS_SCROLLSEGMENTY                DISPID_DEFAULTS+4
#define DISPID_IHTMLELEMENTDEFAULTS_ISMULTILINE                   DISPID_DEFAULTS+8
#define DISPID_IHTMLELEMENTDEFAULTS_CONTENTEDITABLE               DISPID_A_EDITABLE
#define DISPID_IHTMLELEMENTDEFAULTS_CANHAVEHTML                   DISPID_DEFAULTS+9
#define DISPID_IHTMLELEMENTDEFAULTS_VIEWLINK                      DISPID_DEFAULTS+11
#define DISPID_IHTMLELEMENTDEFAULTS_FROZEN                        DISPID_A_FROZEN

//    DISPIDs for interface IHTCDefaultDispatch

#define DISPID_IHTCDEFAULTDISPATCH_ELEMENT                        DISPID_A_HTCDD_ELEMENT
#define DISPID_IHTCDEFAULTDISPATCH_CREATEEVENTOBJECT              DISPID_A_HTCDD_CREATEEVENTOBJECT
#define DISPID_IHTCDEFAULTDISPATCH_DEFAULTS                       DISPID_A_HTCDD_DEFAULTS
#define DISPID_IHTCDEFAULTDISPATCH_DOCUMENT                       DISPID_A_DOCFRAGMENT

//    DISPIDs for interface IHTCPropertyBehavior

#define DISPID_IHTCPROPERTYBEHAVIOR_FIRECHANGE                    DISPID_HTMLOBJECT+0
#define DISPID_IHTCPROPERTYBEHAVIOR_VALUE                         DISPID_A_HTCDISPATCHITEM_VALUE

//    DISPIDs for interface IHTCEventBehavior

#define DISPID_IHTCEVENTBEHAVIOR_FIRE                             DISPID_HTMLOBJECT+0

//    DISPIDs for interface IHTCAttachBehavior

#define DISPID_IHTCATTACHBEHAVIOR_FIREEVENT                       DISPID_VALUE
#define DISPID_IHTCATTACHBEHAVIOR_DETACHEVENT                     DISPID_HTMLOBJECT+0

//    DISPIDs for interface IHTCAttachBehavior2

#define DISPID_IHTCATTACHBEHAVIOR2_FIREEVENT                      DISPID_VALUE

//    DISPIDs for interface IHTCDescBehavior

#define DISPID_IHTCDESCBEHAVIOR_URN                               DISPID_HTMLOBJECT+0
#define DISPID_IHTCDESCBEHAVIOR_NAME                              DISPID_HTMLOBJECT+1

//    DISPIDs for interface IHTMLUrnCollection

#define DISPID_IHTMLURNCOLLECTION_LENGTH                          DISPID_URN_COLL+1
#define DISPID_IHTMLURNCOLLECTION_ITEM                            DISPID_VALUE

//    DISPIDs for interface IHTMLGenericElement

#define DISPID_IHTMLGENERICELEMENT_RECORDSET                      DISPID_GENERIC+1
#define DISPID_IHTMLGENERICELEMENT_NAMEDRECORDSET                 DISPID_GENERIC+2

//    DISPIDs for interface IHTMLStyleSheetRule

#define DISPID_IHTMLSTYLESHEETRULE_SELECTORTEXT                   DISPID_STYLERULE+1
#define DISPID_IHTMLSTYLESHEETRULE_STYLE                          STDPROPID_XOBJ_STYLE
#define DISPID_IHTMLSTYLESHEETRULE_READONLY                       DISPID_STYLERULE+2

//    DISPIDs for interface IHTMLStyleSheetRuleApplied

#define DISPID_IHTMLSTYLESHEETRULEAPPLIED_MSSPECIFICITY           DISPID_STYLERULE+3
#define DISPID_IHTMLSTYLESHEETRULEAPPLIED_MSGETSPECIFICITY        DISPID_STYLERULE+4

//    DISPIDs for interface IHTMLStyleSheetRule2

#define DISPID_IHTMLSTYLESHEETRULE2_IE9_SELECTORTEXT              DISPID_STYLERULE+5

//    DISPIDs for interface IHTMLStyleSheetRulesCollection

#define DISPID_IHTMLSTYLESHEETRULESCOLLECTION_LENGTH              DISPID_STYLERULES_COL+1
#define DISPID_IHTMLSTYLESHEETRULESCOLLECTION_ITEM                DISPID_VALUE

//    DISPIDs for interface IHTMLStyleSheetRulesCollection2

#define DISPID_IHTMLSTYLESHEETRULESCOLLECTION2_IE9_LENGTH         DISPID_STYLERULES_COL+3
#define DISPID_IHTMLSTYLESHEETRULESCOLLECTION2_IE9_ITEM           DISPID_STYLERULES_COL+2

//    DISPIDs for interface IHTMLStyleSheetPage

#define DISPID_IHTMLSTYLESHEETPAGE_SELECTOR                       DISPID_STYLEPAGE+1
#define DISPID_IHTMLSTYLESHEETPAGE_PSEUDOCLASS                    DISPID_STYLEPAGE+2

//    DISPIDs for interface IHTMLStyleSheetPage2

#define DISPID_IHTMLSTYLESHEETPAGE2_SELECTORTEXT                  DISPID_STYLEPAGE+3
#define DISPID_IHTMLSTYLESHEETPAGE2_STYLE                         STDPROPID_XOBJ_STYLE

//    DISPIDs for interface IHTMLStyleSheetPagesCollection

#define DISPID_IHTMLSTYLESHEETPAGESCOLLECTION_LENGTH              DISPID_STYLEPAGES_COL+1
#define DISPID_IHTMLSTYLESHEETPAGESCOLLECTION_ITEM                DISPID_VALUE

//    DISPIDs for interface IHTMLStyleSheet

#define DISPID_IHTMLSTYLESHEET_TITLE                              DISPID_STYLESHEET+1
#define DISPID_IHTMLSTYLESHEET_PARENTSTYLESHEET                   DISPID_STYLESHEET+2
#define DISPID_IHTMLSTYLESHEET_OWNINGELEMENT                      DISPID_STYLESHEET+3
#define DISPID_IHTMLSTYLESHEET_DISABLED                           STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLSTYLESHEET_READONLY                           DISPID_STYLESHEET+4
#define DISPID_IHTMLSTYLESHEET_IMPORTS                            DISPID_STYLESHEET+5
#define DISPID_IHTMLSTYLESHEET_HREF                               DISPID_STYLESHEET+6
#define DISPID_IHTMLSTYLESHEET_TYPE                               DISPID_STYLESHEET+7
#define DISPID_IHTMLSTYLESHEET_ID                                 DISPID_STYLESHEET+8
#define DISPID_IHTMLSTYLESHEET_ADDIMPORT                          DISPID_STYLESHEET+9
#define DISPID_IHTMLSTYLESHEET_ADDRULE                            DISPID_STYLESHEET+10
#define DISPID_IHTMLSTYLESHEET_REMOVEIMPORT                       DISPID_STYLESHEET+11
#define DISPID_IHTMLSTYLESHEET_REMOVERULE                         DISPID_STYLESHEET+12
#define DISPID_IHTMLSTYLESHEET_MEDIA                              DISPID_STYLESHEET+13
#define DISPID_IHTMLSTYLESHEET_CSSTEXT                            DISPID_STYLESHEET+14
#define DISPID_IHTMLSTYLESHEET_RULES                              DISPID_STYLESHEET+15

//    DISPIDs for interface IHTMLStyleSheet2

#define DISPID_IHTMLSTYLESHEET2_PAGES                             DISPID_STYLESHEET+16
#define DISPID_IHTMLSTYLESHEET2_ADDPAGERULE                       DISPID_STYLESHEET+17

//    DISPIDs for interface IHTMLStyleSheet3

#define DISPID_IHTMLSTYLESHEET3_IE8_HREF                          DISPID_IE8_STYLE
#define DISPID_IHTMLSTYLESHEET3_ISALTERNATE                       DISPID_IE8_STYLE+1
#define DISPID_IHTMLSTYLESHEET3_ISPREFALTERNATE                   DISPID_IE8_STYLE+2

//    DISPIDs for interface IHTMLStyleSheet4

#define DISPID_IHTMLSTYLESHEET4_IE9_TYPE                          DISPID_IE8_STYLE+3
#define DISPID_IHTMLSTYLESHEET4_IE9_HREF                          DISPID_IE8_STYLE+4
#define DISPID_IHTMLSTYLESHEET4_IE9_TITLE                         DISPID_IE8_STYLE+5
#define DISPID_IHTMLSTYLESHEET4_OWNERNODE                         DISPID_IE8_STYLE+6
#define DISPID_IHTMLSTYLESHEET4_OWNERRULE                         DISPID_IE8_STYLE+7
#define DISPID_IHTMLSTYLESHEET4_CSSRULES                          DISPID_IE8_STYLE+8
#define DISPID_IHTMLSTYLESHEET4_IE9_MEDIA                         DISPID_IE8_STYLE+9
#define DISPID_IHTMLSTYLESHEET4_INSERTRULE                        DISPID_IE8_STYLE+10
#define DISPID_IHTMLSTYLESHEET4_DELETERULE                        DISPID_IE8_STYLE+11

//    DISPIDs for interface IHTMLStyleSheetsCollection

#define DISPID_IHTMLSTYLESHEETSCOLLECTION_LENGTH                  DISPID_STYLESHEETS_COL+1
#define DISPID_IHTMLSTYLESHEETSCOLLECTION__NEWENUM                DISPID_NEWENUM
#define DISPID_IHTMLSTYLESHEETSCOLLECTION_ITEM                    DISPID_VALUE

//    DISPIDs for interface IHTMLStyleSheetsCollection2

#define DISPID_IHTMLSTYLESHEETSCOLLECTION2_IE9_ITEM               DISPID_STYLESHEETS_COL+2

//    DISPIDs for interface IHTMLLinkElement

#define DISPID_IHTMLLINKELEMENT_HREF                              DISPID_HEDELEMS+5
#define DISPID_IHTMLLINKELEMENT_REL                               DISPID_HEDELEMS+6
#define DISPID_IHTMLLINKELEMENT_REV                               DISPID_HEDELEMS+7
#define DISPID_IHTMLLINKELEMENT_TYPE                              DISPID_HEDELEMS+8
#define DISPID_IHTMLLINKELEMENT_READYSTATE                        DISPID_A_READYSTATE
#define DISPID_IHTMLLINKELEMENT_ONREADYSTATECHANGE                DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLLINKELEMENT_ONLOAD                            DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLLINKELEMENT_ONERROR                           DISPID_EVPROP_ONERROR
#define DISPID_IHTMLLINKELEMENT_STYLESHEET                        DISPID_HEDELEMS+14
#define DISPID_IHTMLLINKELEMENT_DISABLED                          STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLLINKELEMENT_MEDIA                             DISPID_HEDELEMS+16

//    DISPIDs for interface IHTMLLinkElement2

#define DISPID_IHTMLLINKELEMENT2_TARGET                           DISPID_HEDELEMS+17

//    DISPIDs for interface IHTMLLinkElement3

#define DISPID_IHTMLLINKELEMENT3_CHARSET                          DISPID_HEDELEMS+18
#define DISPID_IHTMLLINKELEMENT3_HREFLANG                         DISPID_HEDELEMS+19

//    DISPIDs for interface IHTMLLinkElement4

#define DISPID_IHTMLLINKELEMENT4_IE8_HREF                         DISPID_IE8_LINK

//    DISPIDs for interface IHTMLLinkElement5

#define DISPID_IHTMLLINKELEMENT5_SHEET                            DISPID_HEDELEMS+20

//    DISPIDs for event set HTMLLinkElementEvents2

#define DISPID_HTMLLINKELEMENTEVENTS2_ONLOAD                      DISPID_EVMETH_ONLOAD
#define DISPID_HTMLLINKELEMENTEVENTS2_ONERROR                     DISPID_EVMETH_ONERROR

//    DISPIDs for event set HTMLLinkElementEvents

#define DISPID_HTMLLINKELEMENTEVENTS_ONLOAD                       DISPID_EVMETH_ONLOAD
#define DISPID_HTMLLINKELEMENTEVENTS_ONERROR                      DISPID_EVMETH_ONERROR

//    DISPIDs for interface IHTMLTxtRange

#define DISPID_IHTMLTXTRANGE_HTMLTEXT                             DISPID_RANGE+3
#define DISPID_IHTMLTXTRANGE_TEXT                                 DISPID_RANGE+4
#define DISPID_IHTMLTXTRANGE_PARENTELEMENT                        DISPID_RANGE+6
#define DISPID_IHTMLTXTRANGE_DUPLICATE                            DISPID_RANGE+8
#define DISPID_IHTMLTXTRANGE_INRANGE                              DISPID_RANGE+10
#define DISPID_IHTMLTXTRANGE_ISEQUAL                              DISPID_RANGE+11
#define DISPID_IHTMLTXTRANGE_SCROLLINTOVIEW                       DISPID_RANGE+12
#define DISPID_IHTMLTXTRANGE_COLLAPSE                             DISPID_RANGE+13
#define DISPID_IHTMLTXTRANGE_EXPAND                               DISPID_RANGE+14
#define DISPID_IHTMLTXTRANGE_MOVE                                 DISPID_RANGE+15
#define DISPID_IHTMLTXTRANGE_MOVESTART                            DISPID_RANGE+16
#define DISPID_IHTMLTXTRANGE_MOVEEND                              DISPID_RANGE+17
#define DISPID_IHTMLTXTRANGE_SELECT                               DISPID_RANGE+24
#define DISPID_IHTMLTXTRANGE_PASTEHTML                            DISPID_RANGE+26
#define DISPID_IHTMLTXTRANGE_MOVETOELEMENTTEXT                    DISPID_RANGE+1
#define DISPID_IHTMLTXTRANGE_SETENDPOINT                          DISPID_RANGE+25
#define DISPID_IHTMLTXTRANGE_COMPAREENDPOINTS                     DISPID_RANGE+18
#define DISPID_IHTMLTXTRANGE_FINDTEXT                             DISPID_RANGE+19
#define DISPID_IHTMLTXTRANGE_MOVETOPOINT                          DISPID_RANGE+20
#define DISPID_IHTMLTXTRANGE_GETBOOKMARK                          DISPID_RANGE+21
#define DISPID_IHTMLTXTRANGE_MOVETOBOOKMARK                       DISPID_RANGE+9
#define DISPID_IHTMLTXTRANGE_QUERYCOMMANDSUPPORTED                DISPID_RANGE+27
#define DISPID_IHTMLTXTRANGE_QUERYCOMMANDENABLED                  DISPID_RANGE+28
#define DISPID_IHTMLTXTRANGE_QUERYCOMMANDSTATE                    DISPID_RANGE+29
#define DISPID_IHTMLTXTRANGE_QUERYCOMMANDINDETERM                 DISPID_RANGE+30
#define DISPID_IHTMLTXTRANGE_QUERYCOMMANDTEXT                     DISPID_RANGE+31
#define DISPID_IHTMLTXTRANGE_QUERYCOMMANDVALUE                    DISPID_RANGE+32
#define DISPID_IHTMLTXTRANGE_EXECCOMMAND                          DISPID_RANGE+33
#define DISPID_IHTMLTXTRANGE_EXECCOMMANDSHOWHELP                  DISPID_RANGE+34

//    DISPIDs for interface IHTMLTextRangeMetrics

#define DISPID_IHTMLTEXTRANGEMETRICS_OFFSETTOP                    DISPID_RANGE+35
#define DISPID_IHTMLTEXTRANGEMETRICS_OFFSETLEFT                   DISPID_RANGE+36
#define DISPID_IHTMLTEXTRANGEMETRICS_BOUNDINGTOP                  DISPID_RANGE+37
#define DISPID_IHTMLTEXTRANGEMETRICS_BOUNDINGLEFT                 DISPID_RANGE+38
#define DISPID_IHTMLTEXTRANGEMETRICS_BOUNDINGWIDTH                DISPID_RANGE+39
#define DISPID_IHTMLTEXTRANGEMETRICS_BOUNDINGHEIGHT               DISPID_RANGE+40

//    DISPIDs for interface IHTMLTextRangeMetrics2

#define DISPID_IHTMLTEXTRANGEMETRICS2_GETCLIENTRECTS              DISPID_RANGE+41
#define DISPID_IHTMLTEXTRANGEMETRICS2_GETBOUNDINGCLIENTRECT       DISPID_RANGE+42

//    DISPIDs for interface IHTMLTxtRangeCollection

#define DISPID_IHTMLTXTRANGECOLLECTION_LENGTH                     DISPID_COLLECTION
#define DISPID_IHTMLTXTRANGECOLLECTION__NEWENUM                   DISPID_NEWENUM
#define DISPID_IHTMLTXTRANGECOLLECTION_ITEM                       DISPID_VALUE

//    DISPIDs for interface IHTMLDOMRange

#define DISPID_IHTMLDOMRANGE_STARTCONTAINER                       DISPID_DOMRANGE+1
#define DISPID_IHTMLDOMRANGE_STARTOFFSET                          DISPID_DOMRANGE+2
#define DISPID_IHTMLDOMRANGE_ENDCONTAINER                         DISPID_DOMRANGE+3
#define DISPID_IHTMLDOMRANGE_ENDOFFSET                            DISPID_DOMRANGE+4
#define DISPID_IHTMLDOMRANGE_COLLAPSED                            DISPID_DOMRANGE+5
#define DISPID_IHTMLDOMRANGE_COMMONANCESTORCONTAINER              DISPID_DOMRANGE+6
#define DISPID_IHTMLDOMRANGE_SETSTART                             DISPID_DOMRANGE+7
#define DISPID_IHTMLDOMRANGE_SETEND                               DISPID_DOMRANGE+8
#define DISPID_IHTMLDOMRANGE_SETSTARTBEFORE                       DISPID_DOMRANGE+9
#define DISPID_IHTMLDOMRANGE_SETSTARTAFTER                        DISPID_DOMRANGE+10
#define DISPID_IHTMLDOMRANGE_SETENDBEFORE                         DISPID_DOMRANGE+11
#define DISPID_IHTMLDOMRANGE_SETENDAFTER                          DISPID_DOMRANGE+12
#define DISPID_IHTMLDOMRANGE_COLLAPSE                             DISPID_DOMRANGE+13
#define DISPID_IHTMLDOMRANGE_SELECTNODE                           DISPID_DOMRANGE+14
#define DISPID_IHTMLDOMRANGE_SELECTNODECONTENTS                   DISPID_DOMRANGE+15
#define DISPID_IHTMLDOMRANGE_COMPAREBOUNDARYPOINTS                DISPID_DOMRANGE+16
#define DISPID_IHTMLDOMRANGE_DELETECONTENTS                       DISPID_DOMRANGE+17
#define DISPID_IHTMLDOMRANGE_EXTRACTCONTENTS                      DISPID_DOMRANGE+18
#define DISPID_IHTMLDOMRANGE_CLONECONTENTS                        DISPID_DOMRANGE+19
#define DISPID_IHTMLDOMRANGE_INSERTNODE                           DISPID_DOMRANGE+20
#define DISPID_IHTMLDOMRANGE_SURROUNDCONTENTS                     DISPID_DOMRANGE+21
#define DISPID_IHTMLDOMRANGE_CLONERANGE                           DISPID_DOMRANGE+22
#define DISPID_IHTMLDOMRANGE_TOSTRING                             DISPID_DOMRANGE+23
#define DISPID_IHTMLDOMRANGE_DETACH                               DISPID_DOMRANGE+24
#define DISPID_IHTMLDOMRANGE_GETCLIENTRECTS                       DISPID_DOMRANGE+25
#define DISPID_IHTMLDOMRANGE_GETBOUNDINGCLIENTRECT                DISPID_DOMRANGE+26

//    DISPIDs for interface IHTMLFormElement

#define DISPID_IHTMLFORMELEMENT_ACTION                            DISPID_FORM+1
#define DISPID_IHTMLFORMELEMENT_DIR                               DISPID_A_DIR
#define DISPID_IHTMLFORMELEMENT_ENCODING                          DISPID_FORM+3
#define DISPID_IHTMLFORMELEMENT_METHOD                            DISPID_FORM+4
#define DISPID_IHTMLFORMELEMENT_ELEMENTS                          DISPID_FORM+5
#define DISPID_IHTMLFORMELEMENT_TARGET                            DISPID_FORM+6
#define DISPID_IHTMLFORMELEMENT_NAME                              STDPROPID_XOBJ_NAME
#define DISPID_IHTMLFORMELEMENT_ONSUBMIT                          DISPID_EVPROP_ONSUBMIT
#define DISPID_IHTMLFORMELEMENT_ONRESET                           DISPID_EVPROP_ONRESET
#define DISPID_IHTMLFORMELEMENT_SUBMIT                            DISPID_FORM+9
#define DISPID_IHTMLFORMELEMENT_RESET                             DISPID_FORM+10
#define DISPID_IHTMLFORMELEMENT_LENGTH                            DISPID_COLLECTION
#define DISPID_IHTMLFORMELEMENT__NEWENUM                          DISPID_NEWENUM
#define DISPID_IHTMLFORMELEMENT_ITEM                              DISPID_VALUE
#define DISPID_IHTMLFORMELEMENT_TAGS                              DISPID_COLLECTION+2

//    DISPIDs for interface IHTMLFormElement2

#define DISPID_IHTMLFORMELEMENT2_ACCEPTCHARSET                    DISPID_FORM+11
#define DISPID_IHTMLFORMELEMENT2_URNS                             DISPID_COLLECTION+5

//    DISPIDs for interface IHTMLFormElement3

#define DISPID_IHTMLFORMELEMENT3_NAMEDITEM                        DISPID_COLLECTION+6

//    DISPIDs for interface IHTMLSubmitData

#define DISPID_IHTMLSUBMITDATA_APPENDNAMEVALUEPAIR                DISPID_FORM+12
#define DISPID_IHTMLSUBMITDATA_APPENDNAMEFILEPAIR                 DISPID_FORM+13
#define DISPID_IHTMLSUBMITDATA_APPENDITEMSEPARATOR                DISPID_FORM+14

//    DISPIDs for interface IHTMLFormElement4

#define DISPID_IHTMLFORMELEMENT4_IE8_ACTION                       DISPID_IE8_FORM

//    DISPIDs for event set HTMLFormElementEvents2

#define DISPID_HTMLFORMELEMENTEVENTS2_ONSUBMIT                    DISPID_EVMETH_ONSUBMIT
#define DISPID_HTMLFORMELEMENTEVENTS2_ONRESET                     DISPID_EVMETH_ONRESET

//    DISPIDs for event set HTMLFormElementEvents

#define DISPID_HTMLFORMELEMENTEVENTS_ONSUBMIT                     DISPID_EVMETH_ONSUBMIT
#define DISPID_HTMLFORMELEMENTEVENTS_ONRESET                      DISPID_EVMETH_ONRESET

//    DISPIDs for interface IHTMLControlElement

#define DISPID_IHTMLCONTROLELEMENT_TABINDEX                       STDPROPID_XOBJ_TABINDEX
#define DISPID_IHTMLCONTROLELEMENT_FOCUS                          DISPID_SITE+0
#define DISPID_IHTMLCONTROLELEMENT_ACCESSKEY                      DISPID_SITE+5
#define DISPID_IHTMLCONTROLELEMENT_ONBLUR                         DISPID_EVPROP_ONBLUR
#define DISPID_IHTMLCONTROLELEMENT_ONFOCUS                        DISPID_EVPROP_ONFOCUS
#define DISPID_IHTMLCONTROLELEMENT_ONRESIZE                       DISPID_EVPROP_ONRESIZE
#define DISPID_IHTMLCONTROLELEMENT_BLUR                           DISPID_SITE+2
#define DISPID_IHTMLCONTROLELEMENT_ADDFILTER                      DISPID_SITE+17
#define DISPID_IHTMLCONTROLELEMENT_REMOVEFILTER                   DISPID_SITE+18
#define DISPID_IHTMLCONTROLELEMENT_CLIENTHEIGHT                   DISPID_SITE+19
#define DISPID_IHTMLCONTROLELEMENT_CLIENTWIDTH                    DISPID_SITE+20
#define DISPID_IHTMLCONTROLELEMENT_CLIENTTOP                      DISPID_SITE+21
#define DISPID_IHTMLCONTROLELEMENT_CLIENTLEFT                     DISPID_SITE+22

//    DISPIDs for interface IHTMLTextContainer

#define DISPID_IHTMLTEXTCONTAINER_CREATECONTROLRANGE              DISPID_TEXTSITE+1
#define DISPID_IHTMLTEXTCONTAINER_SCROLLHEIGHT                    DISPID_TEXTSITE+2
#define DISPID_IHTMLTEXTCONTAINER_SCROLLWIDTH                     DISPID_TEXTSITE+3
#define DISPID_IHTMLTEXTCONTAINER_SCROLLTOP                       DISPID_TEXTSITE+4
#define DISPID_IHTMLTEXTCONTAINER_SCROLLLEFT                      DISPID_TEXTSITE+5
#define DISPID_IHTMLTEXTCONTAINER_ONSCROLL                        DISPID_EVPROP_ONSCROLL

//    DISPIDs for event set HTMLTextContainerEvents2

#define DISPID_HTMLTEXTCONTAINEREVENTS2_ONCHANGE                  DISPID_EVMETH_ONCHANGE
#define DISPID_HTMLTEXTCONTAINEREVENTS2_ONSELECT                  DISPID_EVMETH_ONSELECT

//    DISPIDs for event set HTMLTextContainerEvents

#define DISPID_HTMLTEXTCONTAINEREVENTS_ONCHANGE                   DISPID_EVMETH_ONCHANGE
#define DISPID_HTMLTEXTCONTAINEREVENTS_ONSELECT                   DISPID_EVMETH_ONSELECT

//    DISPIDs for interface IHTMLControlRange

#define DISPID_IHTMLCONTROLRANGE_SELECT                           DISPID_RANGE+2
#define DISPID_IHTMLCONTROLRANGE_ADD                              DISPID_RANGE+3
#define DISPID_IHTMLCONTROLRANGE_REMOVE                           DISPID_RANGE+4
#define DISPID_IHTMLCONTROLRANGE_ITEM                             DISPID_VALUE
#define DISPID_IHTMLCONTROLRANGE_SCROLLINTOVIEW                   DISPID_RANGE+6
#define DISPID_IHTMLCONTROLRANGE_QUERYCOMMANDSUPPORTED            DISPID_RANGE+7
#define DISPID_IHTMLCONTROLRANGE_QUERYCOMMANDENABLED              DISPID_RANGE+8
#define DISPID_IHTMLCONTROLRANGE_QUERYCOMMANDSTATE                DISPID_RANGE+9
#define DISPID_IHTMLCONTROLRANGE_QUERYCOMMANDINDETERM             DISPID_RANGE+10
#define DISPID_IHTMLCONTROLRANGE_QUERYCOMMANDTEXT                 DISPID_RANGE+11
#define DISPID_IHTMLCONTROLRANGE_QUERYCOMMANDVALUE                DISPID_RANGE+12
#define DISPID_IHTMLCONTROLRANGE_EXECCOMMAND                      DISPID_RANGE+13
#define DISPID_IHTMLCONTROLRANGE_EXECCOMMANDSHOWHELP              DISPID_RANGE+14
#define DISPID_IHTMLCONTROLRANGE_COMMONPARENTELEMENT              DISPID_RANGE+15
#define DISPID_IHTMLCONTROLRANGE_LENGTH                           DISPID_RANGE+5

//    DISPIDs for interface IHTMLControlRange2

#define DISPID_IHTMLCONTROLRANGE2_ADDELEMENT                      DISPID_RANGE+16

//    DISPIDs for interface IHTMLImgElement

#define DISPID_IHTMLIMGELEMENT_ISMAP                              DISPID_IMG+2
#define DISPID_IHTMLIMGELEMENT_USEMAP                             DISPID_IMG+8
#define DISPID_IHTMLIMGELEMENT_MIMETYPE                           DISPID_IMG+10
#define DISPID_IHTMLIMGELEMENT_FILESIZE                           DISPID_IMG+11
#define DISPID_IHTMLIMGELEMENT_FILECREATEDDATE                    DISPID_IMG+12
#define DISPID_IHTMLIMGELEMENT_FILEMODIFIEDDATE                   DISPID_IMG+13
#define DISPID_IHTMLIMGELEMENT_FILEUPDATEDDATE                    DISPID_IMG+14
#define DISPID_IHTMLIMGELEMENT_PROTOCOL                           DISPID_IMG+15
#define DISPID_IHTMLIMGELEMENT_HREF                               DISPID_IMG+16
#define DISPID_IHTMLIMGELEMENT_NAMEPROP                           DISPID_IMG+17
#define DISPID_IHTMLIMGELEMENT_BORDER                             DISPID_IMGBASE+4
#define DISPID_IHTMLIMGELEMENT_VSPACE                             DISPID_IMGBASE+5
#define DISPID_IHTMLIMGELEMENT_HSPACE                             DISPID_IMGBASE+6
#define DISPID_IHTMLIMGELEMENT_ALT                                DISPID_IMGBASE+2
#define DISPID_IHTMLIMGELEMENT_SRC                                DISPID_IMGBASE+3
#define DISPID_IHTMLIMGELEMENT_LOWSRC                             DISPID_IMGBASE+7
#define DISPID_IHTMLIMGELEMENT_VRML                               DISPID_IMGBASE+8
#define DISPID_IHTMLIMGELEMENT_DYNSRC                             DISPID_IMGBASE+9
#define DISPID_IHTMLIMGELEMENT_READYSTATE                         DISPID_A_READYSTATE
#define DISPID_IHTMLIMGELEMENT_COMPLETE                           DISPID_IMGBASE+10
#define DISPID_IHTMLIMGELEMENT_LOOP                               DISPID_IMGBASE+11
#define DISPID_IHTMLIMGELEMENT_ALIGN                              STDPROPID_XOBJ_CONTROLALIGN
#define DISPID_IHTMLIMGELEMENT_ONLOAD                             DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLIMGELEMENT_ONERROR                            DISPID_EVPROP_ONERROR
#define DISPID_IHTMLIMGELEMENT_ONABORT                            DISPID_EVPROP_ONABORT
#define DISPID_IHTMLIMGELEMENT_NAME                               STDPROPID_XOBJ_NAME
#define DISPID_IHTMLIMGELEMENT_WIDTH                              STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLIMGELEMENT_HEIGHT                             STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLIMGELEMENT_START                              DISPID_IMGBASE+13

//    DISPIDs for interface IHTMLImgElement2

#define DISPID_IHTMLIMGELEMENT2_LONGDESC                          DISPID_IMG+19

//    DISPIDs for interface IHTMLImgElement3

#define DISPID_IHTMLIMGELEMENT3_IE8_LONGDESC                      DISPID_IE8_IMG+1
#define DISPID_IHTMLIMGELEMENT3_IE8_VRML                          DISPID_IE8_IMG+2
#define DISPID_IHTMLIMGELEMENT3_IE8_LOWSRC                        DISPID_IE8_IMG+3
#define DISPID_IHTMLIMGELEMENT3_IE8_DYNSRC                        DISPID_IE8_IMG+4

//    DISPIDs for interface IHTMLImgElement4

#define DISPID_IHTMLIMGELEMENT4_NATURALWIDTH                      DISPID_IE8_IMG+5
#define DISPID_IHTMLIMGELEMENT4_NATURALHEIGHT                     DISPID_IE8_IMG+6

//    DISPIDs for interface IHTMLMSImgElement

#define DISPID_IHTMLMSIMGELEMENT_MSPLAYTODISABLED                 DISPID_IE8_IMG+7
#define DISPID_IHTMLMSIMGELEMENT_MSPLAYTOPRIMARY                  DISPID_IE8_IMG+8

//    DISPIDs for interface IHTMLImageElementFactory

#define DISPID_IHTMLIMAGEELEMENTFACTORY_CREATE                    DISPID_VALUE

//    DISPIDs for event set HTMLImgEvents2

#define DISPID_HTMLIMGEVENTS2_ONLOAD                              DISPID_EVMETH_ONLOAD
#define DISPID_HTMLIMGEVENTS2_ONERROR                             DISPID_EVMETH_ONERROR
#define DISPID_HTMLIMGEVENTS2_ONABORT                             DISPID_EVMETH_ONABORT

//    DISPIDs for event set HTMLImgEvents

#define DISPID_HTMLIMGEVENTS_ONLOAD                               DISPID_EVMETH_ONLOAD
#define DISPID_HTMLIMGEVENTS_ONERROR                              DISPID_EVMETH_ONERROR
#define DISPID_HTMLIMGEVENTS_ONABORT                              DISPID_EVMETH_ONABORT

//    DISPIDs for interface IHTMLBodyElement

#define DISPID_IHTMLBODYELEMENT_BACKGROUND                        DISPID_A_BACKGROUNDIMAGE
#define DISPID_IHTMLBODYELEMENT_BGPROPERTIES                      DISPID_A_BACKGROUNDATTACHMENT
#define DISPID_IHTMLBODYELEMENT_LEFTMARGIN                        DISPID_A_MARGINLEFT
#define DISPID_IHTMLBODYELEMENT_TOPMARGIN                         DISPID_A_MARGINTOP
#define DISPID_IHTMLBODYELEMENT_RIGHTMARGIN                       DISPID_A_MARGINRIGHT
#define DISPID_IHTMLBODYELEMENT_BOTTOMMARGIN                      DISPID_A_MARGINBOTTOM
#define DISPID_IHTMLBODYELEMENT_NOWRAP                            DISPID_A_NOWRAP
#define DISPID_IHTMLBODYELEMENT_BGCOLOR                           DISPID_BACKCOLOR
#define DISPID_IHTMLBODYELEMENT_TEXT                              DISPID_A_COLOR
#define DISPID_IHTMLBODYELEMENT_LINK                              DISPID_BODY+10
#define DISPID_IHTMLBODYELEMENT_VLINK                             DISPID_BODY+12
#define DISPID_IHTMLBODYELEMENT_ALINK                             DISPID_BODY+11
#define DISPID_IHTMLBODYELEMENT_ONLOAD                            DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLBODYELEMENT_ONUNLOAD                          DISPID_EVPROP_ONUNLOAD
#define DISPID_IHTMLBODYELEMENT_SCROLL                            DISPID_A_SCROLL
#define DISPID_IHTMLBODYELEMENT_ONSELECT                          DISPID_EVPROP_ONSELECT
#define DISPID_IHTMLBODYELEMENT_ONBEFOREUNLOAD                    DISPID_EVPROP_ONBEFOREUNLOAD
#define DISPID_IHTMLBODYELEMENT_CREATETEXTRANGE                   DISPID_BODY+13

//    DISPIDs for interface IHTMLBodyElement2

#define DISPID_IHTMLBODYELEMENT2_ONBEFOREPRINT                    DISPID_EVPROP_ONBEFOREPRINT
#define DISPID_IHTMLBODYELEMENT2_ONAFTERPRINT                     DISPID_EVPROP_ONAFTERPRINT

//    DISPIDs for interface IHTMLBodyElement3

#define DISPID_IHTMLBODYELEMENT3_IE8_BACKGROUND                   DISPID_IE8_BODY
#define DISPID_IHTMLBODYELEMENT3_ONONLINE                         DISPID_EVPROP_ONONLINE
#define DISPID_IHTMLBODYELEMENT3_ONOFFLINE                        DISPID_EVPROP_ONOFFLINE
#define DISPID_IHTMLBODYELEMENT3_ONHASHCHANGE                     DISPID_EVPROP_ONHASHCHANGE

//    DISPIDs for interface IHTMLBodyElement4

#define DISPID_IHTMLBODYELEMENT4_ONMESSAGE                        DISPID_EVPROP_ONMESSAGE
#define DISPID_IHTMLBODYELEMENT4_ONSTORAGE                        DISPID_EVPROP_ONSTORAGE

//    DISPIDs for interface IHTMLBodyElement5

#define DISPID_IHTMLBODYELEMENT5_ONPOPSTATE                       DISPID_EVPROP_ONPOPSTATE

//    DISPIDs for interface IHTMLFontElement

#define DISPID_IHTMLFONTELEMENT_COLOR                             DISPID_A_COLOR
#define DISPID_IHTMLFONTELEMENT_FACE                              DISPID_A_FONTFACE
#define DISPID_IHTMLFONTELEMENT_SIZE                              DISPID_A_FONTSIZE

//    DISPIDs for interface IHTMLAnchorElement

#define DISPID_IHTMLANCHORELEMENT_HREF                            DISPID_VALUE
#define DISPID_IHTMLANCHORELEMENT_TARGET                          DISPID_ANCHOR+3
#define DISPID_IHTMLANCHORELEMENT_REL                             DISPID_ANCHOR+5
#define DISPID_IHTMLANCHORELEMENT_REV                             DISPID_ANCHOR+6
#define DISPID_IHTMLANCHORELEMENT_URN                             DISPID_ANCHOR+7
#define DISPID_IHTMLANCHORELEMENT_METHODS                         DISPID_ANCHOR+8
#define DISPID_IHTMLANCHORELEMENT_NAME                            STDPROPID_XOBJ_NAME
#define DISPID_IHTMLANCHORELEMENT_HOST                            DISPID_ANCHOR+12
#define DISPID_IHTMLANCHORELEMENT_HOSTNAME                        DISPID_ANCHOR+13
#define DISPID_IHTMLANCHORELEMENT_PATHNAME                        DISPID_ANCHOR+14
#define DISPID_IHTMLANCHORELEMENT_PORT                            DISPID_ANCHOR+15
#define DISPID_IHTMLANCHORELEMENT_PROTOCOL                        DISPID_ANCHOR+16
#define DISPID_IHTMLANCHORELEMENT_SEARCH                          DISPID_ANCHOR+17
#define DISPID_IHTMLANCHORELEMENT_HASH                            DISPID_ANCHOR+18
#define DISPID_IHTMLANCHORELEMENT_ONBLUR                          DISPID_EVPROP_ONBLUR
#define DISPID_IHTMLANCHORELEMENT_ONFOCUS                         DISPID_EVPROP_ONFOCUS
#define DISPID_IHTMLANCHORELEMENT_ACCESSKEY                       DISPID_SITE+5
#define DISPID_IHTMLANCHORELEMENT_PROTOCOLLONG                    DISPID_ANCHOR+31
#define DISPID_IHTMLANCHORELEMENT_MIMETYPE                        DISPID_ANCHOR+30
#define DISPID_IHTMLANCHORELEMENT_NAMEPROP                        DISPID_ANCHOR+32
#define DISPID_IHTMLANCHORELEMENT_TABINDEX                        STDPROPID_XOBJ_TABINDEX
#define DISPID_IHTMLANCHORELEMENT_FOCUS                           DISPID_SITE+0
#define DISPID_IHTMLANCHORELEMENT_BLUR                            DISPID_SITE+2

//    DISPIDs for interface IHTMLAnchorElement2

#define DISPID_IHTMLANCHORELEMENT2_CHARSET                        DISPID_ANCHOR+23
#define DISPID_IHTMLANCHORELEMENT2_COORDS                         DISPID_ANCHOR+24
#define DISPID_IHTMLANCHORELEMENT2_HREFLANG                       DISPID_ANCHOR+25
#define DISPID_IHTMLANCHORELEMENT2_SHAPE                          DISPID_ANCHOR+26
#define DISPID_IHTMLANCHORELEMENT2_TYPE                           DISPID_ANCHOR+27

//    DISPIDs for interface IHTMLAnchorElement3

#define DISPID_IHTMLANCHORELEMENT3_IE8_SHAPE                      DISPID_IE8_ANCHOR+1
#define DISPID_IHTMLANCHORELEMENT3_IE8_COORDS                     DISPID_IE8_ANCHOR+2
#define DISPID_IHTMLANCHORELEMENT3_IE8_HREF                       DISPID_IE8_ANCHOR+3

//    DISPIDs for interface IHTMLLabelElement

#define DISPID_IHTMLLABELELEMENT_HTMLFOR                          DISPID_LABEL
#define DISPID_IHTMLLABELELEMENT_ACCESSKEY                        DISPID_SITE+5

//    DISPIDs for interface IHTMLLabelElement2

#define DISPID_IHTMLLABELELEMENT2_FORM                            DISPID_LABEL+2

//    DISPIDs for interface IHTMLListElement2

#define DISPID_IHTMLLISTELEMENT2_COMPACT                          DISPID_DIR+1

//    DISPIDs for interface IHTMLUListElement

#define DISPID_IHTMLULISTELEMENT_COMPACT                          DISPID_DIR+1
#define DISPID_IHTMLULISTELEMENT_TYPE                             DISPID_A_LISTTYPE

//    DISPIDs for interface IHTMLOListElement

#define DISPID_IHTMLOLISTELEMENT_COMPACT                          DISPID_DIR+1
#define DISPID_IHTMLOLISTELEMENT_START                            DISPID_OL+3
#define DISPID_IHTMLOLISTELEMENT_TYPE                             DISPID_A_LISTTYPE

//    DISPIDs for interface IHTMLLIElement

#define DISPID_IHTMLLIELEMENT_TYPE                                DISPID_A_LISTTYPE
#define DISPID_IHTMLLIELEMENT_VALUE                               DISPID_LI+1

//    DISPIDs for interface IHTMLBlockElement

#define DISPID_IHTMLBLOCKELEMENT_CLEAR                            DISPID_A_CLEAR

//    DISPIDs for interface IHTMLBlockElement2

#define DISPID_IHTMLBLOCKELEMENT2_CITE                            DISPID_BLOCK+1
#define DISPID_IHTMLBLOCKELEMENT2_WIDTH                           DISPID_BLOCK+2

//    DISPIDs for interface IHTMLBlockElement3

#define DISPID_IHTMLBLOCKELEMENT3_IE8_CITE                        DISPID_IE8_BLOCK

//    DISPIDs for interface IHTMLDivElement

#define DISPID_IHTMLDIVELEMENT_ALIGN                              STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLDIVELEMENT_NOWRAP                             DISPID_A_NOWRAP

//    DISPIDs for interface IHTMLDDElement

#define DISPID_IHTMLDDELEMENT_NOWRAP                              DISPID_A_NOWRAP

//    DISPIDs for interface IHTMLDTElement

#define DISPID_IHTMLDTELEMENT_NOWRAP                              DISPID_A_NOWRAP

//    DISPIDs for interface IHTMLBRElement

#define DISPID_IHTMLBRELEMENT_CLEAR                               DISPID_A_CLEAR

//    DISPIDs for interface IHTMLDListElement

#define DISPID_IHTMLDLISTELEMENT_COMPACT                          DISPID_DIR+1

//    DISPIDs for interface IHTMLHRElement

#define DISPID_IHTMLHRELEMENT_ALIGN                               STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLHRELEMENT_COLOR                               DISPID_A_COLOR
#define DISPID_IHTMLHRELEMENT_NOSHADE                             DISPID_HR+1
#define DISPID_IHTMLHRELEMENT_WIDTH                               STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLHRELEMENT_SIZE                                STDPROPID_XOBJ_HEIGHT

//    DISPIDs for interface IHTMLParaElement

#define DISPID_IHTMLPARAELEMENT_ALIGN                             STDPROPID_XOBJ_BLOCKALIGN

//    DISPIDs for interface IHTMLElementCollection

#define DISPID_IHTMLELEMENTCOLLECTION_TOSTRING                    DISPID_COLLECTION+1
#define DISPID_IHTMLELEMENTCOLLECTION_LENGTH                      DISPID_COLLECTION
#define DISPID_IHTMLELEMENTCOLLECTION__NEWENUM                    DISPID_NEWENUM
#define DISPID_IHTMLELEMENTCOLLECTION_ITEM                        DISPID_VALUE
#define DISPID_IHTMLELEMENTCOLLECTION_TAGS                        DISPID_COLLECTION+2

//    DISPIDs for interface IHTMLElementCollection2

#define DISPID_IHTMLELEMENTCOLLECTION2_URNS                       DISPID_COLLECTION+5

//    DISPIDs for interface IHTMLElementCollection3

#define DISPID_IHTMLELEMENTCOLLECTION3_NAMEDITEM                  DISPID_COLLECTION+6

//    DISPIDs for interface IHTMLElementCollection4

#define DISPID_IHTMLELEMENTCOLLECTION4_IE8_LENGTH                 DISPID_IE8_COLLECTION
#define DISPID_IHTMLELEMENTCOLLECTION4_IE8_ITEM                   DISPID_IE8_COLLECTION+2
#define DISPID_IHTMLELEMENTCOLLECTION4_IE8_NAMEDITEM              DISPID_IE8_COLLECTION+3

//    DISPIDs for interface IHTMLHeaderElement

#define DISPID_IHTMLHEADERELEMENT_ALIGN                           STDPROPID_XOBJ_BLOCKALIGN

//    DISPIDs for interface IHTMLSelectElementEx

#define DISPID_IHTMLSELECTELEMENTEX_SHOWDROPDOWN                  
#define DISPID_IHTMLSELECTELEMENTEX_SETSELECTEXFLAGS              
#define DISPID_IHTMLSELECTELEMENTEX_GETSELECTEXFLAGS              
#define DISPID_IHTMLSELECTELEMENTEX_GETDROPDOWNOPEN               

//    DISPIDs for interface IHTMLSelectElement

#define DISPID_IHTMLSELECTELEMENT_SIZE                            DISPID_SELECT+2
#define DISPID_IHTMLSELECTELEMENT_MULTIPLE                        DISPID_SELECT+3
#define DISPID_IHTMLSELECTELEMENT_NAME                            STDPROPID_XOBJ_NAME
#define DISPID_IHTMLSELECTELEMENT_OPTIONS                         DISPID_SELECT+5
#define DISPID_IHTMLSELECTELEMENT_ONCHANGE                        DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLSELECTELEMENT_SELECTEDINDEX                   DISPID_SELECT+10
#define DISPID_IHTMLSELECTELEMENT_TYPE                            DISPID_SELECT+12
#define DISPID_IHTMLSELECTELEMENT_VALUE                           DISPID_SELECT+11
#define DISPID_IHTMLSELECTELEMENT_DISABLED                        STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLSELECTELEMENT_FORM                            DISPID_SITE+4
#define DISPID_IHTMLSELECTELEMENT_ADD                             DISPID_COLLECTION+3
#define DISPID_IHTMLSELECTELEMENT_REMOVE                          DISPID_COLLECTION+4
#define DISPID_IHTMLSELECTELEMENT_LENGTH                          DISPID_COLLECTION
#define DISPID_IHTMLSELECTELEMENT__NEWENUM                        DISPID_NEWENUM
#define DISPID_IHTMLSELECTELEMENT_ITEM                            DISPID_VALUE
#define DISPID_IHTMLSELECTELEMENT_TAGS                            DISPID_COLLECTION+2

//    DISPIDs for interface IHTMLSelectElement2

#define DISPID_IHTMLSELECTELEMENT2_URNS                           DISPID_COLLECTION+5

//    DISPIDs for interface IHTMLSelectElement4

#define DISPID_IHTMLSELECTELEMENT4_NAMEDITEM                      DISPID_COLLECTION+6

//    DISPIDs for interface IHTMLSelectElement5

#define DISPID_IHTMLSELECTELEMENT5_IE8_ADD                        DISPID_IE8_SELECT

//    DISPIDs for interface IHTMLSelectElement6

#define DISPID_IHTMLSELECTELEMENT6_IE9_ADD                        DISPID_IE8_SELECT+1
#define DISPID_IHTMLSELECTELEMENT6_IE9_VALUE                      DISPID_IE8_SELECT+2

//    DISPIDs for event set HTMLSelectElementEvents2

#define DISPID_HTMLSELECTELEMENTEVENTS2_ONCHANGE                  DISPID_EVMETH_ONCHANGE

//    DISPIDs for event set HTMLSelectElementEvents

#define DISPID_HTMLSELECTELEMENTEVENTS_ONCHANGE                   DISPID_EVMETH_ONCHANGE

//    DISPIDs for interface IHTMLSelectionObject

#define DISPID_IHTMLSELECTIONOBJECT_CREATERANGE                   DISPID_SELECTOBJ+1
#define DISPID_IHTMLSELECTIONOBJECT_EMPTY                         DISPID_SELECTOBJ+2
#define DISPID_IHTMLSELECTIONOBJECT_CLEAR                         DISPID_SELECTOBJ+3
#define DISPID_IHTMLSELECTIONOBJECT_TYPE                          DISPID_SELECTOBJ+4

//    DISPIDs for interface IHTMLSelectionObject2

#define DISPID_IHTMLSELECTIONOBJECT2_CREATERANGECOLLECTION        DISPID_SELECTOBJ+5
#define DISPID_IHTMLSELECTIONOBJECT2_TYPEDETAIL                   DISPID_SELECTOBJ+6

//    DISPIDs for interface IHTMLSelection

#define DISPID_IHTMLSELECTION_ANCHORNODE                          DISPID_HTMLSELECTION+1
#define DISPID_IHTMLSELECTION_ANCHOROFFSET                        DISPID_HTMLSELECTION+2
#define DISPID_IHTMLSELECTION_FOCUSNODE                           DISPID_HTMLSELECTION+3
#define DISPID_IHTMLSELECTION_FOCUSOFFSET                         DISPID_HTMLSELECTION+4
#define DISPID_IHTMLSELECTION_ISCOLLAPSED                         DISPID_HTMLSELECTION+5
#define DISPID_IHTMLSELECTION_COLLAPSE                            DISPID_HTMLSELECTION+6
#define DISPID_IHTMLSELECTION_COLLAPSETOSTART                     DISPID_HTMLSELECTION+7
#define DISPID_IHTMLSELECTION_COLLAPSETOEND                       DISPID_HTMLSELECTION+8
#define DISPID_IHTMLSELECTION_SELECTALLCHILDREN                   DISPID_HTMLSELECTION+9
#define DISPID_IHTMLSELECTION_DELETEFROMDOCUMENT                  DISPID_HTMLSELECTION+10
#define DISPID_IHTMLSELECTION_RANGECOUNT                          DISPID_HTMLSELECTION+11
#define DISPID_IHTMLSELECTION_GETRANGEAT                          DISPID_HTMLSELECTION+12
#define DISPID_IHTMLSELECTION_ADDRANGE                            DISPID_HTMLSELECTION+13
#define DISPID_IHTMLSELECTION_REMOVERANGE                         DISPID_HTMLSELECTION+14
#define DISPID_IHTMLSELECTION_REMOVEALLRANGES                     DISPID_HTMLSELECTION+15
#define DISPID_IHTMLSELECTION_TOSTRING                            DISPID_HTMLSELECTION+16

//    DISPIDs for interface IHTMLOptionElement

#define DISPID_IHTMLOPTIONELEMENT_SELECTED                        DISPID_OPTION+1
#define DISPID_IHTMLOPTIONELEMENT_VALUE                           DISPID_OPTION+2
#define DISPID_IHTMLOPTIONELEMENT_DEFAULTSELECTED                 DISPID_OPTION+3
#define DISPID_IHTMLOPTIONELEMENT_INDEX                           DISPID_OPTION+5
#define DISPID_IHTMLOPTIONELEMENT_TEXT                            DISPID_OPTION+4
#define DISPID_IHTMLOPTIONELEMENT_FORM                            DISPID_OPTION+6

//    DISPIDs for interface IHTMLOptionElement3

#define DISPID_IHTMLOPTIONELEMENT3_LABEL                          DISPID_OPTION+7

//    DISPIDs for interface IHTMLOptionElement4

#define DISPID_IHTMLOPTIONELEMENT4_IE9_VALUE                      DISPID_OPTION+8

//    DISPIDs for interface IHTMLOptionElementFactory

#define DISPID_IHTMLOPTIONELEMENTFACTORY_CREATE                   DISPID_VALUE

//    DISPIDs for interface IHTMLInputElement

#define DISPID_IHTMLINPUTELEMENT_TYPE                             DISPID_INPUT
#define DISPID_IHTMLINPUTELEMENT_VALUE                            DISPID_A_VALUE
#define DISPID_IHTMLINPUTELEMENT_NAME                             STDPROPID_XOBJ_NAME
#define DISPID_IHTMLINPUTELEMENT_STATUS                           DISPID_INPUT+1
#define DISPID_IHTMLINPUTELEMENT_DISABLED                         STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLINPUTELEMENT_FORM                             DISPID_SITE+4
#define DISPID_IHTMLINPUTELEMENT_SIZE                             DISPID_INPUT+2
#define DISPID_IHTMLINPUTELEMENT_MAXLENGTH                        DISPID_INPUT+3
#define DISPID_IHTMLINPUTELEMENT_SELECT                           DISPID_INPUT+4
#define DISPID_IHTMLINPUTELEMENT_ONCHANGE                         DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLINPUTELEMENT_ONSELECT                         DISPID_EVPROP_ONSELECT
#define DISPID_IHTMLINPUTELEMENT_DEFAULTVALUE                     DISPID_DEFAULTVALUE
#define DISPID_IHTMLINPUTELEMENT_READONLY                         DISPID_INPUT+5
#define DISPID_IHTMLINPUTELEMENT_CREATETEXTRANGE                  DISPID_INPUT+6
#define DISPID_IHTMLINPUTELEMENT_INDETERMINATE                    DISPID_INPUT+7
#define DISPID_IHTMLINPUTELEMENT_DEFAULTCHECKED                   DISPID_INPUT+8
#define DISPID_IHTMLINPUTELEMENT_CHECKED                          DISPID_INPUT+9
#define DISPID_IHTMLINPUTELEMENT_BORDER                           DISPID_INPUT+12
#define DISPID_IHTMLINPUTELEMENT_VSPACE                           DISPID_INPUT+13
#define DISPID_IHTMLINPUTELEMENT_HSPACE                           DISPID_INPUT+14
#define DISPID_IHTMLINPUTELEMENT_ALT                              DISPID_INPUT+10
#define DISPID_IHTMLINPUTELEMENT_SRC                              DISPID_INPUT+11
#define DISPID_IHTMLINPUTELEMENT_LOWSRC                           DISPID_INPUT+15
#define DISPID_IHTMLINPUTELEMENT_VRML                             DISPID_INPUT+16
#define DISPID_IHTMLINPUTELEMENT_DYNSRC                           DISPID_INPUT+17
#define DISPID_IHTMLINPUTELEMENT_READYSTATE                       DISPID_A_READYSTATE
#define DISPID_IHTMLINPUTELEMENT_COMPLETE                         DISPID_INPUT+18
#define DISPID_IHTMLINPUTELEMENT_LOOP                             DISPID_INPUT+19
#define DISPID_IHTMLINPUTELEMENT_ALIGN                            STDPROPID_XOBJ_CONTROLALIGN
#define DISPID_IHTMLINPUTELEMENT_ONLOAD                           DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLINPUTELEMENT_ONERROR                          DISPID_EVPROP_ONERROR
#define DISPID_IHTMLINPUTELEMENT_ONABORT                          DISPID_EVPROP_ONABORT
#define DISPID_IHTMLINPUTELEMENT_WIDTH                            STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLINPUTELEMENT_HEIGHT                           STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLINPUTELEMENT_START                            DISPID_INPUT+20

//    DISPIDs for interface IHTMLInputElement2

#define DISPID_IHTMLINPUTELEMENT2_ACCEPT                          DISPID_INPUT+22
#define DISPID_IHTMLINPUTELEMENT2_USEMAP                          DISPID_INPUT+23

//    DISPIDs for interface IHTMLInputElement3

#define DISPID_IHTMLINPUTELEMENT3_IE8_SRC                         DISPID_IE8_INPUT
#define DISPID_IHTMLINPUTELEMENT3_IE8_LOWSRC                      DISPID_IE8_INPUT+1
#define DISPID_IHTMLINPUTELEMENT3_IE8_VRML                        DISPID_IE8_INPUT+2
#define DISPID_IHTMLINPUTELEMENT3_IE8_DYNSRC                      DISPID_IE8_INPUT+3

//    DISPIDs for interface IHTMLInputButtonElement

#define DISPID_IHTMLINPUTBUTTONELEMENT_TYPE                       DISPID_INPUT
#define DISPID_IHTMLINPUTBUTTONELEMENT_VALUE                      DISPID_A_VALUE
#define DISPID_IHTMLINPUTBUTTONELEMENT_NAME                       STDPROPID_XOBJ_NAME
#define DISPID_IHTMLINPUTBUTTONELEMENT_STATUS                     DISPID_INPUT+21
#define DISPID_IHTMLINPUTBUTTONELEMENT_DISABLED                   STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLINPUTBUTTONELEMENT_FORM                       DISPID_SITE+4
#define DISPID_IHTMLINPUTBUTTONELEMENT_CREATETEXTRANGE            DISPID_INPUT+6

//    DISPIDs for interface IHTMLInputHiddenElement

#define DISPID_IHTMLINPUTHIDDENELEMENT_TYPE                       DISPID_INPUT
#define DISPID_IHTMLINPUTHIDDENELEMENT_VALUE                      DISPID_A_VALUE
#define DISPID_IHTMLINPUTHIDDENELEMENT_NAME                       STDPROPID_XOBJ_NAME
#define DISPID_IHTMLINPUTHIDDENELEMENT_STATUS                     DISPID_INPUT+21
#define DISPID_IHTMLINPUTHIDDENELEMENT_DISABLED                   STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLINPUTHIDDENELEMENT_FORM                       DISPID_SITE+4
#define DISPID_IHTMLINPUTHIDDENELEMENT_CREATETEXTRANGE            DISPID_INPUT+6

//    DISPIDs for interface IHTMLInputTextElement

#define DISPID_IHTMLINPUTTEXTELEMENT_TYPE                         DISPID_INPUT
#define DISPID_IHTMLINPUTTEXTELEMENT_VALUE                        DISPID_A_VALUE
#define DISPID_IHTMLINPUTTEXTELEMENT_NAME                         STDPROPID_XOBJ_NAME
#define DISPID_IHTMLINPUTTEXTELEMENT_STATUS                       DISPID_INPUT+21
#define DISPID_IHTMLINPUTTEXTELEMENT_DISABLED                     STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLINPUTTEXTELEMENT_FORM                         DISPID_SITE+4
#define DISPID_IHTMLINPUTTEXTELEMENT_DEFAULTVALUE                 DISPID_DEFAULTVALUE
#define DISPID_IHTMLINPUTTEXTELEMENT_SIZE                         DISPID_INPUT+2
#define DISPID_IHTMLINPUTTEXTELEMENT_MAXLENGTH                    DISPID_INPUT+3
#define DISPID_IHTMLINPUTTEXTELEMENT_SELECT                       DISPID_INPUT+4
#define DISPID_IHTMLINPUTTEXTELEMENT_ONCHANGE                     DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLINPUTTEXTELEMENT_ONSELECT                     DISPID_EVPROP_ONSELECT
#define DISPID_IHTMLINPUTTEXTELEMENT_READONLY                     DISPID_INPUT+5
#define DISPID_IHTMLINPUTTEXTELEMENT_CREATETEXTRANGE              DISPID_INPUT+6

//    DISPIDs for interface IHTMLInputTextElement2

#define DISPID_IHTMLINPUTTEXTELEMENT2_SELECTIONSTART              DISPID_INPUT+25
#define DISPID_IHTMLINPUTTEXTELEMENT2_SELECTIONEND                DISPID_INPUT+26
#define DISPID_IHTMLINPUTTEXTELEMENT2_SETSELECTIONRANGE           DISPID_INPUT+27

//    DISPIDs for interface IHTMLInputFileElement

#define DISPID_IHTMLINPUTFILEELEMENT_TYPE                         DISPID_INPUT
#define DISPID_IHTMLINPUTFILEELEMENT_NAME                         STDPROPID_XOBJ_NAME
#define DISPID_IHTMLINPUTFILEELEMENT_STATUS                       DISPID_INPUT+21
#define DISPID_IHTMLINPUTFILEELEMENT_DISABLED                     STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLINPUTFILEELEMENT_FORM                         DISPID_SITE+4
#define DISPID_IHTMLINPUTFILEELEMENT_SIZE                         DISPID_INPUT+2
#define DISPID_IHTMLINPUTFILEELEMENT_MAXLENGTH                    DISPID_INPUT+3
#define DISPID_IHTMLINPUTFILEELEMENT_SELECT                       DISPID_INPUT+4
#define DISPID_IHTMLINPUTFILEELEMENT_ONCHANGE                     DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLINPUTFILEELEMENT_ONSELECT                     DISPID_EVPROP_ONSELECT
#define DISPID_IHTMLINPUTFILEELEMENT_VALUE                        DISPID_A_VALUE

//    DISPIDs for interface IHTMLOptionButtonElement

#define DISPID_IHTMLOPTIONBUTTONELEMENT_VALUE                     DISPID_A_VALUE
#define DISPID_IHTMLOPTIONBUTTONELEMENT_TYPE                      DISPID_INPUT
#define DISPID_IHTMLOPTIONBUTTONELEMENT_NAME                      STDPROPID_XOBJ_NAME
#define DISPID_IHTMLOPTIONBUTTONELEMENT_CHECKED                   DISPID_INPUT+9
#define DISPID_IHTMLOPTIONBUTTONELEMENT_DEFAULTCHECKED            DISPID_INPUT+8
#define DISPID_IHTMLOPTIONBUTTONELEMENT_ONCHANGE                  DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLOPTIONBUTTONELEMENT_DISABLED                  STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLOPTIONBUTTONELEMENT_STATUS                    DISPID_INPUT+1
#define DISPID_IHTMLOPTIONBUTTONELEMENT_INDETERMINATE             DISPID_INPUT+7
#define DISPID_IHTMLOPTIONBUTTONELEMENT_FORM                      DISPID_SITE+4

//    DISPIDs for interface IHTMLInputImage

#define DISPID_IHTMLINPUTIMAGE_TYPE                               DISPID_INPUT
#define DISPID_IHTMLINPUTIMAGE_DISABLED                           STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLINPUTIMAGE_BORDER                             DISPID_INPUT+12
#define DISPID_IHTMLINPUTIMAGE_VSPACE                             DISPID_INPUT+13
#define DISPID_IHTMLINPUTIMAGE_HSPACE                             DISPID_INPUT+14
#define DISPID_IHTMLINPUTIMAGE_ALT                                DISPID_INPUT+10
#define DISPID_IHTMLINPUTIMAGE_SRC                                DISPID_INPUT+11
#define DISPID_IHTMLINPUTIMAGE_LOWSRC                             DISPID_INPUT+15
#define DISPID_IHTMLINPUTIMAGE_VRML                               DISPID_INPUT+16
#define DISPID_IHTMLINPUTIMAGE_DYNSRC                             DISPID_INPUT+17
#define DISPID_IHTMLINPUTIMAGE_READYSTATE                         DISPID_A_READYSTATE
#define DISPID_IHTMLINPUTIMAGE_COMPLETE                           DISPID_INPUT+18
#define DISPID_IHTMLINPUTIMAGE_LOOP                               DISPID_INPUT+19
#define DISPID_IHTMLINPUTIMAGE_ALIGN                              STDPROPID_XOBJ_CONTROLALIGN
#define DISPID_IHTMLINPUTIMAGE_ONLOAD                             DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLINPUTIMAGE_ONERROR                            DISPID_EVPROP_ONERROR
#define DISPID_IHTMLINPUTIMAGE_ONABORT                            DISPID_EVPROP_ONABORT
#define DISPID_IHTMLINPUTIMAGE_NAME                               STDPROPID_XOBJ_NAME
#define DISPID_IHTMLINPUTIMAGE_WIDTH                              STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLINPUTIMAGE_HEIGHT                             STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLINPUTIMAGE_START                              DISPID_INPUT+20

//    DISPIDs for interface IHTMLInputRangeElement

#define DISPID_IHTMLINPUTRANGEELEMENT_DISABLED                    STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLINPUTRANGEELEMENT_TYPE                        DISPID_INPUT
#define DISPID_IHTMLINPUTRANGEELEMENT_ALT                         DISPID_INPUT+10
#define DISPID_IHTMLINPUTRANGEELEMENT_NAME                        STDPROPID_XOBJ_NAME
#define DISPID_IHTMLINPUTRANGEELEMENT_VALUE                       DISPID_A_VALUE
#define DISPID_IHTMLINPUTRANGEELEMENT_MIN                         DISPID_INPUT+28
#define DISPID_IHTMLINPUTRANGEELEMENT_MAX                         DISPID_INPUT+29
#define DISPID_IHTMLINPUTRANGEELEMENT_STEP                        DISPID_INPUT+30
#define DISPID_IHTMLINPUTRANGEELEMENT_VALUEASNUMBER               DISPID_INPUT+31
#define DISPID_IHTMLINPUTRANGEELEMENT_STEPUP                      DISPID_INPUT+33
#define DISPID_IHTMLINPUTRANGEELEMENT_STEPDOWN                    DISPID_INPUT+32

//    DISPIDs for event set HTMLInputTextElementEvents2

#define DISPID_HTMLINPUTTEXTELEMENTEVENTS2_ONCHANGE               DISPID_EVMETH_ONCHANGE
#define DISPID_HTMLINPUTTEXTELEMENTEVENTS2_ONSELECT               DISPID_EVMETH_ONSELECT
#define DISPID_HTMLINPUTTEXTELEMENTEVENTS2_ONLOAD                 DISPID_EVMETH_ONLOAD
#define DISPID_HTMLINPUTTEXTELEMENTEVENTS2_ONERROR                DISPID_EVMETH_ONERROR
#define DISPID_HTMLINPUTTEXTELEMENTEVENTS2_ONABORT                DISPID_EVMETH_ONABORT

//    DISPIDs for event set HTMLInputImageEvents2

#define DISPID_HTMLINPUTIMAGEEVENTS2_ONLOAD                       DISPID_EVMETH_ONLOAD
#define DISPID_HTMLINPUTIMAGEEVENTS2_ONERROR                      DISPID_EVMETH_ONERROR
#define DISPID_HTMLINPUTIMAGEEVENTS2_ONABORT                      DISPID_EVMETH_ONABORT

//    DISPIDs for event set HTMLInputTextElementEvents

#define DISPID_HTMLINPUTTEXTELEMENTEVENTS_ONCHANGE                DISPID_EVMETH_ONCHANGE
#define DISPID_HTMLINPUTTEXTELEMENTEVENTS_ONSELECT                DISPID_EVMETH_ONSELECT
#define DISPID_HTMLINPUTTEXTELEMENTEVENTS_ONLOAD                  DISPID_EVMETH_ONLOAD
#define DISPID_HTMLINPUTTEXTELEMENTEVENTS_ONERROR                 DISPID_EVMETH_ONERROR
#define DISPID_HTMLINPUTTEXTELEMENTEVENTS_ONABORT                 DISPID_EVMETH_ONABORT

//    DISPIDs for event set HTMLInputImageEvents

#define DISPID_HTMLINPUTIMAGEEVENTS_ONLOAD                        DISPID_EVMETH_ONLOAD
#define DISPID_HTMLINPUTIMAGEEVENTS_ONERROR                       DISPID_EVMETH_ONERROR
#define DISPID_HTMLINPUTIMAGEEVENTS_ONABORT                       DISPID_EVMETH_ONABORT

//    DISPIDs for interface IHTMLTextAreaElement

#define DISPID_IHTMLTEXTAREAELEMENT_TYPE                          DISPID_INPUT
#define DISPID_IHTMLTEXTAREAELEMENT_VALUE                         DISPID_A_VALUE
#define DISPID_IHTMLTEXTAREAELEMENT_NAME                          STDPROPID_XOBJ_NAME
#define DISPID_IHTMLTEXTAREAELEMENT_STATUS                        DISPID_INPUT+1
#define DISPID_IHTMLTEXTAREAELEMENT_DISABLED                      STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLTEXTAREAELEMENT_FORM                          DISPID_SITE+4
#define DISPID_IHTMLTEXTAREAELEMENT_DEFAULTVALUE                  DISPID_DEFAULTVALUE
#define DISPID_IHTMLTEXTAREAELEMENT_SELECT                        DISPID_RICHTEXT+5
#define DISPID_IHTMLTEXTAREAELEMENT_ONCHANGE                      DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLTEXTAREAELEMENT_ONSELECT                      DISPID_EVPROP_ONSELECT
#define DISPID_IHTMLTEXTAREAELEMENT_READONLY                      DISPID_RICHTEXT+4
#define DISPID_IHTMLTEXTAREAELEMENT_ROWS                          DISPID_RICHTEXT+1
#define DISPID_IHTMLTEXTAREAELEMENT_COLS                          DISPID_RICHTEXT+2
#define DISPID_IHTMLTEXTAREAELEMENT_WRAP                          DISPID_RICHTEXT+3
#define DISPID_IHTMLTEXTAREAELEMENT_CREATETEXTRANGE               DISPID_RICHTEXT+6

//    DISPIDs for interface IHTMLTextAreaElement2

#define DISPID_IHTMLTEXTAREAELEMENT2_SELECTIONSTART               DISPID_RICHTEXT+7
#define DISPID_IHTMLTEXTAREAELEMENT2_SELECTIONEND                 DISPID_RICHTEXT+8
#define DISPID_IHTMLTEXTAREAELEMENT2_SETSELECTIONRANGE            DISPID_RICHTEXT+9

//    DISPIDs for interface IHTMLButtonElement

#define DISPID_IHTMLBUTTONELEMENT_TYPE                            DISPID_INPUT
#define DISPID_IHTMLBUTTONELEMENT_VALUE                           DISPID_A_VALUE
#define DISPID_IHTMLBUTTONELEMENT_NAME                            STDPROPID_XOBJ_NAME
#define DISPID_IHTMLBUTTONELEMENT_STATUS                          DISPID_BUTTON+1
#define DISPID_IHTMLBUTTONELEMENT_DISABLED                        STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLBUTTONELEMENT_FORM                            DISPID_SITE+4
#define DISPID_IHTMLBUTTONELEMENT_CREATETEXTRANGE                 DISPID_BUTTON+2

//    DISPIDs for interface IHTMLButtonElement2

#define DISPID_IHTMLBUTTONELEMENT2_IE9_TYPE                       DISPID_BUTTON+3

//    DISPIDs for interface IHTMLMarqueeElement

#define DISPID_IHTMLMARQUEEELEMENT_BGCOLOR                        DISPID_BACKCOLOR
#define DISPID_IHTMLMARQUEEELEMENT_SCROLLDELAY                    DISPID_MARQUEE
#define DISPID_IHTMLMARQUEEELEMENT_DIRECTION                      DISPID_MARQUEE+1
#define DISPID_IHTMLMARQUEEELEMENT_BEHAVIOR                       DISPID_MARQUEE+2
#define DISPID_IHTMLMARQUEEELEMENT_SCROLLAMOUNT                   DISPID_MARQUEE+3
#define DISPID_IHTMLMARQUEEELEMENT_LOOP                           DISPID_MARQUEE+4
#define DISPID_IHTMLMARQUEEELEMENT_VSPACE                         DISPID_MARQUEE+5
#define DISPID_IHTMLMARQUEEELEMENT_HSPACE                         DISPID_MARQUEE+6
#define DISPID_IHTMLMARQUEEELEMENT_ONFINISH                       DISPID_EVPROP_ONFINISH
#define DISPID_IHTMLMARQUEEELEMENT_ONSTART                        DISPID_EVPROP_ONSTART
#define DISPID_IHTMLMARQUEEELEMENT_ONBOUNCE                       DISPID_EVPROP_ONBOUNCE
#define DISPID_IHTMLMARQUEEELEMENT_WIDTH                          STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLMARQUEEELEMENT_HEIGHT                         STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLMARQUEEELEMENT_TRUESPEED                      DISPID_MARQUEE+7
#define DISPID_IHTMLMARQUEEELEMENT_START                          DISPID_MARQUEE+10
#define DISPID_IHTMLMARQUEEELEMENT_STOP                           DISPID_MARQUEE+11

//    DISPIDs for event set HTMLMarqueeElementEvents2

#define DISPID_HTMLMARQUEEELEMENTEVENTS2_ONBOUNCE                 DISPID_EVMETH_ONBOUNCE
#define DISPID_HTMLMARQUEEELEMENTEVENTS2_ONFINISH                 DISPID_EVMETH_ONFINISH
#define DISPID_HTMLMARQUEEELEMENTEVENTS2_ONSTART                  DISPID_EVMETH_ONSTART

//    DISPIDs for event set HTMLMarqueeElementEvents

#define DISPID_HTMLMARQUEEELEMENTEVENTS_ONBOUNCE                  DISPID_EVMETH_ONBOUNCE
#define DISPID_HTMLMARQUEEELEMENTEVENTS_ONFINISH                  DISPID_EVMETH_ONFINISH
#define DISPID_HTMLMARQUEEELEMENTEVENTS_ONSTART                   DISPID_EVMETH_ONSTART

//    DISPIDs for interface IHTMLHtmlElement

#define DISPID_IHTMLHTMLELEMENT_VERSION                           DISPID_HEDELEMS+1

//    DISPIDs for interface IHTMLHeadElement

#define DISPID_IHTMLHEADELEMENT_PROFILE                           DISPID_HEDELEMS+1

//    DISPIDs for interface IHTMLHeadElement2

#define DISPID_IHTMLHEADELEMENT2_IE8_PROFILE                      DISPID_IE8_HEAD

//    DISPIDs for interface IHTMLTitleElement

#define DISPID_IHTMLTITLEELEMENT_TEXT                             DISPID_A_VALUE

//    DISPIDs for interface IHTMLMetaElement

#define DISPID_IHTMLMETAELEMENT_HTTPEQUIV                         DISPID_HEDELEMS+1
#define DISPID_IHTMLMETAELEMENT_CONTENT                           DISPID_HEDELEMS+2
#define DISPID_IHTMLMETAELEMENT_NAME                              STDPROPID_XOBJ_NAME
#define DISPID_IHTMLMETAELEMENT_URL                               DISPID_HEDELEMS+3
#define DISPID_IHTMLMETAELEMENT_CHARSET                           DISPID_HEDELEMS+13

//    DISPIDs for interface IHTMLMetaElement2

#define DISPID_IHTMLMETAELEMENT2_SCHEME                           DISPID_HEDELEMS+20

//    DISPIDs for interface IHTMLMetaElement3

#define DISPID_IHTMLMETAELEMENT3_IE8_URL                          DISPID_IE8_META

//    DISPIDs for interface IHTMLBaseElement

#define DISPID_IHTMLBASEELEMENT_HREF                              DISPID_HEDELEMS+3
#define DISPID_IHTMLBASEELEMENT_TARGET                            DISPID_HEDELEMS+4

//    DISPIDs for interface IHTMLBaseElement2

#define DISPID_IHTMLBASEELEMENT2_IE8_HREF                         DISPID_IE8_BASE

//    DISPIDs for interface IHTMLIsIndexElement

#define DISPID_IHTMLISINDEXELEMENT_PROMPT                         DISPID_HEDELEMS+10
#define DISPID_IHTMLISINDEXELEMENT_ACTION                         DISPID_HEDELEMS+11

//    DISPIDs for interface IHTMLIsIndexElement2

#define DISPID_IHTMLISINDEXELEMENT2_FORM                          DISPID_HEDELEMS+12

//    DISPIDs for interface IHTMLNextIdElement

#define DISPID_IHTMLNEXTIDELEMENT_N                               DISPID_HEDELEMS+12

//    DISPIDs for interface IHTMLBaseFontElement

#define DISPID_IHTMLBASEFONTELEMENT_COLOR                         DISPID_A_COLOR
#define DISPID_IHTMLBASEFONTELEMENT_FACE                          DISPID_A_FONTFACE
#define DISPID_IHTMLBASEFONTELEMENT_SIZE                          DISPID_A_BASEFONT

//    DISPIDs for interface IOmHistory

#define DISPID_IOMHISTORY_LENGTH                                  DISPID_HISTORY
#define DISPID_IOMHISTORY_BACK                                    DISPID_HISTORY+1
#define DISPID_IOMHISTORY_FORWARD                                 DISPID_HISTORY+2
#define DISPID_IOMHISTORY_GO                                      DISPID_HISTORY+3

//    DISPIDs for interface IHTMLOpsProfile

#define DISPID_IHTMLOPSPROFILE_ADDREQUEST                         1
#define DISPID_IHTMLOPSPROFILE_CLEARREQUEST                       2
#define DISPID_IHTMLOPSPROFILE_DOREQUEST                          3
#define DISPID_IHTMLOPSPROFILE_GETATTRIBUTE                       4
#define DISPID_IHTMLOPSPROFILE_SETATTRIBUTE                       5
#define DISPID_IHTMLOPSPROFILE_COMMITCHANGES                      6
#define DISPID_IHTMLOPSPROFILE_ADDREADREQUEST                     7
#define DISPID_IHTMLOPSPROFILE_DOREADREQUEST                      8
#define DISPID_IHTMLOPSPROFILE_DOWRITEREQUEST                     9

//    DISPIDs for interface IOmNavigator

#define DISPID_IOMNAVIGATOR_APPCODENAME                           DISPID_NAVIGATOR
#define DISPID_IOMNAVIGATOR_APPNAME                               DISPID_NAVIGATOR+1
#define DISPID_IOMNAVIGATOR_APPVERSION                            DISPID_NAVIGATOR+2
#define DISPID_IOMNAVIGATOR_USERAGENT                             DISPID_NAVIGATOR+3
#define DISPID_IOMNAVIGATOR_JAVAENABLED                           DISPID_NAVIGATOR+4
#define DISPID_IOMNAVIGATOR_TAINTENABLED                          DISPID_NAVIGATOR+5
#define DISPID_IOMNAVIGATOR_MIMETYPES                             DISPID_NAVIGATOR+6
#define DISPID_IOMNAVIGATOR_PLUGINS                               DISPID_NAVIGATOR+7
#define DISPID_IOMNAVIGATOR_COOKIEENABLED                         DISPID_NAVIGATOR+8
#define DISPID_IOMNAVIGATOR_OPSPROFILE                            DISPID_NAVIGATOR+9
#define DISPID_IOMNAVIGATOR_TOSTRING                              DISPID_NAVIGATOR+10
#define DISPID_IOMNAVIGATOR_CPUCLASS                              DISPID_NAVIGATOR+11
#define DISPID_IOMNAVIGATOR_SYSTEMLANGUAGE                        DISPID_NAVIGATOR+12
#define DISPID_IOMNAVIGATOR_BROWSERLANGUAGE                       DISPID_NAVIGATOR+13
#define DISPID_IOMNAVIGATOR_USERLANGUAGE                          DISPID_NAVIGATOR+14
#define DISPID_IOMNAVIGATOR_PLATFORM                              DISPID_NAVIGATOR+15
#define DISPID_IOMNAVIGATOR_APPMINORVERSION                       DISPID_NAVIGATOR+16
#define DISPID_IOMNAVIGATOR_CONNECTIONSPEED                       DISPID_NAVIGATOR+17
#define DISPID_IOMNAVIGATOR_ONLINE                                DISPID_NAVIGATOR+18
#define DISPID_IOMNAVIGATOR_USERPROFILE                           DISPID_NAVIGATOR+19

//    DISPIDs for interface INavigatorGeolocation

#define DISPID_INAVIGATORGEOLOCATION_GEOLOCATION                  DISPID_NAVIGATOR+20

//    DISPIDs for interface INavigatorDoNotTrack

#define DISPID_INAVIGATORDONOTTRACK_MSDONOTTRACK                  DISPID_NAVIGATOR+21

//    DISPIDs for interface IHTMLLocation

#define DISPID_IHTMLLOCATION_HREF                                 DISPID_VALUE
#define DISPID_IHTMLLOCATION_PROTOCOL                             DISPID_LOCATION
#define DISPID_IHTMLLOCATION_HOST                                 DISPID_LOCATION+1
#define DISPID_IHTMLLOCATION_HOSTNAME                             DISPID_LOCATION+2
#define DISPID_IHTMLLOCATION_PORT                                 DISPID_LOCATION+3
#define DISPID_IHTMLLOCATION_PATHNAME                             DISPID_LOCATION+4
#define DISPID_IHTMLLOCATION_SEARCH                               DISPID_LOCATION+5
#define DISPID_IHTMLLOCATION_HASH                                 DISPID_LOCATION+6
#define DISPID_IHTMLLOCATION_RELOAD                               DISPID_LOCATION+7
#define DISPID_IHTMLLOCATION_REPLACE                              DISPID_LOCATION+8
#define DISPID_IHTMLLOCATION_ASSIGN                               DISPID_LOCATION+9
#define DISPID_IHTMLLOCATION_TOSTRING                             DISPID_LOCATION+10

//    DISPIDs for interface IHTMLMimeTypesCollection

#define DISPID_IHTMLMIMETYPESCOLLECTION_LENGTH                    1

//    DISPIDs for interface IHTMLPluginsCollection

#define DISPID_IHTMLPLUGINSCOLLECTION_LENGTH                      1
#define DISPID_IHTMLPLUGINSCOLLECTION_REFRESH                     2

//    DISPIDs for interface IHTMLBookmarkCollection

#define DISPID_IHTMLBOOKMARKCOLLECTION_LENGTH                     DISPID_OPTIONS_COL+1
#define DISPID_IHTMLBOOKMARKCOLLECTION__NEWENUM                   DISPID_NEWENUM
#define DISPID_IHTMLBOOKMARKCOLLECTION_ITEM                       DISPID_VALUE

//    DISPIDs for interface IHTMLDataTransfer

#define DISPID_IHTMLDATATRANSFER_SETDATA                          DISPID_DATATRANSFER+1
#define DISPID_IHTMLDATATRANSFER_GETDATA                          DISPID_DATATRANSFER+2
#define DISPID_IHTMLDATATRANSFER_CLEARDATA                        DISPID_DATATRANSFER+3
#define DISPID_IHTMLDATATRANSFER_DROPEFFECT                       DISPID_DATATRANSFER+4
#define DISPID_IHTMLDATATRANSFER_EFFECTALLOWED                    DISPID_DATATRANSFER+5

//    DISPIDs for interface IHTMLEventObj

#define DISPID_IHTMLEVENTOBJ_SRCELEMENT                           DISPID_EVENTOBJ+1
#define DISPID_IHTMLEVENTOBJ_ALTKEY                               DISPID_EVENTOBJ+2
#define DISPID_IHTMLEVENTOBJ_CTRLKEY                              DISPID_EVENTOBJ+3
#define DISPID_IHTMLEVENTOBJ_SHIFTKEY                             DISPID_EVENTOBJ+4
#define DISPID_IHTMLEVENTOBJ_RETURNVALUE                          DISPID_EVENTOBJ+7
#define DISPID_IHTMLEVENTOBJ_CANCELBUBBLE                         DISPID_EVENTOBJ+8
#define DISPID_IHTMLEVENTOBJ_FROMELEMENT                          DISPID_EVENTOBJ+9
#define DISPID_IHTMLEVENTOBJ_TOELEMENT                            DISPID_EVENTOBJ+10
#define DISPID_IHTMLEVENTOBJ_KEYCODE                              DISPID_EVENTOBJ+11
#define DISPID_IHTMLEVENTOBJ_BUTTON                               DISPID_EVENTOBJ+12
#define DISPID_IHTMLEVENTOBJ_TYPE                                 DISPID_EVENTOBJ+13
#define DISPID_IHTMLEVENTOBJ_QUALIFIER                            DISPID_EVENTOBJ+14
#define DISPID_IHTMLEVENTOBJ_REASON                               DISPID_EVENTOBJ+15
#define DISPID_IHTMLEVENTOBJ_X                                    DISPID_EVENTOBJ+5
#define DISPID_IHTMLEVENTOBJ_Y                                    DISPID_EVENTOBJ+6
#define DISPID_IHTMLEVENTOBJ_CLIENTX                              DISPID_EVENTOBJ+20
#define DISPID_IHTMLEVENTOBJ_CLIENTY                              DISPID_EVENTOBJ+21
#define DISPID_IHTMLEVENTOBJ_OFFSETX                              DISPID_EVENTOBJ+22
#define DISPID_IHTMLEVENTOBJ_OFFSETY                              DISPID_EVENTOBJ+23
#define DISPID_IHTMLEVENTOBJ_SCREENX                              DISPID_EVENTOBJ+24
#define DISPID_IHTMLEVENTOBJ_SCREENY                              DISPID_EVENTOBJ+25
#define DISPID_IHTMLEVENTOBJ_SRCFILTER                            DISPID_EVENTOBJ+26

//    DISPIDs for interface IHTMLEventObj2

#define DISPID_IHTMLEVENTOBJ2_SETATTRIBUTE                        DISPID_HTMLOBJECT+1
#define DISPID_IHTMLEVENTOBJ2_GETATTRIBUTE                        DISPID_HTMLOBJECT+2
#define DISPID_IHTMLEVENTOBJ2_REMOVEATTRIBUTE                     DISPID_HTMLOBJECT+3
#define DISPID_IHTMLEVENTOBJ2_PROPERTYNAME                        DISPID_EVENTOBJ+27
#define DISPID_IHTMLEVENTOBJ2_BOOKMARKS                           DISPID_EVENTOBJ+31
#define DISPID_IHTMLEVENTOBJ2_RECORDSET                           DISPID_EVENTOBJ+32
#define DISPID_IHTMLEVENTOBJ2_DATAFLD                             DISPID_EVENTOBJ+33
#define DISPID_IHTMLEVENTOBJ2_BOUNDELEMENTS                       DISPID_EVENTOBJ+34
#define DISPID_IHTMLEVENTOBJ2_REPEAT                              DISPID_EVENTOBJ+35
#define DISPID_IHTMLEVENTOBJ2_SRCURN                              DISPID_EVENTOBJ+36
#define DISPID_IHTMLEVENTOBJ2_SRCELEMENT                          DISPID_EVENTOBJ+1
#define DISPID_IHTMLEVENTOBJ2_ALTKEY                              DISPID_EVENTOBJ+2
#define DISPID_IHTMLEVENTOBJ2_CTRLKEY                             DISPID_EVENTOBJ+3
#define DISPID_IHTMLEVENTOBJ2_SHIFTKEY                            DISPID_EVENTOBJ+4
#define DISPID_IHTMLEVENTOBJ2_FROMELEMENT                         DISPID_EVENTOBJ+9
#define DISPID_IHTMLEVENTOBJ2_TOELEMENT                           DISPID_EVENTOBJ+10
#define DISPID_IHTMLEVENTOBJ2_BUTTON                              DISPID_EVENTOBJ+12
#define DISPID_IHTMLEVENTOBJ2_TYPE                                DISPID_EVENTOBJ+13
#define DISPID_IHTMLEVENTOBJ2_QUALIFIER                           DISPID_EVENTOBJ+14
#define DISPID_IHTMLEVENTOBJ2_REASON                              DISPID_EVENTOBJ+15
#define DISPID_IHTMLEVENTOBJ2_X                                   DISPID_EVENTOBJ+5
#define DISPID_IHTMLEVENTOBJ2_Y                                   DISPID_EVENTOBJ+6
#define DISPID_IHTMLEVENTOBJ2_CLIENTX                             DISPID_EVENTOBJ+20
#define DISPID_IHTMLEVENTOBJ2_CLIENTY                             DISPID_EVENTOBJ+21
#define DISPID_IHTMLEVENTOBJ2_OFFSETX                             DISPID_EVENTOBJ+22
#define DISPID_IHTMLEVENTOBJ2_OFFSETY                             DISPID_EVENTOBJ+23
#define DISPID_IHTMLEVENTOBJ2_SCREENX                             DISPID_EVENTOBJ+24
#define DISPID_IHTMLEVENTOBJ2_SCREENY                             DISPID_EVENTOBJ+25
#define DISPID_IHTMLEVENTOBJ2_SRCFILTER                           DISPID_EVENTOBJ+26
#define DISPID_IHTMLEVENTOBJ2_DATATRANSFER                        DISPID_EVENTOBJ+37

//    DISPIDs for interface IHTMLEventObj3

#define DISPID_IHTMLEVENTOBJ3_CONTENTOVERFLOW                     DISPID_EVENTOBJ+38
#define DISPID_IHTMLEVENTOBJ3_SHIFTLEFT                           DISPID_EVENTOBJ+39
#define DISPID_IHTMLEVENTOBJ3_ALTLEFT                             DISPID_EVENTOBJ+40
#define DISPID_IHTMLEVENTOBJ3_CTRLLEFT                            DISPID_EVENTOBJ+41
#define DISPID_IHTMLEVENTOBJ3_IMECOMPOSITIONCHANGE                DISPID_EVENTOBJ+42
#define DISPID_IHTMLEVENTOBJ3_IMENOTIFYCOMMAND                    DISPID_EVENTOBJ+43
#define DISPID_IHTMLEVENTOBJ3_IMENOTIFYDATA                       DISPID_EVENTOBJ+44
#define DISPID_IHTMLEVENTOBJ3_IMEREQUEST                          DISPID_EVENTOBJ+46
#define DISPID_IHTMLEVENTOBJ3_IMEREQUESTDATA                      DISPID_EVENTOBJ+47
#define DISPID_IHTMLEVENTOBJ3_KEYBOARDLAYOUT                      DISPID_EVENTOBJ+45
#define DISPID_IHTMLEVENTOBJ3_BEHAVIORCOOKIE                      DISPID_EVENTOBJ+48
#define DISPID_IHTMLEVENTOBJ3_BEHAVIORPART                        DISPID_EVENTOBJ+49
#define DISPID_IHTMLEVENTOBJ3_NEXTPAGE                            DISPID_EVENTOBJ+50

//    DISPIDs for interface IHTMLEventObj4

#define DISPID_IHTMLEVENTOBJ4_WHEELDELTA                          DISPID_EVENTOBJ+51

//    DISPIDs for interface IHTMLEventObj5

#define DISPID_IHTMLEVENTOBJ5_URL                                 DISPID_EVENTOBJ+52
#define DISPID_IHTMLEVENTOBJ5_DATA                                DISPID_EVENTOBJ+54
#define DISPID_IHTMLEVENTOBJ5_SOURCE                              DISPID_EVENTOBJ+55
#define DISPID_IHTMLEVENTOBJ5_ORIGIN                              DISPID_EVENTOBJ+53
#define DISPID_IHTMLEVENTOBJ5_ISSESSION                           DISPID_EVENTOBJ+56

//    DISPIDs for interface IHTMLEventObj6

#define DISPID_IHTMLEVENTOBJ6_ACTIONURL                           DISPID_EVENTOBJ+58
#define DISPID_IHTMLEVENTOBJ6_BUTTONID                            DISPID_EVENTOBJ+57

//    DISPIDs for interface IHTMLStyleMedia

#define DISPID_IHTMLSTYLEMEDIA_TYPE                               DISPID_STYLEMEDIA+1
#define DISPID_IHTMLSTYLEMEDIA_MATCHMEDIUM                        DISPID_STYLEMEDIA+2

//    DISPIDs for interface IHTMLFramesCollection2

#define DISPID_IHTMLFRAMESCOLLECTION2_ITEM                        0
#define DISPID_IHTMLFRAMESCOLLECTION2_LENGTH                      1001

//    DISPIDs for interface IHTMLScreen

#define DISPID_IHTMLSCREEN_COLORDEPTH                             DISPID_SCREEN+1
#define DISPID_IHTMLSCREEN_BUFFERDEPTH                            DISPID_SCREEN+2
#define DISPID_IHTMLSCREEN_WIDTH                                  DISPID_SCREEN+3
#define DISPID_IHTMLSCREEN_HEIGHT                                 DISPID_SCREEN+4
#define DISPID_IHTMLSCREEN_UPDATEINTERVAL                         DISPID_SCREEN+5
#define DISPID_IHTMLSCREEN_AVAILHEIGHT                            DISPID_SCREEN+6
#define DISPID_IHTMLSCREEN_AVAILWIDTH                             DISPID_SCREEN+7
#define DISPID_IHTMLSCREEN_FONTSMOOTHINGENABLED                   DISPID_SCREEN+8

//    DISPIDs for interface IHTMLScreen2

#define DISPID_IHTMLSCREEN2_LOGICALXDPI                           DISPID_SCREEN+9
#define DISPID_IHTMLSCREEN2_LOGICALYDPI                           DISPID_SCREEN+10
#define DISPID_IHTMLSCREEN2_DEVICEXDPI                            DISPID_SCREEN+11
#define DISPID_IHTMLSCREEN2_DEVICEYDPI                            DISPID_SCREEN+12

//    DISPIDs for interface IHTMLScreen3

#define DISPID_IHTMLSCREEN3_SYSTEMXDPI                            DISPID_SCREEN+13
#define DISPID_IHTMLSCREEN3_SYSTEMYDPI                            DISPID_SCREEN+14

//    DISPIDs for interface IHTMLScreen4

#define DISPID_IHTMLSCREEN4_PIXELDEPTH                            DISPID_SCREEN+15

//    DISPIDs for interface IHTMLWindow2

#define DISPID_IHTMLWINDOW2_FRAMES                                1100
#define DISPID_IHTMLWINDOW2_DEFAULTSTATUS                         1101
#define DISPID_IHTMLWINDOW2_STATUS                                1102
#define DISPID_IHTMLWINDOW2_SETTIMEOUT                            1172
#define DISPID_IHTMLWINDOW2_CLEARTIMEOUT                          1104
#define DISPID_IHTMLWINDOW2_ALERT                                 1105
#define DISPID_IHTMLWINDOW2_CONFIRM                               1110
#define DISPID_IHTMLWINDOW2_PROMPT                                1111
#define DISPID_IHTMLWINDOW2_IMAGE                                 1125
#define DISPID_IHTMLWINDOW2_LOCATION                              14
#define DISPID_IHTMLWINDOW2_HISTORY                               2
#define DISPID_IHTMLWINDOW2_CLOSE                                 3
#define DISPID_IHTMLWINDOW2_OPENER                                4
#define DISPID_IHTMLWINDOW2_NAVIGATOR                             5
#define DISPID_IHTMLWINDOW2_NAME                                  11
#define DISPID_IHTMLWINDOW2_PARENT                                12
#define DISPID_IHTMLWINDOW2_OPEN                                  13
#define DISPID_IHTMLWINDOW2_SELF                                  20
#define DISPID_IHTMLWINDOW2_TOP                                   21
#define DISPID_IHTMLWINDOW2_WINDOW                                22
#define DISPID_IHTMLWINDOW2_NAVIGATE                              25
#define DISPID_IHTMLWINDOW2_ONFOCUS                               DISPID_EVPROP_ONFOCUS
#define DISPID_IHTMLWINDOW2_ONBLUR                                DISPID_EVPROP_ONBLUR
#define DISPID_IHTMLWINDOW2_ONLOAD                                DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLWINDOW2_ONBEFOREUNLOAD                        DISPID_EVPROP_ONBEFOREUNLOAD
#define DISPID_IHTMLWINDOW2_ONUNLOAD                              DISPID_EVPROP_ONUNLOAD
#define DISPID_IHTMLWINDOW2_ONHELP                                DISPID_EVPROP_ONHELP
#define DISPID_IHTMLWINDOW2_ONERROR                               DISPID_EVPROP_ONERROR
#define DISPID_IHTMLWINDOW2_ONRESIZE                              DISPID_EVPROP_ONRESIZE
#define DISPID_IHTMLWINDOW2_ONSCROLL                              DISPID_EVPROP_ONSCROLL
#define DISPID_IHTMLWINDOW2_DOCUMENT                              1151
#define DISPID_IHTMLWINDOW2_EVENT                                 1152
#define DISPID_IHTMLWINDOW2__NEWENUM                              1153
#define DISPID_IHTMLWINDOW2_SHOWMODALDIALOG                       1154
#define DISPID_IHTMLWINDOW2_SHOWHELP                              1155
#define DISPID_IHTMLWINDOW2_SCREEN                                1156
#define DISPID_IHTMLWINDOW2_OPTION                                1157
#define DISPID_IHTMLWINDOW2_FOCUS                                 1158
#define DISPID_IHTMLWINDOW2_CLOSED                                23
#define DISPID_IHTMLWINDOW2_BLUR                                  1159
#define DISPID_IHTMLWINDOW2_SCROLL                                1160
#define DISPID_IHTMLWINDOW2_CLIENTINFORMATION                     1161
#define DISPID_IHTMLWINDOW2_SETINTERVAL                           1173
#define DISPID_IHTMLWINDOW2_CLEARINTERVAL                         1163
#define DISPID_IHTMLWINDOW2_OFFSCREENBUFFERING                    1164
#define DISPID_IHTMLWINDOW2_EXECSCRIPT                            1165
#define DISPID_IHTMLWINDOW2_TOSTRING                              1166
#define DISPID_IHTMLWINDOW2_SCROLLBY                              1167
#define DISPID_IHTMLWINDOW2_SCROLLTO                              1168
#define DISPID_IHTMLWINDOW2_MOVETO                                6
#define DISPID_IHTMLWINDOW2_MOVEBY                                7
#define DISPID_IHTMLWINDOW2_RESIZETO                              9
#define DISPID_IHTMLWINDOW2_RESIZEBY                              8
#define DISPID_IHTMLWINDOW2_EXTERNAL                              1169

//    DISPIDs for interface IHTMLWindow3

#define DISPID_IHTMLWINDOW3_SCREENLEFT                            1170
#define DISPID_IHTMLWINDOW3_SCREENTOP                             1171
#define DISPID_IHTMLWINDOW3_ATTACHEVENT                           DISPID_HTMLOBJECT+7
#define DISPID_IHTMLWINDOW3_DETACHEVENT                           DISPID_HTMLOBJECT+8
#define DISPID_IHTMLWINDOW3_SETTIMEOUT                            1103
#define DISPID_IHTMLWINDOW3_SETINTERVAL                           1162
#define DISPID_IHTMLWINDOW3_PRINT                                 1174
#define DISPID_IHTMLWINDOW3_ONBEFOREPRINT                         DISPID_EVPROP_ONBEFOREPRINT
#define DISPID_IHTMLWINDOW3_ONAFTERPRINT                          DISPID_EVPROP_ONAFTERPRINT
#define DISPID_IHTMLWINDOW3_CLIPBOARDDATA                         1175
#define DISPID_IHTMLWINDOW3_SHOWMODELESSDIALOG                    1176

//    DISPIDs for interface IHTMLWindow4

#define DISPID_IHTMLWINDOW4_CREATEPOPUP                           1180
#define DISPID_IHTMLWINDOW4_FRAMEELEMENT                          1181

//    DISPIDs for interface IHTMLWindow5

#define DISPID_IHTMLWINDOW5_XMLHTTPREQUEST                        1190

//    DISPIDs for interface IHTMLWindow6

#define DISPID_IHTMLWINDOW6_XDOMAINREQUEST                        1191
#define DISPID_IHTMLWINDOW6_SESSIONSTORAGE                        1192
#define DISPID_IHTMLWINDOW6_LOCALSTORAGE                          1193
#define DISPID_IHTMLWINDOW6_ONHASHCHANGE                          DISPID_EVPROP_ONHASHCHANGE
#define DISPID_IHTMLWINDOW6_MAXCONNECTIONSPERSERVER               1194
#define DISPID_IHTMLWINDOW6_POSTMESSAGE                           1196
#define DISPID_IHTMLWINDOW6_TOSTATICHTML                          1197
#define DISPID_IHTMLWINDOW6_ONMESSAGE                             DISPID_EVPROP_ONMESSAGE
#define DISPID_IHTMLWINDOW6_MSWRITEPROFILERMARK                   1198

//    DISPIDs for interface IHTMLWindow7

#define DISPID_IHTMLWINDOW7_GETSELECTION                          1199
#define DISPID_IHTMLWINDOW7_GETCOMPUTEDSTYLE                      1200
#define DISPID_IHTMLWINDOW7_STYLEMEDIA                            1202
#define DISPID_IHTMLWINDOW7_PERFORMANCE                           1203
#define DISPID_IHTMLWINDOW7_INNERWIDTH                            1204
#define DISPID_IHTMLWINDOW7_INNERHEIGHT                           1205
#define DISPID_IHTMLWINDOW7_PAGEXOFFSET                           1206
#define DISPID_IHTMLWINDOW7_PAGEYOFFSET                           1207
#define DISPID_IHTMLWINDOW7_SCREENX                               1208
#define DISPID_IHTMLWINDOW7_SCREENY                               1209
#define DISPID_IHTMLWINDOW7_OUTERWIDTH                            1210
#define DISPID_IHTMLWINDOW7_OUTERHEIGHT                           1211
#define DISPID_IHTMLWINDOW7_ONABORT                               DISPID_EVPROP_ONABORT
#define DISPID_IHTMLWINDOW7_ONCANPLAY                             DISPID_EVPROP_CANPLAY
#define DISPID_IHTMLWINDOW7_ONCANPLAYTHROUGH                      DISPID_EVPROP_CANPLAYTHROUGH
#define DISPID_IHTMLWINDOW7_ONCHANGE                              DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLWINDOW7_ONCLICK                               DISPID_EVPROP_ONCLICK
#define DISPID_IHTMLWINDOW7_ONCONTEXTMENU                         DISPID_EVPROP_ONCONTEXTMENU
#define DISPID_IHTMLWINDOW7_ONDBLCLICK                            DISPID_EVPROP_ONDBLCLICK
#define DISPID_IHTMLWINDOW7_ONDRAG                                DISPID_EVPROP_ONDRAG
#define DISPID_IHTMLWINDOW7_ONDRAGEND                             DISPID_EVPROP_ONDRAGEND
#define DISPID_IHTMLWINDOW7_ONDRAGENTER                           DISPID_EVPROP_ONDRAGENTER
#define DISPID_IHTMLWINDOW7_ONDRAGLEAVE                           DISPID_EVPROP_ONDRAGLEAVE
#define DISPID_IHTMLWINDOW7_ONDRAGOVER                            DISPID_EVPROP_ONDRAGOVER
#define DISPID_IHTMLWINDOW7_ONDRAGSTART                           DISPID_EVPROP_ONDRAGSTART
#define DISPID_IHTMLWINDOW7_ONDROP                                DISPID_EVPROP_ONDROP
#define DISPID_IHTMLWINDOW7_ONDURATIONCHANGE                      DISPID_EVPROP_DURATIONCHANGE
#define DISPID_IHTMLWINDOW7_ONFOCUSIN                             DISPID_EVPROP_ONFOCUSIN
#define DISPID_IHTMLWINDOW7_ONFOCUSOUT                            DISPID_EVPROP_ONFOCUSOUT
#define DISPID_IHTMLWINDOW7_ONINPUT                               DISPID_EVPROP_INPUT
#define DISPID_IHTMLWINDOW7_ONEMPTIED                             DISPID_EVPROP_EMPTIED
#define DISPID_IHTMLWINDOW7_ONENDED                               DISPID_EVPROP_ENDED
#define DISPID_IHTMLWINDOW7_ONKEYDOWN                             DISPID_EVPROP_ONKEYDOWN
#define DISPID_IHTMLWINDOW7_ONKEYPRESS                            DISPID_EVPROP_ONKEYPRESS
#define DISPID_IHTMLWINDOW7_ONKEYUP                               DISPID_EVPROP_ONKEYUP
#define DISPID_IHTMLWINDOW7_ONLOADEDDATA                          DISPID_EVPROP_LOADEDDATA
#define DISPID_IHTMLWINDOW7_ONLOADEDMETADATA                      DISPID_EVPROP_LOADEDMETADATA
#define DISPID_IHTMLWINDOW7_ONLOADSTART                           DISPID_EVPROP_LOADSTART
#define DISPID_IHTMLWINDOW7_ONMOUSEDOWN                           DISPID_EVPROP_ONMOUSEDOWN
#define DISPID_IHTMLWINDOW7_ONMOUSEENTER                          DISPID_EVPROP_ONMOUSEENTER
#define DISPID_IHTMLWINDOW7_ONMOUSELEAVE                          DISPID_EVPROP_ONMOUSELEAVE
#define DISPID_IHTMLWINDOW7_ONMOUSEMOVE                           DISPID_EVPROP_ONMOUSEMOVE
#define DISPID_IHTMLWINDOW7_ONMOUSEOUT                            DISPID_EVPROP_ONMOUSEOUT
#define DISPID_IHTMLWINDOW7_ONMOUSEOVER                           DISPID_EVPROP_ONMOUSEOVER
#define DISPID_IHTMLWINDOW7_ONMOUSEUP                             DISPID_EVPROP_ONMOUSEUP
#define DISPID_IHTMLWINDOW7_ONMOUSEWHEEL                          DISPID_EVPROP_ONMOUSEWHEEL
#define DISPID_IHTMLWINDOW7_ONOFFLINE                             DISPID_EVPROP_ONOFFLINE
#define DISPID_IHTMLWINDOW7_ONONLINE                              DISPID_EVPROP_ONONLINE
#define DISPID_IHTMLWINDOW7_ONPROGRESS                            DISPID_EVPROP_PROGRESS
#define DISPID_IHTMLWINDOW7_ONRATECHANGE                          DISPID_EVPROP_RATECHANGE
#define DISPID_IHTMLWINDOW7_ONREADYSTATECHANGE                    DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLWINDOW7_ONRESET                               DISPID_EVPROP_ONRESET
#define DISPID_IHTMLWINDOW7_ONSEEKED                              DISPID_EVPROP_SEEKED
#define DISPID_IHTMLWINDOW7_ONSEEKING                             DISPID_EVPROP_SEEKING
#define DISPID_IHTMLWINDOW7_ONSELECT                              DISPID_EVPROP_ONSELECT
#define DISPID_IHTMLWINDOW7_ONSTALLED                             DISPID_EVPROP_STALLED
#define DISPID_IHTMLWINDOW7_ONSTORAGE                             DISPID_EVPROP_ONSTORAGE
#define DISPID_IHTMLWINDOW7_ONSUBMIT                              DISPID_EVPROP_ONSUBMIT
#define DISPID_IHTMLWINDOW7_ONSUSPEND                             DISPID_EVPROP_SUSPEND
#define DISPID_IHTMLWINDOW7_ONTIMEUPDATE                          DISPID_EVPROP_TIMEUPDATE
#define DISPID_IHTMLWINDOW7_ONPAUSE                               DISPID_EVPROP_PAUSE
#define DISPID_IHTMLWINDOW7_ONPLAY                                DISPID_EVPROP_PLAY
#define DISPID_IHTMLWINDOW7_ONPLAYING                             DISPID_EVPROP_PLAYING
#define DISPID_IHTMLWINDOW7_ONVOLUMECHANGE                        DISPID_EVPROP_VOLUMECHANGE
#define DISPID_IHTMLWINDOW7_ONWAITING                             DISPID_EVPROP_WAITING

//    DISPIDs for interface IHTMLWindow8

#define DISPID_IHTMLWINDOW8_ONMSPOINTERDOWN                       DISPID_EVPROP_ONMSPOINTERDOWN
#define DISPID_IHTMLWINDOW8_ONMSPOINTERMOVE                       DISPID_EVPROP_ONMSPOINTERMOVE
#define DISPID_IHTMLWINDOW8_ONMSPOINTERUP                         DISPID_EVPROP_ONMSPOINTERUP
#define DISPID_IHTMLWINDOW8_ONMSPOINTEROVER                       DISPID_EVPROP_ONMSPOINTEROVER
#define DISPID_IHTMLWINDOW8_ONMSPOINTEROUT                        DISPID_EVPROP_ONMSPOINTEROUT
#define DISPID_IHTMLWINDOW8_ONMSPOINTERCANCEL                     DISPID_EVPROP_ONMSPOINTERCANCEL
#define DISPID_IHTMLWINDOW8_ONMSPOINTERHOVER                      DISPID_EVPROP_ONMSPOINTERHOVER
#define DISPID_IHTMLWINDOW8_ONMSGESTURESTART                      DISPID_EVPROP_ONMSGESTURESTART
#define DISPID_IHTMLWINDOW8_ONMSGESTURECHANGE                     DISPID_EVPROP_ONMSGESTURECHANGE
#define DISPID_IHTMLWINDOW8_ONMSGESTUREEND                        DISPID_EVPROP_ONMSGESTUREEND
#define DISPID_IHTMLWINDOW8_ONMSGESTUREHOLD                       DISPID_EVPROP_ONMSGESTUREHOLD
#define DISPID_IHTMLWINDOW8_ONMSGESTURETAP                        DISPID_EVPROP_ONMSGESTURETAP
#define DISPID_IHTMLWINDOW8_ONMSGESTUREDOUBLETAP                  DISPID_EVPROP_ONMSGESTUREDOUBLETAP
#define DISPID_IHTMLWINDOW8_ONMSINERTIASTART                      DISPID_EVPROP_ONMSINERTIASTART
#define DISPID_IHTMLWINDOW8_APPLICATIONCACHE                      1213
#define DISPID_IHTMLWINDOW8_ONPOPSTATE                            DISPID_EVPROP_ONPOPSTATE

//    DISPIDs for event set HTMLWindowEvents3

#define DISPID_HTMLWINDOWEVENTS3_ONHASHCHANGE                     DISPID_EVMETH_ONHASHCHANGE
#define DISPID_HTMLWINDOWEVENTS3_ONMESSAGE                        DISPID_EVMETH_ONMESSAGE

//    DISPIDs for event set HTMLWindowEvents2

#define DISPID_HTMLWINDOWEVENTS2_ONLOAD                           DISPID_EVMETH_ONLOAD
#define DISPID_HTMLWINDOWEVENTS2_ONUNLOAD                         DISPID_EVMETH_ONUNLOAD
#define DISPID_HTMLWINDOWEVENTS2_ONHELP                           DISPID_EVMETH_ONHELP
#define DISPID_HTMLWINDOWEVENTS2_ONFOCUS                          DISPID_EVMETH_ONFOCUS
#define DISPID_HTMLWINDOWEVENTS2_ONBLUR                           DISPID_EVMETH_ONBLUR
#define DISPID_HTMLWINDOWEVENTS2_ONERROR                          DISPID_EVMETH_ONERROR
#define DISPID_HTMLWINDOWEVENTS2_ONRESIZE                         DISPID_EVMETH_ONRESIZE
#define DISPID_HTMLWINDOWEVENTS2_ONSCROLL                         DISPID_EVMETH_ONSCROLL
#define DISPID_HTMLWINDOWEVENTS2_ONBEFOREUNLOAD                   DISPID_EVMETH_ONBEFOREUNLOAD
#define DISPID_HTMLWINDOWEVENTS2_ONBEFOREPRINT                    DISPID_EVMETH_ONBEFOREPRINT
#define DISPID_HTMLWINDOWEVENTS2_ONAFTERPRINT                     DISPID_EVMETH_ONAFTERPRINT

//    DISPIDs for event set HTMLWindowEvents

#define DISPID_HTMLWINDOWEVENTS_ONLOAD                            DISPID_EVMETH_ONLOAD
#define DISPID_HTMLWINDOWEVENTS_ONUNLOAD                          DISPID_EVMETH_ONUNLOAD
#define DISPID_HTMLWINDOWEVENTS_ONHELP                            DISPID_EVMETH_ONHELP
#define DISPID_HTMLWINDOWEVENTS_ONFOCUS                           DISPID_EVMETH_ONFOCUS
#define DISPID_HTMLWINDOWEVENTS_ONBLUR                            DISPID_EVMETH_ONBLUR
#define DISPID_HTMLWINDOWEVENTS_ONERROR                           DISPID_EVMETH_ONERROR
#define DISPID_HTMLWINDOWEVENTS_ONRESIZE                          DISPID_EVMETH_ONRESIZE
#define DISPID_HTMLWINDOWEVENTS_ONSCROLL                          DISPID_EVMETH_ONSCROLL
#define DISPID_HTMLWINDOWEVENTS_ONBEFOREUNLOAD                    DISPID_EVMETH_ONBEFOREUNLOAD
#define DISPID_HTMLWINDOWEVENTS_ONBEFOREPRINT                     DISPID_EVMETH_ONBEFOREPRINT
#define DISPID_HTMLWINDOWEVENTS_ONAFTERPRINT                      DISPID_EVMETH_ONAFTERPRINT

//    DISPIDs for interface IHTMLDocumentCompatibleInfo

#define DISPID_IHTMLDOCUMENTCOMPATIBLEINFO_USERAGENT              DISPID_DOCUMENTCOMPATIBLEINFO+1
#define DISPID_IHTMLDOCUMENTCOMPATIBLEINFO_VERSION                DISPID_DOCUMENTCOMPATIBLEINFO+2

//    DISPIDs for interface IHTMLDocumentCompatibleInfoCollection

#define DISPID_IHTMLDOCUMENTCOMPATIBLEINFOCOLLECTION_LENGTH       DISPID_DOCUMENTCOMPATIBLEINFO_COLLECTION+1
#define DISPID_IHTMLDOCUMENTCOMPATIBLEINFOCOLLECTION_ITEM         DISPID_VALUE

//    DISPIDs for interface IHTMLDocument

#define DISPID_IHTMLDOCUMENT_SCRIPT                               DISPID_OMDOCUMENT+1

//    DISPIDs for interface IHTMLDocument2

#define DISPID_IHTMLDOCUMENT2_ALL                                 DISPID_OMDOCUMENT+3
#define DISPID_IHTMLDOCUMENT2_BODY                                DISPID_OMDOCUMENT+4
#define DISPID_IHTMLDOCUMENT2_ACTIVEELEMENT                       DISPID_OMDOCUMENT+5
#define DISPID_IHTMLDOCUMENT2_IMAGES                              DISPID_OMDOCUMENT+11
#define DISPID_IHTMLDOCUMENT2_APPLETS                             DISPID_OMDOCUMENT+8
#define DISPID_IHTMLDOCUMENT2_LINKS                               DISPID_OMDOCUMENT+9
#define DISPID_IHTMLDOCUMENT2_FORMS                               DISPID_OMDOCUMENT+10
#define DISPID_IHTMLDOCUMENT2_ANCHORS                             DISPID_OMDOCUMENT+7
#define DISPID_IHTMLDOCUMENT2_TITLE                               DISPID_OMDOCUMENT+12
#define DISPID_IHTMLDOCUMENT2_SCRIPTS                             DISPID_OMDOCUMENT+13
#define DISPID_IHTMLDOCUMENT2_DESIGNMODE                          DISPID_OMDOCUMENT+14
#define DISPID_IHTMLDOCUMENT2_SELECTION                           DISPID_OMDOCUMENT+17
#define DISPID_IHTMLDOCUMENT2_READYSTATE                          DISPID_OMDOCUMENT+18
#define DISPID_IHTMLDOCUMENT2_FRAMES                              DISPID_OMDOCUMENT+19
#define DISPID_IHTMLDOCUMENT2_EMBEDS                              DISPID_OMDOCUMENT+15
#define DISPID_IHTMLDOCUMENT2_PLUGINS                             DISPID_OMDOCUMENT+21
#define DISPID_IHTMLDOCUMENT2_ALINKCOLOR                          DISPID_OMDOCUMENT+22
#define DISPID_IHTMLDOCUMENT2_BGCOLOR                             DISPID_BACKCOLOR
#define DISPID_IHTMLDOCUMENT2_FGCOLOR                             DISPID_A_COLOR
#define DISPID_IHTMLDOCUMENT2_LINKCOLOR                           DISPID_OMDOCUMENT+24
#define DISPID_IHTMLDOCUMENT2_VLINKCOLOR                          DISPID_OMDOCUMENT+23
#define DISPID_IHTMLDOCUMENT2_REFERRER                            DISPID_OMDOCUMENT+27
#define DISPID_IHTMLDOCUMENT2_LOCATION                            DISPID_OMDOCUMENT+26
#define DISPID_IHTMLDOCUMENT2_LASTMODIFIED                        DISPID_OMDOCUMENT+28
#define DISPID_IHTMLDOCUMENT2_URL                                 DISPID_OMDOCUMENT+25
#define DISPID_IHTMLDOCUMENT2_DOMAIN                              DISPID_OMDOCUMENT+29
#define DISPID_IHTMLDOCUMENT2_COOKIE                              DISPID_OMDOCUMENT+30
#define DISPID_IHTMLDOCUMENT2_EXPANDO                             DISPID_OMDOCUMENT+31
#define DISPID_IHTMLDOCUMENT2_CHARSET                             DISPID_OMDOCUMENT+32
#define DISPID_IHTMLDOCUMENT2_DEFAULTCHARSET                      DISPID_OMDOCUMENT+33
#define DISPID_IHTMLDOCUMENT2_MIMETYPE                            DISPID_OMDOCUMENT+41
#define DISPID_IHTMLDOCUMENT2_FILESIZE                            DISPID_OMDOCUMENT+42
#define DISPID_IHTMLDOCUMENT2_FILECREATEDDATE                     DISPID_OMDOCUMENT+43
#define DISPID_IHTMLDOCUMENT2_FILEMODIFIEDDATE                    DISPID_OMDOCUMENT+44
#define DISPID_IHTMLDOCUMENT2_FILEUPDATEDDATE                     DISPID_OMDOCUMENT+45
#define DISPID_IHTMLDOCUMENT2_SECURITY                            DISPID_OMDOCUMENT+46
#define DISPID_IHTMLDOCUMENT2_PROTOCOL                            DISPID_OMDOCUMENT+47
#define DISPID_IHTMLDOCUMENT2_NAMEPROP                            DISPID_OMDOCUMENT+48
#define DISPID_IHTMLDOCUMENT2_WRITE                               DISPID_OMDOCUMENT+54
#define DISPID_IHTMLDOCUMENT2_WRITELN                             DISPID_OMDOCUMENT+55
#define DISPID_IHTMLDOCUMENT2_OPEN                                DISPID_OMDOCUMENT+56
#define DISPID_IHTMLDOCUMENT2_CLOSE                               DISPID_OMDOCUMENT+57
#define DISPID_IHTMLDOCUMENT2_CLEAR                               DISPID_OMDOCUMENT+58
#define DISPID_IHTMLDOCUMENT2_QUERYCOMMANDSUPPORTED               DISPID_OMDOCUMENT+59
#define DISPID_IHTMLDOCUMENT2_QUERYCOMMANDENABLED                 DISPID_OMDOCUMENT+60
#define DISPID_IHTMLDOCUMENT2_QUERYCOMMANDSTATE                   DISPID_OMDOCUMENT+61
#define DISPID_IHTMLDOCUMENT2_QUERYCOMMANDINDETERM                DISPID_OMDOCUMENT+62
#define DISPID_IHTMLDOCUMENT2_QUERYCOMMANDTEXT                    DISPID_OMDOCUMENT+63
#define DISPID_IHTMLDOCUMENT2_QUERYCOMMANDVALUE                   DISPID_OMDOCUMENT+64
#define DISPID_IHTMLDOCUMENT2_EXECCOMMAND                         DISPID_OMDOCUMENT+65
#define DISPID_IHTMLDOCUMENT2_EXECCOMMANDSHOWHELP                 DISPID_OMDOCUMENT+66
#define DISPID_IHTMLDOCUMENT2_CREATEELEMENT                       DISPID_OMDOCUMENT+67
#define DISPID_IHTMLDOCUMENT2_ONHELP                              DISPID_EVPROP_ONHELP
#define DISPID_IHTMLDOCUMENT2_ONCLICK                             DISPID_EVPROP_ONCLICK
#define DISPID_IHTMLDOCUMENT2_ONDBLCLICK                          DISPID_EVPROP_ONDBLCLICK
#define DISPID_IHTMLDOCUMENT2_ONKEYUP                             DISPID_EVPROP_ONKEYUP
#define DISPID_IHTMLDOCUMENT2_ONKEYDOWN                           DISPID_EVPROP_ONKEYDOWN
#define DISPID_IHTMLDOCUMENT2_ONKEYPRESS                          DISPID_EVPROP_ONKEYPRESS
#define DISPID_IHTMLDOCUMENT2_ONMOUSEUP                           DISPID_EVPROP_ONMOUSEUP
#define DISPID_IHTMLDOCUMENT2_ONMOUSEDOWN                         DISPID_EVPROP_ONMOUSEDOWN
#define DISPID_IHTMLDOCUMENT2_ONMOUSEMOVE                         DISPID_EVPROP_ONMOUSEMOVE
#define DISPID_IHTMLDOCUMENT2_ONMOUSEOUT                          DISPID_EVPROP_ONMOUSEOUT
#define DISPID_IHTMLDOCUMENT2_ONMOUSEOVER                         DISPID_EVPROP_ONMOUSEOVER
#define DISPID_IHTMLDOCUMENT2_ONREADYSTATECHANGE                  DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLDOCUMENT2_ONAFTERUPDATE                       DISPID_EVPROP_ONAFTERUPDATE
#define DISPID_IHTMLDOCUMENT2_ONROWEXIT                           DISPID_EVPROP_ONROWEXIT
#define DISPID_IHTMLDOCUMENT2_ONROWENTER                          DISPID_EVPROP_ONROWENTER
#define DISPID_IHTMLDOCUMENT2_ONDRAGSTART                         DISPID_EVPROP_ONDRAGSTART
#define DISPID_IHTMLDOCUMENT2_ONSELECTSTART                       DISPID_EVPROP_ONSELECTSTART
#define DISPID_IHTMLDOCUMENT2_ELEMENTFROMPOINT                    DISPID_OMDOCUMENT+68
#define DISPID_IHTMLDOCUMENT2_PARENTWINDOW                        DISPID_OMDOCUMENT+34
#define DISPID_IHTMLDOCUMENT2_STYLESHEETS                         DISPID_OMDOCUMENT+69
#define DISPID_IHTMLDOCUMENT2_ONBEFOREUPDATE                      DISPID_EVPROP_ONBEFOREUPDATE
#define DISPID_IHTMLDOCUMENT2_ONERRORUPDATE                       DISPID_EVPROP_ONERRORUPDATE
#define DISPID_IHTMLDOCUMENT2_TOSTRING                            DISPID_OMDOCUMENT+70
#define DISPID_IHTMLDOCUMENT2_CREATESTYLESHEET                    DISPID_OMDOCUMENT+71

//    DISPIDs for interface IHTMLDocument3

#define DISPID_IHTMLDOCUMENT3_RELEASECAPTURE                      DISPID_OMDOCUMENT+72
#define DISPID_IHTMLDOCUMENT3_RECALC                              DISPID_OMDOCUMENT+73
#define DISPID_IHTMLDOCUMENT3_CREATETEXTNODE                      DISPID_OMDOCUMENT+74
#define DISPID_IHTMLDOCUMENT3_DOCUMENTELEMENT                     DISPID_OMDOCUMENT+75
#define DISPID_IHTMLDOCUMENT3_UNIQUEID                            DISPID_OMDOCUMENT+77
#define DISPID_IHTMLDOCUMENT3_ATTACHEVENT                         DISPID_HTMLOBJECT+7
#define DISPID_IHTMLDOCUMENT3_DETACHEVENT                         DISPID_HTMLOBJECT+8
#define DISPID_IHTMLDOCUMENT3_ONROWSDELETE                        DISPID_EVPROP_ONROWSDELETE
#define DISPID_IHTMLDOCUMENT3_ONROWSINSERTED                      DISPID_EVPROP_ONROWSINSERTED
#define DISPID_IHTMLDOCUMENT3_ONCELLCHANGE                        DISPID_EVPROP_ONCELLCHANGE
#define DISPID_IHTMLDOCUMENT3_ONDATASETCHANGED                    DISPID_EVPROP_ONDATASETCHANGED
#define DISPID_IHTMLDOCUMENT3_ONDATAAVAILABLE                     DISPID_EVPROP_ONDATAAVAILABLE
#define DISPID_IHTMLDOCUMENT3_ONDATASETCOMPLETE                   DISPID_EVPROP_ONDATASETCOMPLETE
#define DISPID_IHTMLDOCUMENT3_ONPROPERTYCHANGE                    DISPID_EVPROP_ONPROPERTYCHANGE
#define DISPID_IHTMLDOCUMENT3_DIR                                 DISPID_A_DIR
#define DISPID_IHTMLDOCUMENT3_ONCONTEXTMENU                       DISPID_EVPROP_ONCONTEXTMENU
#define DISPID_IHTMLDOCUMENT3_ONSTOP                              DISPID_EVPROP_ONSTOP
#define DISPID_IHTMLDOCUMENT3_CREATEDOCUMENTFRAGMENT              DISPID_OMDOCUMENT+76
#define DISPID_IHTMLDOCUMENT3_PARENTDOCUMENT                      DISPID_OMDOCUMENT+78
#define DISPID_IHTMLDOCUMENT3_ENABLEDOWNLOAD                      DISPID_OMDOCUMENT+79
#define DISPID_IHTMLDOCUMENT3_BASEURL                             DISPID_OMDOCUMENT+80
#define DISPID_IHTMLDOCUMENT3_CHILDNODES                          DISPID_ELEMENT+49
#define DISPID_IHTMLDOCUMENT3_INHERITSTYLESHEETS                  DISPID_OMDOCUMENT+82
#define DISPID_IHTMLDOCUMENT3_ONBEFOREEDITFOCUS                   DISPID_EVPROP_ONBEFOREEDITFOCUS
#define DISPID_IHTMLDOCUMENT3_GETELEMENTSBYNAME                   DISPID_OMDOCUMENT+86
#define DISPID_IHTMLDOCUMENT3_GETELEMENTBYID                      DISPID_OMDOCUMENT+88
#define DISPID_IHTMLDOCUMENT3_GETELEMENTSBYTAGNAME                DISPID_OMDOCUMENT+87

//    DISPIDs for interface IHTMLDocument4

#define DISPID_IHTMLDOCUMENT4_FOCUS                               DISPID_OMDOCUMENT+89
#define DISPID_IHTMLDOCUMENT4_HASFOCUS                            DISPID_OMDOCUMENT+90
#define DISPID_IHTMLDOCUMENT4_ONSELECTIONCHANGE                   DISPID_EVPROP_ONSELECTIONCHANGE
#define DISPID_IHTMLDOCUMENT4_NAMESPACES                          DISPID_OMDOCUMENT+91
#define DISPID_IHTMLDOCUMENT4_CREATEDOCUMENTFROMURL               DISPID_OMDOCUMENT+92
#define DISPID_IHTMLDOCUMENT4_MEDIA                               DISPID_OMDOCUMENT+93
#define DISPID_IHTMLDOCUMENT4_CREATEEVENTOBJECT                   DISPID_OMDOCUMENT+94
#define DISPID_IHTMLDOCUMENT4_FIREEVENT                           DISPID_OMDOCUMENT+95
#define DISPID_IHTMLDOCUMENT4_CREATERENDERSTYLE                   DISPID_OMDOCUMENT+96
#define DISPID_IHTMLDOCUMENT4_ONCONTROLSELECT                     DISPID_EVPROP_ONCONTROLSELECT
#define DISPID_IHTMLDOCUMENT4_URLUNENCODED                        DISPID_OMDOCUMENT+97

//    DISPIDs for interface IHTMLDocument5

#define DISPID_IHTMLDOCUMENT5_ONMOUSEWHEEL                        DISPID_EVPROP_ONMOUSEWHEEL
#define DISPID_IHTMLDOCUMENT5_DOCTYPE                             DISPID_OMDOCUMENT+98
#define DISPID_IHTMLDOCUMENT5_IMPLEMENTATION                      DISPID_OMDOCUMENT+99
#define DISPID_IHTMLDOCUMENT5_CREATEATTRIBUTE                     DISPID_OMDOCUMENT+100
#define DISPID_IHTMLDOCUMENT5_CREATECOMMENT                       DISPID_OMDOCUMENT+101
#define DISPID_IHTMLDOCUMENT5_ONFOCUSIN                           DISPID_EVPROP_ONFOCUSIN
#define DISPID_IHTMLDOCUMENT5_ONFOCUSOUT                          DISPID_EVPROP_ONFOCUSOUT
#define DISPID_IHTMLDOCUMENT5_ONACTIVATE                          DISPID_EVPROP_ONACTIVATE
#define DISPID_IHTMLDOCUMENT5_ONDEACTIVATE                        DISPID_EVPROP_ONDEACTIVATE
#define DISPID_IHTMLDOCUMENT5_ONBEFOREACTIVATE                    DISPID_EVPROP_ONBEFOREACTIVATE
#define DISPID_IHTMLDOCUMENT5_ONBEFOREDEACTIVATE                  DISPID_EVPROP_ONBEFOREDEACTIVATE
#define DISPID_IHTMLDOCUMENT5_COMPATMODE                          DISPID_OMDOCUMENT+102

//    DISPIDs for interface IHTMLDocument6

#define DISPID_IHTMLDOCUMENT6_COMPATIBLE                          DISPID_OMDOCUMENT+103
#define DISPID_IHTMLDOCUMENT6_DOCUMENTMODE                        DISPID_OMDOCUMENT+104
#define DISPID_IHTMLDOCUMENT6_ONSTORAGE                           DISPID_EVPROP_ONSTORAGE
#define DISPID_IHTMLDOCUMENT6_ONSTORAGECOMMIT                     DISPID_EVPROP_ONSTORAGECOMMIT
#define DISPID_IHTMLDOCUMENT6_IE8_GETELEMENTBYID                  DISPID_OMDOCUMENT+107
#define DISPID_IHTMLDOCUMENT6_UPDATESETTINGS                      DISPID_OMDOCUMENT+109

//    DISPIDs for interface IHTMLDocument7

#define DISPID_IHTMLDOCUMENT7_DEFAULTVIEW                         DISPID_OMDOCUMENT+110
#define DISPID_IHTMLDOCUMENT7_CREATECDATASECTION                  DISPID_OMDOCUMENT+123
#define DISPID_IHTMLDOCUMENT7_GETSELECTION                        DISPID_OMDOCUMENT+112
#define DISPID_IHTMLDOCUMENT7_GETELEMENTSBYTAGNAMENS              DISPID_OMDOCUMENT+113
#define DISPID_IHTMLDOCUMENT7_CREATEELEMENTNS                     DISPID_OMDOCUMENT+114
#define DISPID_IHTMLDOCUMENT7_CREATEATTRIBUTENS                   DISPID_OMDOCUMENT+115
#define DISPID_IHTMLDOCUMENT7_ONMSTHUMBNAILCLICK                  DISPID_EVPROP_ONMSTHUMBNAILCLICK
#define DISPID_IHTMLDOCUMENT7_CHARACTERSET                        DISPID_OMDOCUMENT+117
#define DISPID_IHTMLDOCUMENT7_IE9_CREATEELEMENT                   DISPID_OMDOCUMENT+118
#define DISPID_IHTMLDOCUMENT7_IE9_CREATEATTRIBUTE                 DISPID_OMDOCUMENT+119
#define DISPID_IHTMLDOCUMENT7_GETELEMENTSBYCLASSNAME              DISPID_OMDOCUMENT+120
#define DISPID_IHTMLDOCUMENT7_CREATEPROCESSINGINSTRUCTION         DISPID_OMDOCUMENT+124
#define DISPID_IHTMLDOCUMENT7_ADOPTNODE                           DISPID_OMDOCUMENT+125
#define DISPID_IHTMLDOCUMENT7_ONMSSITEMODEJUMPLISTITEMREMOVED     DISPID_EVPROP_ONMSSITEMODEJUMPLISTITEMREMOVED
#define DISPID_IHTMLDOCUMENT7_IE9_ALL                             DISPID_OMDOCUMENT+126
#define DISPID_IHTMLDOCUMENT7_INPUTENCODING                       DISPID_OMDOCUMENT+127
#define DISPID_IHTMLDOCUMENT7_XMLENCODING                         DISPID_OMDOCUMENT+128
#define DISPID_IHTMLDOCUMENT7_XMLSTANDALONE                       DISPID_OMDOCUMENT+129
#define DISPID_IHTMLDOCUMENT7_XMLVERSION                          DISPID_OMDOCUMENT+130
#define DISPID_IHTMLDOCUMENT7_HASATTRIBUTES                       DISPID_OMDOCUMENT+132
#define DISPID_IHTMLDOCUMENT7_ONABORT                             DISPID_EVPROP_ONABORT
#define DISPID_IHTMLDOCUMENT7_ONBLUR                              DISPID_EVPROP_ONBLUR
#define DISPID_IHTMLDOCUMENT7_ONCANPLAY                           DISPID_EVPROP_CANPLAY
#define DISPID_IHTMLDOCUMENT7_ONCANPLAYTHROUGH                    DISPID_EVPROP_CANPLAYTHROUGH
#define DISPID_IHTMLDOCUMENT7_ONCHANGE                            DISPID_EVPROP_ONCHANGE
#define DISPID_IHTMLDOCUMENT7_ONDRAG                              DISPID_EVPROP_ONDRAG
#define DISPID_IHTMLDOCUMENT7_ONDRAGEND                           DISPID_EVPROP_ONDRAGEND
#define DISPID_IHTMLDOCUMENT7_ONDRAGENTER                         DISPID_EVPROP_ONDRAGENTER
#define DISPID_IHTMLDOCUMENT7_ONDRAGLEAVE                         DISPID_EVPROP_ONDRAGLEAVE
#define DISPID_IHTMLDOCUMENT7_ONDRAGOVER                          DISPID_EVPROP_ONDRAGOVER
#define DISPID_IHTMLDOCUMENT7_ONDROP                              DISPID_EVPROP_ONDROP
#define DISPID_IHTMLDOCUMENT7_ONDURATIONCHANGE                    DISPID_EVPROP_DURATIONCHANGE
#define DISPID_IHTMLDOCUMENT7_ONEMPTIED                           DISPID_EVPROP_EMPTIED
#define DISPID_IHTMLDOCUMENT7_ONENDED                             DISPID_EVPROP_ENDED
#define DISPID_IHTMLDOCUMENT7_ONERROR                             DISPID_EVPROP_ONERROR
#define DISPID_IHTMLDOCUMENT7_ONFOCUS                             DISPID_EVPROP_ONFOCUS
#define DISPID_IHTMLDOCUMENT7_ONINPUT                             DISPID_EVPROP_INPUT
#define DISPID_IHTMLDOCUMENT7_ONLOAD                              DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLDOCUMENT7_ONLOADEDDATA                        DISPID_EVPROP_LOADEDDATA
#define DISPID_IHTMLDOCUMENT7_ONLOADEDMETADATA                    DISPID_EVPROP_LOADEDMETADATA
#define DISPID_IHTMLDOCUMENT7_ONLOADSTART                         DISPID_EVPROP_LOADSTART
#define DISPID_IHTMLDOCUMENT7_ONPAUSE                             DISPID_EVPROP_PAUSE
#define DISPID_IHTMLDOCUMENT7_ONPLAY                              DISPID_EVPROP_PLAY
#define DISPID_IHTMLDOCUMENT7_ONPLAYING                           DISPID_EVPROP_PLAYING
#define DISPID_IHTMLDOCUMENT7_ONPROGRESS                          DISPID_EVPROP_PROGRESS
#define DISPID_IHTMLDOCUMENT7_ONRATECHANGE                        DISPID_EVPROP_RATECHANGE
#define DISPID_IHTMLDOCUMENT7_ONRESET                             DISPID_EVPROP_ONRESET
#define DISPID_IHTMLDOCUMENT7_ONSCROLL                            DISPID_EVPROP_ONSCROLL
#define DISPID_IHTMLDOCUMENT7_ONSEEKED                            DISPID_EVPROP_SEEKED
#define DISPID_IHTMLDOCUMENT7_ONSEEKING                           DISPID_EVPROP_SEEKING
#define DISPID_IHTMLDOCUMENT7_ONSELECT                            DISPID_EVPROP_ONSELECT
#define DISPID_IHTMLDOCUMENT7_ONSTALLED                           DISPID_EVPROP_STALLED
#define DISPID_IHTMLDOCUMENT7_ONSUBMIT                            DISPID_EVPROP_ONSUBMIT
#define DISPID_IHTMLDOCUMENT7_ONSUSPEND                           DISPID_EVPROP_SUSPEND
#define DISPID_IHTMLDOCUMENT7_ONTIMEUPDATE                        DISPID_EVPROP_TIMEUPDATE
#define DISPID_IHTMLDOCUMENT7_ONVOLUMECHANGE                      DISPID_EVPROP_VOLUMECHANGE
#define DISPID_IHTMLDOCUMENT7_ONWAITING                           DISPID_EVPROP_WAITING
#define DISPID_IHTMLDOCUMENT7_NORMALIZE                           DISPID_OMDOCUMENT+134
#define DISPID_IHTMLDOCUMENT7_IMPORTNODE                          DISPID_OMDOCUMENT+135
#define DISPID_IHTMLDOCUMENT7_IE9_PARENTWINDOW                    DISPID_OMDOCUMENT+136
#define DISPID_IHTMLDOCUMENT7_IE9_BODY                            DISPID_OMDOCUMENT+137
#define DISPID_IHTMLDOCUMENT7_HEAD                                DISPID_OMDOCUMENT+138

//    DISPIDs for interface IHTMLDocument8

#define DISPID_IHTMLDOCUMENT8_ONMSCONTENTZOOM                     DISPID_EVPROP_ONMSCONTENTZOOM
#define DISPID_IHTMLDOCUMENT8_ONMSPOINTERDOWN                     DISPID_EVPROP_ONMSPOINTERDOWN
#define DISPID_IHTMLDOCUMENT8_ONMSPOINTERMOVE                     DISPID_EVPROP_ONMSPOINTERMOVE
#define DISPID_IHTMLDOCUMENT8_ONMSPOINTERUP                       DISPID_EVPROP_ONMSPOINTERUP
#define DISPID_IHTMLDOCUMENT8_ONMSPOINTEROVER                     DISPID_EVPROP_ONMSPOINTEROVER
#define DISPID_IHTMLDOCUMENT8_ONMSPOINTEROUT                      DISPID_EVPROP_ONMSPOINTEROUT
#define DISPID_IHTMLDOCUMENT8_ONMSPOINTERCANCEL                   DISPID_EVPROP_ONMSPOINTERCANCEL
#define DISPID_IHTMLDOCUMENT8_ONMSPOINTERHOVER                    DISPID_EVPROP_ONMSPOINTERHOVER
#define DISPID_IHTMLDOCUMENT8_ONMSGESTURESTART                    DISPID_EVPROP_ONMSGESTURESTART
#define DISPID_IHTMLDOCUMENT8_ONMSGESTURECHANGE                   DISPID_EVPROP_ONMSGESTURECHANGE
#define DISPID_IHTMLDOCUMENT8_ONMSGESTUREEND                      DISPID_EVPROP_ONMSGESTUREEND
#define DISPID_IHTMLDOCUMENT8_ONMSGESTUREHOLD                     DISPID_EVPROP_ONMSGESTUREHOLD
#define DISPID_IHTMLDOCUMENT8_ONMSGESTURETAP                      DISPID_EVPROP_ONMSGESTURETAP
#define DISPID_IHTMLDOCUMENT8_ONMSGESTUREDOUBLETAP                DISPID_EVPROP_ONMSGESTUREDOUBLETAP
#define DISPID_IHTMLDOCUMENT8_ONMSINERTIASTART                    DISPID_EVPROP_ONMSINERTIASTART
#define DISPID_IHTMLDOCUMENT8_ELEMENTSFROMPOINT                   DISPID_OMDOCUMENT+139
#define DISPID_IHTMLDOCUMENT8_ELEMENTSFROMRECT                    DISPID_OMDOCUMENT+140
#define DISPID_IHTMLDOCUMENT8_ONMSMANIPULATIONSTATECHANGED        DISPID_EVPROP_ONMSMANIPULATIONSTATECHANGED
#define DISPID_IHTMLDOCUMENT8_MSCAPSLOCKWARNINGOFF                DISPID_OMDOCUMENT+141

//    DISPIDs for interface IDocumentEvent

#define DISPID_IDOCUMENTEVENT_CREATEEVENT                         DISPID_OMDOCUMENT+108

//    DISPIDs for interface IDocumentRange

#define DISPID_IDOCUMENTRANGE_CREATERANGE                         DISPID_OMDOCUMENT+111

//    DISPIDs for interface IDocumentSelector

#define DISPID_IDOCUMENTSELECTOR_QUERYSELECTOR                    DISPID_OMDOCUMENT+105
#define DISPID_IDOCUMENTSELECTOR_QUERYSELECTORALL                 DISPID_OMDOCUMENT+106

//    DISPIDs for interface IDocumentTraversal

#define DISPID_IDOCUMENTTRAVERSAL_CREATENODEITERATOR              DISPID_OMDOCUMENT+121
#define DISPID_IDOCUMENTTRAVERSAL_CREATETREEWALKER                DISPID_OMDOCUMENT+122

//    DISPIDs for event set HTMLDocumentEvents4

#define DISPID_HTMLDOCUMENTEVENTS4_ONMSTHUMBNAILCLICK             DISPID_EVPROP_ONMSTHUMBNAILCLICK
#define DISPID_HTMLDOCUMENTEVENTS4_ONMSSITEMODEJUMPLISTITEMREMOVED DISPID_EVPROP_ONMSSITEMODEJUMPLISTITEMREMOVED

//    DISPIDs for event set HTMLDocumentEvents3

#define DISPID_HTMLDOCUMENTEVENTS3_ONSTORAGE                      DISPID_EVMETH_ONSTORAGE
#define DISPID_HTMLDOCUMENTEVENTS3_ONSTORAGECOMMIT                DISPID_EVMETH_ONSTORAGECOMMIT

//    DISPIDs for event set HTMLDocumentEvents2

#define DISPID_HTMLDOCUMENTEVENTS2_ONHELP                         DISPID_EVMETH_ONHELP
#define DISPID_HTMLDOCUMENTEVENTS2_ONCLICK                        DISPID_EVMETH_ONCLICK
#define DISPID_HTMLDOCUMENTEVENTS2_ONDBLCLICK                     DISPID_EVMETH_ONDBLCLICK
#define DISPID_HTMLDOCUMENTEVENTS2_ONKEYDOWN                      DISPID_EVMETH_ONKEYDOWN
#define DISPID_HTMLDOCUMENTEVENTS2_ONKEYUP                        DISPID_EVMETH_ONKEYUP
#define DISPID_HTMLDOCUMENTEVENTS2_ONKEYPRESS                     DISPID_EVMETH_ONKEYPRESS
#define DISPID_HTMLDOCUMENTEVENTS2_ONMOUSEDOWN                    DISPID_EVMETH_ONMOUSEDOWN
#define DISPID_HTMLDOCUMENTEVENTS2_ONMOUSEMOVE                    DISPID_EVMETH_ONMOUSEMOVE
#define DISPID_HTMLDOCUMENTEVENTS2_ONMOUSEUP                      DISPID_EVMETH_ONMOUSEUP
#define DISPID_HTMLDOCUMENTEVENTS2_ONMOUSEOUT                     DISPID_EVMETH_ONMOUSEOUT
#define DISPID_HTMLDOCUMENTEVENTS2_ONMOUSEOVER                    DISPID_EVMETH_ONMOUSEOVER
#define DISPID_HTMLDOCUMENTEVENTS2_ONREADYSTATECHANGE             DISPID_EVMETH_ONREADYSTATECHANGE
#define DISPID_HTMLDOCUMENTEVENTS2_ONBEFOREUPDATE                 DISPID_EVMETH_ONBEFOREUPDATE
#define DISPID_HTMLDOCUMENTEVENTS2_ONAFTERUPDATE                  DISPID_EVMETH_ONAFTERUPDATE
#define DISPID_HTMLDOCUMENTEVENTS2_ONROWEXIT                      DISPID_EVMETH_ONROWEXIT
#define DISPID_HTMLDOCUMENTEVENTS2_ONROWENTER                     DISPID_EVMETH_ONROWENTER
#define DISPID_HTMLDOCUMENTEVENTS2_ONDRAGSTART                    DISPID_EVMETH_ONDRAGSTART
#define DISPID_HTMLDOCUMENTEVENTS2_ONSELECTSTART                  DISPID_EVMETH_ONSELECTSTART
#define DISPID_HTMLDOCUMENTEVENTS2_ONERRORUPDATE                  DISPID_EVMETH_ONERRORUPDATE
#define DISPID_HTMLDOCUMENTEVENTS2_ONCONTEXTMENU                  DISPID_EVMETH_ONCONTEXTMENU
#define DISPID_HTMLDOCUMENTEVENTS2_ONSTOP                         DISPID_EVMETH_ONSTOP
#define DISPID_HTMLDOCUMENTEVENTS2_ONROWSDELETE                   DISPID_EVMETH_ONROWSDELETE
#define DISPID_HTMLDOCUMENTEVENTS2_ONROWSINSERTED                 DISPID_EVMETH_ONROWSINSERTED
#define DISPID_HTMLDOCUMENTEVENTS2_ONCELLCHANGE                   DISPID_EVMETH_ONCELLCHANGE
#define DISPID_HTMLDOCUMENTEVENTS2_ONPROPERTYCHANGE               DISPID_EVMETH_ONPROPERTYCHANGE
#define DISPID_HTMLDOCUMENTEVENTS2_ONDATASETCHANGED               DISPID_EVMETH_ONDATASETCHANGED
#define DISPID_HTMLDOCUMENTEVENTS2_ONDATAAVAILABLE                DISPID_EVMETH_ONDATAAVAILABLE
#define DISPID_HTMLDOCUMENTEVENTS2_ONDATASETCOMPLETE              DISPID_EVMETH_ONDATASETCOMPLETE
#define DISPID_HTMLDOCUMENTEVENTS2_ONBEFOREEDITFOCUS              DISPID_EVMETH_ONBEFOREEDITFOCUS
#define DISPID_HTMLDOCUMENTEVENTS2_ONSELECTIONCHANGE              DISPID_EVMETH_ONSELECTIONCHANGE
#define DISPID_HTMLDOCUMENTEVENTS2_ONCONTROLSELECT                DISPID_EVMETH_ONCONTROLSELECT
#define DISPID_HTMLDOCUMENTEVENTS2_ONMOUSEWHEEL                   DISPID_EVMETH_ONMOUSEWHEEL
#define DISPID_HTMLDOCUMENTEVENTS2_ONFOCUSIN                      DISPID_EVMETH_ONFOCUSIN
#define DISPID_HTMLDOCUMENTEVENTS2_ONFOCUSOUT                     DISPID_EVMETH_ONFOCUSOUT
#define DISPID_HTMLDOCUMENTEVENTS2_ONACTIVATE                     DISPID_EVMETH_ONACTIVATE
#define DISPID_HTMLDOCUMENTEVENTS2_ONDEACTIVATE                   DISPID_EVMETH_ONDEACTIVATE
#define DISPID_HTMLDOCUMENTEVENTS2_ONBEFOREACTIVATE               DISPID_EVMETH_ONBEFOREACTIVATE
#define DISPID_HTMLDOCUMENTEVENTS2_ONBEFOREDEACTIVATE             DISPID_EVMETH_ONBEFOREDEACTIVATE

//    DISPIDs for event set HTMLDocumentEvents

#define DISPID_HTMLDOCUMENTEVENTS_ONHELP                          DISPID_EVMETH_ONHELP
#define DISPID_HTMLDOCUMENTEVENTS_ONCLICK                         DISPID_EVMETH_ONCLICK
#define DISPID_HTMLDOCUMENTEVENTS_ONDBLCLICK                      DISPID_EVMETH_ONDBLCLICK
#define DISPID_HTMLDOCUMENTEVENTS_ONKEYDOWN                       DISPID_EVMETH_ONKEYDOWN
#define DISPID_HTMLDOCUMENTEVENTS_ONKEYUP                         DISPID_EVMETH_ONKEYUP
#define DISPID_HTMLDOCUMENTEVENTS_ONKEYPRESS                      DISPID_EVMETH_ONKEYPRESS
#define DISPID_HTMLDOCUMENTEVENTS_ONMOUSEDOWN                     DISPID_EVMETH_ONMOUSEDOWN
#define DISPID_HTMLDOCUMENTEVENTS_ONMOUSEMOVE                     DISPID_EVMETH_ONMOUSEMOVE
#define DISPID_HTMLDOCUMENTEVENTS_ONMOUSEUP                       DISPID_EVMETH_ONMOUSEUP
#define DISPID_HTMLDOCUMENTEVENTS_ONMOUSEOUT                      DISPID_EVMETH_ONMOUSEOUT
#define DISPID_HTMLDOCUMENTEVENTS_ONMOUSEOVER                     DISPID_EVMETH_ONMOUSEOVER
#define DISPID_HTMLDOCUMENTEVENTS_ONREADYSTATECHANGE              DISPID_EVMETH_ONREADYSTATECHANGE
#define DISPID_HTMLDOCUMENTEVENTS_ONBEFOREUPDATE                  DISPID_EVMETH_ONBEFOREUPDATE
#define DISPID_HTMLDOCUMENTEVENTS_ONAFTERUPDATE                   DISPID_EVMETH_ONAFTERUPDATE
#define DISPID_HTMLDOCUMENTEVENTS_ONROWEXIT                       DISPID_EVMETH_ONROWEXIT
#define DISPID_HTMLDOCUMENTEVENTS_ONROWENTER                      DISPID_EVMETH_ONROWENTER
#define DISPID_HTMLDOCUMENTEVENTS_ONDRAGSTART                     DISPID_EVMETH_ONDRAGSTART
#define DISPID_HTMLDOCUMENTEVENTS_ONSELECTSTART                   DISPID_EVMETH_ONSELECTSTART
#define DISPID_HTMLDOCUMENTEVENTS_ONERRORUPDATE                   DISPID_EVMETH_ONERRORUPDATE
#define DISPID_HTMLDOCUMENTEVENTS_ONCONTEXTMENU                   DISPID_EVMETH_ONCONTEXTMENU
#define DISPID_HTMLDOCUMENTEVENTS_ONSTOP                          DISPID_EVMETH_ONSTOP
#define DISPID_HTMLDOCUMENTEVENTS_ONROWSDELETE                    DISPID_EVMETH_ONROWSDELETE
#define DISPID_HTMLDOCUMENTEVENTS_ONROWSINSERTED                  DISPID_EVMETH_ONROWSINSERTED
#define DISPID_HTMLDOCUMENTEVENTS_ONCELLCHANGE                    DISPID_EVMETH_ONCELLCHANGE
#define DISPID_HTMLDOCUMENTEVENTS_ONPROPERTYCHANGE                DISPID_EVMETH_ONPROPERTYCHANGE
#define DISPID_HTMLDOCUMENTEVENTS_ONDATASETCHANGED                DISPID_EVMETH_ONDATASETCHANGED
#define DISPID_HTMLDOCUMENTEVENTS_ONDATAAVAILABLE                 DISPID_EVMETH_ONDATAAVAILABLE
#define DISPID_HTMLDOCUMENTEVENTS_ONDATASETCOMPLETE               DISPID_EVMETH_ONDATASETCOMPLETE
#define DISPID_HTMLDOCUMENTEVENTS_ONBEFOREEDITFOCUS               DISPID_EVMETH_ONBEFOREEDITFOCUS
#define DISPID_HTMLDOCUMENTEVENTS_ONSELECTIONCHANGE               DISPID_EVMETH_ONSELECTIONCHANGE
#define DISPID_HTMLDOCUMENTEVENTS_ONCONTROLSELECT                 DISPID_EVMETH_ONCONTROLSELECT
#define DISPID_HTMLDOCUMENTEVENTS_ONMOUSEWHEEL                    DISPID_EVMETH_ONMOUSEWHEEL
#define DISPID_HTMLDOCUMENTEVENTS_ONFOCUSIN                       DISPID_EVMETH_ONFOCUSIN
#define DISPID_HTMLDOCUMENTEVENTS_ONFOCUSOUT                      DISPID_EVMETH_ONFOCUSOUT
#define DISPID_HTMLDOCUMENTEVENTS_ONACTIVATE                      DISPID_EVMETH_ONACTIVATE
#define DISPID_HTMLDOCUMENTEVENTS_ONDEACTIVATE                    DISPID_EVMETH_ONDEACTIVATE
#define DISPID_HTMLDOCUMENTEVENTS_ONBEFOREACTIVATE                DISPID_EVMETH_ONBEFOREACTIVATE
#define DISPID_HTMLDOCUMENTEVENTS_ONBEFOREDEACTIVATE              DISPID_EVMETH_ONBEFOREDEACTIVATE

//    DISPIDs for interface IWebBridge

#define DISPID_IWEBBRIDGE_URL                                     1
#define DISPID_IWEBBRIDGE_SCROLLBAR                               2
#define DISPID_IWEBBRIDGE_EMBED                                   3
#define DISPID_IWEBBRIDGE_EVENT                                   DISPID_IHTMLWINDOW2_EVENT
#define DISPID_IWEBBRIDGE_READYSTATE                              DISPID_READYSTATE
#define DISPID_IWEBBRIDGE_ABOUTBOX                                DISPID_ABOUTBOX

//    DISPIDs for interface IWBScriptControl

#define DISPID_IWBSCRIPTCONTROL_RAISEEVENT                        1
#define DISPID_IWBSCRIPTCONTROL_BUBBLEEVENT                       2
#define DISPID_IWBSCRIPTCONTROL_SETCONTEXTMENU                    3
#define DISPID_IWBSCRIPTCONTROL_SELECTABLECONTENT                 4
#define DISPID_IWBSCRIPTCONTROL_FROZEN                            5
#define DISPID_IWBSCRIPTCONTROL_SCROLLBAR                         7
#define DISPID_IWBSCRIPTCONTROL_VERSION                           8
#define DISPID_IWBSCRIPTCONTROL_VISIBILITY                        9
#define DISPID_IWBSCRIPTCONTROL_ONVISIBILITYCHANGE                10

//    DISPIDs for event set DWebBridgeEvents

#define DISPID_DWEBBRIDGEEVENTS_ONSCRIPTLETEVENT                  1
#define DISPID_DWEBBRIDGEEVENTS_ONREADYSTATECHANGE                DISPID_HTMLDOCUMENTEVENTS_ONREADYSTATECHANGE
#define DISPID_DWEBBRIDGEEVENTS_ONCLICK                           DISPID_HTMLDOCUMENTEVENTS_ONCLICK
#define DISPID_DWEBBRIDGEEVENTS_ONDBLCLICK                        DISPID_HTMLDOCUMENTEVENTS_ONDBLCLICK
#define DISPID_DWEBBRIDGEEVENTS_ONKEYDOWN                         DISPID_HTMLDOCUMENTEVENTS_ONKEYDOWN
#define DISPID_DWEBBRIDGEEVENTS_ONKEYUP                           DISPID_HTMLDOCUMENTEVENTS_ONKEYUP
#define DISPID_DWEBBRIDGEEVENTS_ONKEYPRESS                        DISPID_HTMLDOCUMENTEVENTS_ONKEYPRESS
#define DISPID_DWEBBRIDGEEVENTS_ONMOUSEDOWN                       DISPID_HTMLDOCUMENTEVENTS_ONMOUSEDOWN
#define DISPID_DWEBBRIDGEEVENTS_ONMOUSEMOVE                       DISPID_HTMLDOCUMENTEVENTS_ONMOUSEMOVE
#define DISPID_DWEBBRIDGEEVENTS_ONMOUSEUP                         DISPID_HTMLDOCUMENTEVENTS_ONMOUSEUP

//    DISPIDs for interface IHTMLEmbedElement

#define DISPID_IHTMLEMBEDELEMENT_HIDDEN                           DISPID_OBJECT+10
#define DISPID_IHTMLEMBEDELEMENT_PALETTE                          DISPID_OBJECT+4
#define DISPID_IHTMLEMBEDELEMENT_PLUGINSPAGE                      DISPID_OBJECT+5
#define DISPID_IHTMLEMBEDELEMENT_SRC                              DISPID_OBJECT+6
#define DISPID_IHTMLEMBEDELEMENT_UNITS                            DISPID_OBJECT+8
#define DISPID_IHTMLEMBEDELEMENT_NAME                             STDPROPID_XOBJ_NAME
#define DISPID_IHTMLEMBEDELEMENT_WIDTH                            STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLEMBEDELEMENT_HEIGHT                           STDPROPID_XOBJ_HEIGHT

//    DISPIDs for interface IHTMLEmbedElement2

#define DISPID_IHTMLEMBEDELEMENT2_IE8_SRC                         DISPID_IE8_EMBED
#define DISPID_IHTMLEMBEDELEMENT2_IE8_PLUGINSPAGE                 DISPID_IE8_EMBED+1

//    DISPIDs for interface IHTMLAreasCollection

#define DISPID_IHTMLAREASCOLLECTION_LENGTH                        DISPID_COLLECTION
#define DISPID_IHTMLAREASCOLLECTION__NEWENUM                      DISPID_NEWENUM
#define DISPID_IHTMLAREASCOLLECTION_ITEM                          DISPID_VALUE
#define DISPID_IHTMLAREASCOLLECTION_TAGS                          DISPID_COLLECTION+2
#define DISPID_IHTMLAREASCOLLECTION_ADD                           DISPID_COLLECTION+3
#define DISPID_IHTMLAREASCOLLECTION_REMOVE                        DISPID_COLLECTION+4

//    DISPIDs for interface IHTMLAreasCollection2

#define DISPID_IHTMLAREASCOLLECTION2_URNS                         DISPID_COLLECTION+5

//    DISPIDs for interface IHTMLAreasCollection3

#define DISPID_IHTMLAREASCOLLECTION3_NAMEDITEM                    DISPID_COLLECTION+6

//    DISPIDs for interface IHTMLAreasCollection4

#define DISPID_IHTMLAREASCOLLECTION4_IE8_LENGTH                   DISPID_IE8_COLLECTION
#define DISPID_IHTMLAREASCOLLECTION4_IE8_ITEM                     DISPID_IE8_COLLECTION+2
#define DISPID_IHTMLAREASCOLLECTION4_IE8_NAMEDITEM                DISPID_IE8_COLLECTION+3

//    DISPIDs for interface IHTMLMapElement

#define DISPID_IHTMLMAPELEMENT_AREAS                              DISPID_MAP+2
#define DISPID_IHTMLMAPELEMENT_NAME                               STDPROPID_XOBJ_NAME

//    DISPIDs for interface IHTMLAreaElement

#define DISPID_IHTMLAREAELEMENT_SHAPE                             DISPID_AREA+1
#define DISPID_IHTMLAREAELEMENT_COORDS                            DISPID_AREA+2
#define DISPID_IHTMLAREAELEMENT_HREF                              DISPID_VALUE
#define DISPID_IHTMLAREAELEMENT_TARGET                            DISPID_AREA+4
#define DISPID_IHTMLAREAELEMENT_ALT                               DISPID_AREA+5
#define DISPID_IHTMLAREAELEMENT_NOHREF                            DISPID_AREA+6
#define DISPID_IHTMLAREAELEMENT_HOST                              DISPID_AREA+7
#define DISPID_IHTMLAREAELEMENT_HOSTNAME                          DISPID_AREA+8
#define DISPID_IHTMLAREAELEMENT_PATHNAME                          DISPID_AREA+9
#define DISPID_IHTMLAREAELEMENT_PORT                              DISPID_AREA+10
#define DISPID_IHTMLAREAELEMENT_PROTOCOL                          DISPID_AREA+11
#define DISPID_IHTMLAREAELEMENT_SEARCH                            DISPID_AREA+12
#define DISPID_IHTMLAREAELEMENT_HASH                              DISPID_AREA+13
#define DISPID_IHTMLAREAELEMENT_ONBLUR                            DISPID_EVPROP_ONBLUR
#define DISPID_IHTMLAREAELEMENT_ONFOCUS                           DISPID_EVPROP_ONFOCUS
#define DISPID_IHTMLAREAELEMENT_TABINDEX                          STDPROPID_XOBJ_TABINDEX
#define DISPID_IHTMLAREAELEMENT_FOCUS                             DISPID_SITE+0
#define DISPID_IHTMLAREAELEMENT_BLUR                              DISPID_SITE+2

//    DISPIDs for interface IHTMLAreaElement2

#define DISPID_IHTMLAREAELEMENT2_IE8_SHAPE                        DISPID_IE8_AREA+1
#define DISPID_IHTMLAREAELEMENT2_IE8_COORDS                       DISPID_IE8_AREA+2
#define DISPID_IHTMLAREAELEMENT2_IE8_HREF                         DISPID_IE8_AREA+3

//    DISPIDs for interface IHTMLTableCaption

#define DISPID_IHTMLTABLECAPTION_ALIGN                            STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLTABLECAPTION_VALIGN                           DISPID_A_TABLEVALIGN

//    DISPIDs for interface IHTMLCommentElement

#define DISPID_IHTMLCOMMENTELEMENT_TEXT                           DISPID_COMMENTPDL+1
#define DISPID_IHTMLCOMMENTELEMENT_ATOMIC                         DISPID_COMMENTPDL+2

//    DISPIDs for interface IHTMLCommentElement2

#define DISPID_IHTMLCOMMENTELEMENT2_DATA                          DISPID_COMMENTPDL+3
#define DISPID_IHTMLCOMMENTELEMENT2_LENGTH                        DISPID_COMMENTPDL+4
#define DISPID_IHTMLCOMMENTELEMENT2_SUBSTRINGDATA                 DISPID_COMMENTPDL+5
#define DISPID_IHTMLCOMMENTELEMENT2_APPENDDATA                    DISPID_COMMENTPDL+6
#define DISPID_IHTMLCOMMENTELEMENT2_INSERTDATA                    DISPID_COMMENTPDL+7
#define DISPID_IHTMLCOMMENTELEMENT2_DELETEDATA                    DISPID_COMMENTPDL+8
#define DISPID_IHTMLCOMMENTELEMENT2_REPLACEDATA                   DISPID_COMMENTPDL+9

//    DISPIDs for interface IHTMLCommentElement3

#define DISPID_IHTMLCOMMENTELEMENT3_IE9_SUBSTRINGDATA             DISPID_COMMENTPDL+10
#define DISPID_IHTMLCOMMENTELEMENT3_IE9_INSERTDATA                DISPID_COMMENTPDL+11
#define DISPID_IHTMLCOMMENTELEMENT3_IE9_DELETEDATA                DISPID_COMMENTPDL+12
#define DISPID_IHTMLCOMMENTELEMENT3_IE9_REPLACEDATA               DISPID_COMMENTPDL+13

//    DISPIDs for interface IHTMLPhraseElement2

#define DISPID_IHTMLPHRASEELEMENT2_CITE                           DISPID_PHRASE+1
#define DISPID_IHTMLPHRASEELEMENT2_DATETIME                       DISPID_PHRASE+2

//    DISPIDs for interface IHTMLPhraseElement3

#define DISPID_IHTMLPHRASEELEMENT3_IE8_CITE                       DISPID_IE8_MOD

//    DISPIDs for interface IHTMLTable

#define DISPID_IHTMLTABLE_COLS                                    DISPID_TABLE+1
#define DISPID_IHTMLTABLE_BORDER                                  DISPID_TABLE+2
#define DISPID_IHTMLTABLE_FRAME                                   DISPID_TABLE+4
#define DISPID_IHTMLTABLE_RULES                                   DISPID_TABLE+3
#define DISPID_IHTMLTABLE_CELLSPACING                             DISPID_TABLE+5
#define DISPID_IHTMLTABLE_CELLPADDING                             DISPID_TABLE+6
#define DISPID_IHTMLTABLE_BACKGROUND                              DISPID_A_BACKGROUNDIMAGE
#define DISPID_IHTMLTABLE_BGCOLOR                                 DISPID_BACKCOLOR
#define DISPID_IHTMLTABLE_BORDERCOLOR                             DISPID_A_TABLEBORDERCOLOR
#define DISPID_IHTMLTABLE_BORDERCOLORLIGHT                        DISPID_A_TABLEBORDERCOLORLIGHT
#define DISPID_IHTMLTABLE_BORDERCOLORDARK                         DISPID_A_TABLEBORDERCOLORDARK
#define DISPID_IHTMLTABLE_ALIGN                                   STDPROPID_XOBJ_CONTROLALIGN
#define DISPID_IHTMLTABLE_REFRESH                                 DISPID_TABLE+15
#define DISPID_IHTMLTABLE_ROWS                                    DISPID_TABLE+16
#define DISPID_IHTMLTABLE_WIDTH                                   STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLTABLE_HEIGHT                                  STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLTABLE_DATAPAGESIZE                            DISPID_TABLE+17
#define DISPID_IHTMLTABLE_NEXTPAGE                                DISPID_TABLE+18
#define DISPID_IHTMLTABLE_PREVIOUSPAGE                            DISPID_TABLE+19
#define DISPID_IHTMLTABLE_THEAD                                   DISPID_TABLE+20
#define DISPID_IHTMLTABLE_TFOOT                                   DISPID_TABLE+21
#define DISPID_IHTMLTABLE_TBODIES                                 DISPID_TABLE+24
#define DISPID_IHTMLTABLE_CAPTION                                 DISPID_TABLE+25
#define DISPID_IHTMLTABLE_CREATETHEAD                             DISPID_TABLE+26
#define DISPID_IHTMLTABLE_DELETETHEAD                             DISPID_TABLE+27
#define DISPID_IHTMLTABLE_CREATETFOOT                             DISPID_TABLE+28
#define DISPID_IHTMLTABLE_DELETETFOOT                             DISPID_TABLE+29
#define DISPID_IHTMLTABLE_CREATECAPTION                           DISPID_TABLE+30
#define DISPID_IHTMLTABLE_DELETECAPTION                           DISPID_TABLE+31
#define DISPID_IHTMLTABLE_INSERTROW                               DISPID_TABLE+32
#define DISPID_IHTMLTABLE_DELETEROW                               DISPID_TABLE+33
#define DISPID_IHTMLTABLE_READYSTATE                              DISPID_A_READYSTATE
#define DISPID_IHTMLTABLE_ONREADYSTATECHANGE                      DISPID_EVPROP_ONREADYSTATECHANGE

//    DISPIDs for interface IHTMLTable2

#define DISPID_IHTMLTABLE2_FIRSTPAGE                              DISPID_TABLE+35
#define DISPID_IHTMLTABLE2_LASTPAGE                               DISPID_TABLE+36
#define DISPID_IHTMLTABLE2_CELLS                                  DISPID_TABLE+37
#define DISPID_IHTMLTABLE2_MOVEROW                                DISPID_TABLE+38

//    DISPIDs for interface IHTMLTable3

#define DISPID_IHTMLTABLE3_SUMMARY                                DISPID_TABLE+39

//    DISPIDs for interface IHTMLTable4

#define DISPID_IHTMLTABLE4_IE9_THEAD                              DISPID_TABLE+40
#define DISPID_IHTMLTABLE4_IE9_TFOOT                              DISPID_TABLE+41
#define DISPID_IHTMLTABLE4_IE9_CAPTION                            DISPID_TABLE+42
#define DISPID_IHTMLTABLE4_IE9_INSERTROW                          DISPID_TABLE+43
#define DISPID_IHTMLTABLE4_IE9_DELETEROW                          DISPID_TABLE+44
#define DISPID_IHTMLTABLE4_CREATETBODY                            DISPID_TABLE+45

//    DISPIDs for interface IHTMLTableCol

#define DISPID_IHTMLTABLECOL_SPAN                                 DISPID_TABLECOL+1
#define DISPID_IHTMLTABLECOL_WIDTH                                STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLTABLECOL_ALIGN                                STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLTABLECOL_VALIGN                               DISPID_A_TABLEVALIGN

//    DISPIDs for interface IHTMLTableCol2

#define DISPID_IHTMLTABLECOL2_CH                                  DISPID_TABLECOL+2
#define DISPID_IHTMLTABLECOL2_CHOFF                               DISPID_TABLECOL+3

//    DISPIDs for interface IHTMLTableCol3

#define DISPID_IHTMLTABLECOL3_IE9_CH                              DISPID_TABLECOL+4
#define DISPID_IHTMLTABLECOL3_IE9_CHOFF                           DISPID_TABLECOL+5

//    DISPIDs for interface IHTMLTableSection

#define DISPID_IHTMLTABLESECTION_ALIGN                            STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLTABLESECTION_VALIGN                           DISPID_A_TABLEVALIGN
#define DISPID_IHTMLTABLESECTION_BGCOLOR                          DISPID_BACKCOLOR
#define DISPID_IHTMLTABLESECTION_ROWS                             DISPID_TABLESECTION
#define DISPID_IHTMLTABLESECTION_INSERTROW                        DISPID_TABLESECTION+1
#define DISPID_IHTMLTABLESECTION_DELETEROW                        DISPID_TABLESECTION+2

//    DISPIDs for interface IHTMLTableSection2

#define DISPID_IHTMLTABLESECTION2_MOVEROW                         DISPID_TABLESECTION+3

//    DISPIDs for interface IHTMLTableSection3

#define DISPID_IHTMLTABLESECTION3_CH                              DISPID_TABLESECTION+4
#define DISPID_IHTMLTABLESECTION3_CHOFF                           DISPID_TABLESECTION+5

//    DISPIDs for interface IHTMLTableSection4

#define DISPID_IHTMLTABLESECTION4_IE9_CH                          DISPID_TABLESECTION+6
#define DISPID_IHTMLTABLESECTION4_IE9_CHOFF                       DISPID_TABLESECTION+7
#define DISPID_IHTMLTABLESECTION4_IE9_INSERTROW                   DISPID_TABLESECTION+8
#define DISPID_IHTMLTABLESECTION4_IE9_DELETEROW                   DISPID_TABLESECTION+9

//    DISPIDs for interface IHTMLTableRow

#define DISPID_IHTMLTABLEROW_ALIGN                                STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLTABLEROW_VALIGN                               DISPID_A_TABLEVALIGN
#define DISPID_IHTMLTABLEROW_BGCOLOR                              DISPID_BACKCOLOR
#define DISPID_IHTMLTABLEROW_BORDERCOLOR                          DISPID_A_TABLEBORDERCOLOR
#define DISPID_IHTMLTABLEROW_BORDERCOLORLIGHT                     DISPID_A_TABLEBORDERCOLORLIGHT
#define DISPID_IHTMLTABLEROW_BORDERCOLORDARK                      DISPID_A_TABLEBORDERCOLORDARK
#define DISPID_IHTMLTABLEROW_ROWINDEX                             DISPID_TABLEROW
#define DISPID_IHTMLTABLEROW_SECTIONROWINDEX                      DISPID_TABLEROW+1
#define DISPID_IHTMLTABLEROW_CELLS                                DISPID_TABLEROW+2
#define DISPID_IHTMLTABLEROW_INSERTCELL                           DISPID_TABLEROW+3
#define DISPID_IHTMLTABLEROW_DELETECELL                           DISPID_TABLEROW+4

//    DISPIDs for interface IHTMLTableRow2

#define DISPID_IHTMLTABLEROW2_HEIGHT                              STDPROPID_XOBJ_HEIGHT

//    DISPIDs for interface IHTMLTableRow3

#define DISPID_IHTMLTABLEROW3_CH                                  DISPID_TABLEROW+9
#define DISPID_IHTMLTABLEROW3_CHOFF                               DISPID_TABLEROW+10

//    DISPIDs for interface IHTMLTableRow4

#define DISPID_IHTMLTABLEROW4_IE9_CH                              DISPID_TABLEROW+11
#define DISPID_IHTMLTABLEROW4_IE9_CHOFF                           DISPID_TABLEROW+12
#define DISPID_IHTMLTABLEROW4_IE9_INSERTCELL                      DISPID_TABLEROW+13
#define DISPID_IHTMLTABLEROW4_IE9_DELETECELL                      DISPID_TABLEROW+14

//    DISPIDs for interface IHTMLTableRowMetrics

#define DISPID_IHTMLTABLEROWMETRICS_CLIENTHEIGHT                  DISPID_SITE+19
#define DISPID_IHTMLTABLEROWMETRICS_CLIENTWIDTH                   DISPID_SITE+20
#define DISPID_IHTMLTABLEROWMETRICS_CLIENTTOP                     DISPID_SITE+21
#define DISPID_IHTMLTABLEROWMETRICS_CLIENTLEFT                    DISPID_SITE+22

//    DISPIDs for interface IHTMLTableCell

#define DISPID_IHTMLTABLECELL_ROWSPAN                             DISPID_TABLECELL+1
#define DISPID_IHTMLTABLECELL_COLSPAN                             DISPID_TABLECELL+2
#define DISPID_IHTMLTABLECELL_ALIGN                               STDPROPID_XOBJ_BLOCKALIGN
#define DISPID_IHTMLTABLECELL_VALIGN                              DISPID_A_TABLEVALIGN
#define DISPID_IHTMLTABLECELL_BGCOLOR                             DISPID_BACKCOLOR
#define DISPID_IHTMLTABLECELL_NOWRAP                              DISPID_A_NOWRAP
#define DISPID_IHTMLTABLECELL_BACKGROUND                          DISPID_A_BACKGROUNDIMAGE
#define DISPID_IHTMLTABLECELL_BORDERCOLOR                         DISPID_A_TABLEBORDERCOLOR
#define DISPID_IHTMLTABLECELL_BORDERCOLORLIGHT                    DISPID_A_TABLEBORDERCOLORLIGHT
#define DISPID_IHTMLTABLECELL_BORDERCOLORDARK                     DISPID_A_TABLEBORDERCOLORDARK
#define DISPID_IHTMLTABLECELL_WIDTH                               STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLTABLECELL_HEIGHT                              STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLTABLECELL_CELLINDEX                           DISPID_TABLECELL+3

//    DISPIDs for interface IHTMLTableCell2

#define DISPID_IHTMLTABLECELL2_ABBR                               DISPID_TABLECELL+4
#define DISPID_IHTMLTABLECELL2_AXIS                               DISPID_TABLECELL+5
#define DISPID_IHTMLTABLECELL2_CH                                 DISPID_TABLECELL+6
#define DISPID_IHTMLTABLECELL2_CHOFF                              DISPID_TABLECELL+7
#define DISPID_IHTMLTABLECELL2_HEADERS                            DISPID_TABLECELL+8
#define DISPID_IHTMLTABLECELL2_SCOPE                              DISPID_TABLECELL+9

//    DISPIDs for interface IHTMLTableCell3

#define DISPID_IHTMLTABLECELL3_IE9_CH                             DISPID_TABLECELL+10
#define DISPID_IHTMLTABLECELL3_IE9_CHOFF                          DISPID_TABLECELL+11

//    DISPIDs for interface IHTMLScriptElement

#define DISPID_IHTMLSCRIPTELEMENT_SRC                             DISPID_SCRIPT+1
#define DISPID_IHTMLSCRIPTELEMENT_HTMLFOR                         DISPID_SCRIPT+4
#define DISPID_IHTMLSCRIPTELEMENT_EVENT                           DISPID_SCRIPT+5
#define DISPID_IHTMLSCRIPTELEMENT_TEXT                            DISPID_SCRIPT+6
#define DISPID_IHTMLSCRIPTELEMENT_DEFER                           DISPID_SCRIPT+7
#define DISPID_IHTMLSCRIPTELEMENT_READYSTATE                      DISPID_A_READYSTATE
#define DISPID_IHTMLSCRIPTELEMENT_ONERROR                         DISPID_EVPROP_ONERROR
#define DISPID_IHTMLSCRIPTELEMENT_TYPE                            DISPID_SCRIPT+9

//    DISPIDs for interface IHTMLScriptElement2

#define DISPID_IHTMLSCRIPTELEMENT2_CHARSET                        DISPID_SCRIPT+10

//    DISPIDs for interface IHTMLScriptElement3

#define DISPID_IHTMLSCRIPTELEMENT3_IE8_SRC                        DISPID_IE8_SCRIPT

//    DISPIDs for interface IHTMLScriptElement4

#define DISPID_IHTMLSCRIPTELEMENT4_USEDCHARSET                    DISPID_SCRIPT+11

//    DISPIDs for event set HTMLScriptEvents2

#define DISPID_HTMLSCRIPTEVENTS2_ONERROR                          DISPID_EVMETH_ONERROR

//    DISPIDs for event set HTMLScriptEvents

#define DISPID_HTMLSCRIPTEVENTS_ONERROR                           DISPID_EVMETH_ONERROR

//    DISPIDs for interface IHTMLObjectElement

#define DISPID_IHTMLOBJECTELEMENT_OBJECT                          DISPID_OBJECT+1
#define DISPID_IHTMLOBJECTELEMENT_CLASSID                         DISPID_OBJECT+2
#define DISPID_IHTMLOBJECTELEMENT_DATA                            DISPID_OBJECT+3
#define DISPID_IHTMLOBJECTELEMENT_RECORDSET                       DISPID_OBJECT+5
#define DISPID_IHTMLOBJECTELEMENT_ALIGN                           STDPROPID_XOBJ_CONTROLALIGN
#define DISPID_IHTMLOBJECTELEMENT_NAME                            STDPROPID_XOBJ_NAME
#define DISPID_IHTMLOBJECTELEMENT_CODEBASE                        DISPID_OBJECT+6
#define DISPID_IHTMLOBJECTELEMENT_CODETYPE                        DISPID_OBJECT+7
#define DISPID_IHTMLOBJECTELEMENT_CODE                            DISPID_OBJECT+8
#define DISPID_IHTMLOBJECTELEMENT_BASEHREF                        STDPROPID_XOBJ_BASEHREF
#define DISPID_IHTMLOBJECTELEMENT_TYPE                            DISPID_OBJECT+9
#define DISPID_IHTMLOBJECTELEMENT_FORM                            DISPID_SITE+4
#define DISPID_IHTMLOBJECTELEMENT_WIDTH                           STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLOBJECTELEMENT_HEIGHT                          STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLOBJECTELEMENT_READYSTATE                      DISPID_OBJECT+10
#define DISPID_IHTMLOBJECTELEMENT_ONREADYSTATECHANGE              DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLOBJECTELEMENT_ONERROR                         DISPID_EVPROP_ONERROR
#define DISPID_IHTMLOBJECTELEMENT_ALTHTML                         DISPID_OBJECT+11
#define DISPID_IHTMLOBJECTELEMENT_VSPACE                          DISPID_OBJECT+12
#define DISPID_IHTMLOBJECTELEMENT_HSPACE                          DISPID_OBJECT+13

//    DISPIDs for interface IHTMLObjectElement2

#define DISPID_IHTMLOBJECTELEMENT2_NAMEDRECORDSET                 DISPID_OBJECT+14
#define DISPID_IHTMLOBJECTELEMENT2_CLASSID                        DISPID_OBJECT+2
#define DISPID_IHTMLOBJECTELEMENT2_DATA                           DISPID_OBJECT+3

//    DISPIDs for interface IHTMLObjectElement3

#define DISPID_IHTMLOBJECTELEMENT3_ARCHIVE                        DISPID_OBJECT+15
#define DISPID_IHTMLOBJECTELEMENT3_ALT                            DISPID_OBJECT+16
#define DISPID_IHTMLOBJECTELEMENT3_DECLARE                        DISPID_OBJECT+17
#define DISPID_IHTMLOBJECTELEMENT3_STANDBY                        DISPID_OBJECT+18
#define DISPID_IHTMLOBJECTELEMENT3_BORDER                         DISPID_OBJECT+19
#define DISPID_IHTMLOBJECTELEMENT3_USEMAP                         DISPID_OBJECT+20

//    DISPIDs for interface IHTMLObjectElement4

#define DISPID_IHTMLOBJECTELEMENT4_CONTENTDOCUMENT                DISPID_IE8_OBJECT
#define DISPID_IHTMLOBJECTELEMENT4_IE8_CODEBASE                   DISPID_IE8_OBJECT+1
#define DISPID_IHTMLOBJECTELEMENT4_IE8_DATA                       DISPID_IE8_OBJECT+2

//    DISPIDs for interface IHTMLObjectElement5

#define DISPID_IHTMLOBJECTELEMENT5_IE9_OBJECT                     DISPID_IE8_OBJECT+3

//    DISPIDs for interface IHTMLParamElement

#define DISPID_IHTMLPARAMELEMENT_NAME                             DISPID_PARAM+1
#define DISPID_IHTMLPARAMELEMENT_VALUE                            DISPID_PARAM+2
#define DISPID_IHTMLPARAMELEMENT_TYPE                             DISPID_PARAM+3
#define DISPID_IHTMLPARAMELEMENT_VALUETYPE                        DISPID_PARAM+4

//    DISPIDs for interface IHTMLParamElement2

#define DISPID_IHTMLPARAMELEMENT2_NAME                            DISPID_PARAM+1
#define DISPID_IHTMLPARAMELEMENT2_TYPE                            DISPID_PARAM+3
#define DISPID_IHTMLPARAMELEMENT2_VALUE                           DISPID_PARAM+2
#define DISPID_IHTMLPARAMELEMENT2_IE8_VALUETYPE                   DISPID_IE8_PARAM

//    DISPIDs for event set HTMLObjectElementEvents2

#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONBEFOREUPDATE            DISPID_EVMETH_ONBEFOREUPDATE
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONAFTERUPDATE             DISPID_EVMETH_ONAFTERUPDATE
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONERRORUPDATE             DISPID_EVMETH_ONERRORUPDATE
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONROWEXIT                 DISPID_EVMETH_ONROWEXIT
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONROWENTER                DISPID_EVMETH_ONROWENTER
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONDATASETCHANGED          DISPID_EVMETH_ONDATASETCHANGED
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONDATAAVAILABLE           DISPID_EVMETH_ONDATAAVAILABLE
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONDATASETCOMPLETE         DISPID_EVMETH_ONDATASETCOMPLETE
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONERROR                   DISPID_XOBJ_BASE+19
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONROWSDELETE              DISPID_EVMETH_ONROWSDELETE
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONROWSINSERTED            DISPID_EVMETH_ONROWSINSERTED
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONCELLCHANGE              DISPID_EVMETH_ONCELLCHANGE
#define DISPID_HTMLOBJECTELEMENTEVENTS2_ONREADYSTATECHANGE        DISPID_XOBJ_BASE+20

//    DISPIDs for event set HTMLObjectElementEvents

#define DISPID_HTMLOBJECTELEMENTEVENTS_ONBEFOREUPDATE             DISPID_EVMETH_ONBEFOREUPDATE
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONAFTERUPDATE              DISPID_EVMETH_ONAFTERUPDATE
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONERRORUPDATE              DISPID_EVMETH_ONERRORUPDATE
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONROWEXIT                  DISPID_EVMETH_ONROWEXIT
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONROWENTER                 DISPID_EVMETH_ONROWENTER
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONDATASETCHANGED           DISPID_EVMETH_ONDATASETCHANGED
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONDATAAVAILABLE            DISPID_EVMETH_ONDATAAVAILABLE
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONDATASETCOMPLETE          DISPID_EVMETH_ONDATASETCOMPLETE
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONERROR                    DISPID_XOBJ_BASE+19
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONROWSDELETE               DISPID_EVMETH_ONROWSDELETE
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONROWSINSERTED             DISPID_EVMETH_ONROWSINSERTED
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONCELLCHANGE               DISPID_EVMETH_ONCELLCHANGE
#define DISPID_HTMLOBJECTELEMENTEVENTS_ONREADYSTATECHANGE         DISPID_XOBJ_BASE+20

//    DISPIDs for interface IHTMLFrameBase

#define DISPID_IHTMLFRAMEBASE_SRC                                 DISPID_FRAMESITE+0
#define DISPID_IHTMLFRAMEBASE_NAME                                STDPROPID_XOBJ_NAME
#define DISPID_IHTMLFRAMEBASE_BORDER                              DISPID_FRAMESITE+2
#define DISPID_IHTMLFRAMEBASE_FRAMEBORDER                         DISPID_FRAMESITE+3
#define DISPID_IHTMLFRAMEBASE_FRAMESPACING                        DISPID_FRAMESITE+4
#define DISPID_IHTMLFRAMEBASE_MARGINWIDTH                         DISPID_FRAMESITE+5
#define DISPID_IHTMLFRAMEBASE_MARGINHEIGHT                        DISPID_FRAMESITE+6
#define DISPID_IHTMLFRAMEBASE_NORESIZE                            DISPID_FRAMESITE+7
#define DISPID_IHTMLFRAMEBASE_SCROLLING                           DISPID_FRAMESITE+8

//    DISPIDs for interface IHTMLFrameBase2

#define DISPID_IHTMLFRAMEBASE2_CONTENTWINDOW                      DISPID_FRAMESITE+9
#define DISPID_IHTMLFRAMEBASE2_ONLOAD                             DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLFRAMEBASE2_ONREADYSTATECHANGE                 DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLFRAMEBASE2_READYSTATE                         DISPID_A_READYSTATE
#define DISPID_IHTMLFRAMEBASE2_ALLOWTRANSPARENCY                  DISPID_A_ALLOWTRANSPARENCY

//    DISPIDs for interface IHTMLFrameBase3

#define DISPID_IHTMLFRAMEBASE3_LONGDESC                           DISPID_FRAMESITE+10

//    DISPIDs for event set HTMLFrameSiteEvents2

#define DISPID_HTMLFRAMESITEEVENTS2_ONLOAD                        DISPID_EVMETH_ONLOAD

//    DISPIDs for event set HTMLFrameSiteEvents

#define DISPID_HTMLFRAMESITEEVENTS_ONLOAD                         DISPID_EVMETH_ONLOAD

//    DISPIDs for interface IHTMLFrameElement

#define DISPID_IHTMLFRAMEELEMENT_BORDERCOLOR                      DISPID_FRAME+1

//    DISPIDs for interface IHTMLFrameElement2

#define DISPID_IHTMLFRAMEELEMENT2_HEIGHT                          STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLFRAMEELEMENT2_WIDTH                           STDPROPID_XOBJ_WIDTH

//    DISPIDs for interface IHTMLFrameElement3

#define DISPID_IHTMLFRAMEELEMENT3_CONTENTDOCUMENT                 DISPID_IE8_FRAME
#define DISPID_IHTMLFRAMEELEMENT3_IE8_SRC                         DISPID_IE8_FRAME+1
#define DISPID_IHTMLFRAMEELEMENT3_IE8_LONGDESC                    DISPID_IE8_FRAME+2
#define DISPID_IHTMLFRAMEELEMENT3_IE8_FRAMEBORDER                 DISPID_IE8_FRAME+3

//    DISPIDs for interface IHTMLIFrameElement

#define DISPID_IHTMLIFRAMEELEMENT_VSPACE                          DISPID_IFRAME+1
#define DISPID_IHTMLIFRAMEELEMENT_HSPACE                          DISPID_IFRAME+2
#define DISPID_IHTMLIFRAMEELEMENT_ALIGN                           STDPROPID_XOBJ_CONTROLALIGN

//    DISPIDs for interface IHTMLIFrameElement2

#define DISPID_IHTMLIFRAMEELEMENT2_HEIGHT                         STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLIFRAMEELEMENT2_WIDTH                          STDPROPID_XOBJ_WIDTH

//    DISPIDs for interface IHTMLIFrameElement3

#define DISPID_IHTMLIFRAMEELEMENT3_CONTENTDOCUMENT                DISPID_IE8_IFRAME
#define DISPID_IHTMLIFRAMEELEMENT3_IE8_SRC                        DISPID_IE8_IFRAME+1
#define DISPID_IHTMLIFRAMEELEMENT3_IE8_LONGDESC                   DISPID_IE8_IFRAME+2
#define DISPID_IHTMLIFRAMEELEMENT3_IE8_FRAMEBORDER                DISPID_IE8_IFRAME+3

//    DISPIDs for interface IHTMLDivPosition

#define DISPID_IHTMLDIVPOSITION_ALIGN                             STDPROPID_XOBJ_CONTROLALIGN

//    DISPIDs for interface IHTMLFieldSetElement

#define DISPID_IHTMLFIELDSETELEMENT_ALIGN                         STDPROPID_XOBJ_CONTROLALIGN

//    DISPIDs for interface IHTMLFieldSetElement2

#define DISPID_IHTMLFIELDSETELEMENT2_FORM                         DISPID_SITE+4

//    DISPIDs for interface IHTMLLegendElement

#define DISPID_IHTMLLEGENDELEMENT_ALIGN                           STDPROPID_XOBJ_CONTROLALIGN

//    DISPIDs for interface IHTMLLegendElement2

#define DISPID_IHTMLLEGENDELEMENT2_FORM                           DISPID_SITE+4

//    DISPIDs for interface IHTMLSpanFlow

#define DISPID_IHTMLSPANFLOW_ALIGN                                STDPROPID_XOBJ_CONTROLALIGN

//    DISPIDs for interface IHTMLFrameSetElement

#define DISPID_IHTMLFRAMESETELEMENT_ROWS                          DISPID_FRAMESET
#define DISPID_IHTMLFRAMESETELEMENT_COLS                          DISPID_FRAMESET+1
#define DISPID_IHTMLFRAMESETELEMENT_BORDER                        DISPID_FRAMESET+2
#define DISPID_IHTMLFRAMESETELEMENT_BORDERCOLOR                   DISPID_FRAMESET+3
#define DISPID_IHTMLFRAMESETELEMENT_FRAMEBORDER                   DISPID_FRAMESET+4
#define DISPID_IHTMLFRAMESETELEMENT_FRAMESPACING                  DISPID_FRAMESET+5
#define DISPID_IHTMLFRAMESETELEMENT_NAME                          STDPROPID_XOBJ_NAME
#define DISPID_IHTMLFRAMESETELEMENT_ONLOAD                        DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLFRAMESETELEMENT_ONUNLOAD                      DISPID_EVPROP_ONUNLOAD
#define DISPID_IHTMLFRAMESETELEMENT_ONBEFOREUNLOAD                DISPID_EVPROP_ONBEFOREUNLOAD

//    DISPIDs for interface IHTMLFrameSetElement2

#define DISPID_IHTMLFRAMESETELEMENT2_ONBEFOREPRINT                DISPID_EVPROP_ONBEFOREPRINT
#define DISPID_IHTMLFRAMESETELEMENT2_ONAFTERPRINT                 DISPID_EVPROP_ONAFTERPRINT

//    DISPIDs for interface IHTMLFrameSetElement3

#define DISPID_IHTMLFRAMESETELEMENT3_ONHASHCHANGE                 DISPID_EVPROP_ONHASHCHANGE
#define DISPID_IHTMLFRAMESETELEMENT3_ONMESSAGE                    DISPID_EVPROP_ONMESSAGE
#define DISPID_IHTMLFRAMESETELEMENT3_ONOFFLINE                    DISPID_EVPROP_ONOFFLINE
#define DISPID_IHTMLFRAMESETELEMENT3_ONONLINE                     DISPID_EVPROP_ONONLINE
#define DISPID_IHTMLFRAMESETELEMENT3_ONSTORAGE                    DISPID_EVPROP_ONSTORAGE

//    DISPIDs for interface IHTMLBGsound

#define DISPID_IHTMLBGSOUND_SRC                                   DISPID_BGSOUND+1
#define DISPID_IHTMLBGSOUND_LOOP                                  DISPID_BGSOUND+2
#define DISPID_IHTMLBGSOUND_VOLUME                                DISPID_BGSOUND+3
#define DISPID_IHTMLBGSOUND_BALANCE                               DISPID_BGSOUND+4

//    DISPIDs for interface IHTMLFontNamesCollection

#define DISPID_IHTMLFONTNAMESCOLLECTION_LENGTH                    DISPID_OPTIONS_COL+1
#define DISPID_IHTMLFONTNAMESCOLLECTION__NEWENUM                  DISPID_NEWENUM
#define DISPID_IHTMLFONTNAMESCOLLECTION_ITEM                      DISPID_VALUE

//    DISPIDs for interface IHTMLFontSizesCollection

#define DISPID_IHTMLFONTSIZESCOLLECTION_LENGTH                    DISPID_OPTIONS_COL+2
#define DISPID_IHTMLFONTSIZESCOLLECTION__NEWENUM                  DISPID_NEWENUM
#define DISPID_IHTMLFONTSIZESCOLLECTION_FORFONT                   DISPID_OPTIONS_COL+3
#define DISPID_IHTMLFONTSIZESCOLLECTION_ITEM                      DISPID_VALUE

//    DISPIDs for interface IHTMLOptionsHolder

#define DISPID_IHTMLOPTIONSHOLDER_DOCUMENT                        DISPID_OPTIONS_COL+3
#define DISPID_IHTMLOPTIONSHOLDER_FONTS                           DISPID_OPTIONS_COL+4
#define DISPID_IHTMLOPTIONSHOLDER_EXECARG                         DISPID_OPTIONS_COL+5
#define DISPID_IHTMLOPTIONSHOLDER_ERRORLINE                       DISPID_OPTIONS_COL+6
#define DISPID_IHTMLOPTIONSHOLDER_ERRORCHARACTER                  DISPID_OPTIONS_COL+7
#define DISPID_IHTMLOPTIONSHOLDER_ERRORCODE                       DISPID_OPTIONS_COL+8
#define DISPID_IHTMLOPTIONSHOLDER_ERRORMESSAGE                    DISPID_OPTIONS_COL+9
#define DISPID_IHTMLOPTIONSHOLDER_ERRORDEBUG                      DISPID_OPTIONS_COL+10
#define DISPID_IHTMLOPTIONSHOLDER_UNSECUREDWINDOWOFDOCUMENT       DISPID_OPTIONS_COL+11
#define DISPID_IHTMLOPTIONSHOLDER_FINDTEXT                        DISPID_OPTIONS_COL+12
#define DISPID_IHTMLOPTIONSHOLDER_ANYTHINGAFTERFRAMESET           DISPID_OPTIONS_COL+13
#define DISPID_IHTMLOPTIONSHOLDER_SIZES                           DISPID_OPTIONS_COL+14
#define DISPID_IHTMLOPTIONSHOLDER_OPENFILEDLG                     DISPID_OPTIONS_COL+15
#define DISPID_IHTMLOPTIONSHOLDER_SAVEFILEDLG                     DISPID_OPTIONS_COL+16
#define DISPID_IHTMLOPTIONSHOLDER_CHOOSECOLORDLG                  DISPID_OPTIONS_COL+17
#define DISPID_IHTMLOPTIONSHOLDER_SHOWSECURITYINFO                DISPID_OPTIONS_COL+18
#define DISPID_IHTMLOPTIONSHOLDER_ISAPARTMENTMODEL                DISPID_OPTIONS_COL+19
#define DISPID_IHTMLOPTIONSHOLDER_GETCHARSET                      DISPID_OPTIONS_COL+20
#define DISPID_IHTMLOPTIONSHOLDER_SECURECONNECTIONINFO            DISPID_OPTIONS_COL+21

//    DISPIDs for interface IHTMLStyleElement

#define DISPID_IHTMLSTYLEELEMENT_TYPE                             DISPID_STYLEELEMENT+2
#define DISPID_IHTMLSTYLEELEMENT_READYSTATE                       DISPID_A_READYSTATE
#define DISPID_IHTMLSTYLEELEMENT_ONREADYSTATECHANGE               DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLSTYLEELEMENT_ONLOAD                           DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLSTYLEELEMENT_ONERROR                          DISPID_EVPROP_ONERROR
#define DISPID_IHTMLSTYLEELEMENT_STYLESHEET                       DISPID_STYLEELEMENT+4
#define DISPID_IHTMLSTYLEELEMENT_DISABLED                         STDPROPID_XOBJ_DISABLED
#define DISPID_IHTMLSTYLEELEMENT_MEDIA                            DISPID_STYLEELEMENT+6

//    DISPIDs for interface IHTMLStyleElement2

#define DISPID_IHTMLSTYLEELEMENT2_SHEET                           DISPID_STYLEELEMENT+7

//    DISPIDs for event set HTMLStyleElementEvents2

#define DISPID_HTMLSTYLEELEMENTEVENTS2_ONLOAD                     DISPID_EVMETH_ONLOAD
#define DISPID_HTMLSTYLEELEMENTEVENTS2_ONERROR                    DISPID_EVMETH_ONERROR

//    DISPIDs for event set HTMLStyleElementEvents

#define DISPID_HTMLSTYLEELEMENTEVENTS_ONLOAD                      DISPID_EVMETH_ONLOAD
#define DISPID_HTMLSTYLEELEMENTEVENTS_ONERROR                     DISPID_EVMETH_ONERROR

//    DISPIDs for interface IHTMLStyleFontFace

#define DISPID_IHTMLSTYLEFONTFACE_FONTSRC                         DISPID_A_FONTFACESRC

//    DISPIDs for interface IHTMLStyleFontFace2

#define DISPID_IHTMLSTYLEFONTFACE2_STYLE                          STDPROPID_XOBJ_STYLE

//    DISPIDs for interface IHTMLXDomainRequest

#define DISPID_IHTMLXDOMAINREQUEST_RESPONSETEXT                   DISPID_XDOMAINREQUEST+3
#define DISPID_IHTMLXDOMAINREQUEST_TIMEOUT                        DISPID_XDOMAINREQUEST+4
#define DISPID_IHTMLXDOMAINREQUEST_CONTENTTYPE                    DISPID_XDOMAINREQUEST+5
#define DISPID_IHTMLXDOMAINREQUEST_ONPROGRESS                     DISPID_XDOMAINREQUEST+6
#define DISPID_IHTMLXDOMAINREQUEST_ONERROR                        DISPID_EVPROP_ONERROR
#define DISPID_IHTMLXDOMAINREQUEST_ONTIMEOUT                      DISPID_EVPROP_TIMEOUT
#define DISPID_IHTMLXDOMAINREQUEST_ONLOAD                         DISPID_EVPROP_ONLOAD
#define DISPID_IHTMLXDOMAINREQUEST_ABORT                          DISPID_XDOMAINREQUEST+10
#define DISPID_IHTMLXDOMAINREQUEST_OPEN                           DISPID_XDOMAINREQUEST+11
#define DISPID_IHTMLXDOMAINREQUEST_SEND                           DISPID_XDOMAINREQUEST+12

//    DISPIDs for interface IHTMLXDomainRequestFactory

#define DISPID_IHTMLXDOMAINREQUESTFACTORY_CREATE                  DISPID_VALUE

//    DISPIDs for interface IHTMLStorage

#define DISPID_IHTMLSTORAGE_LENGTH                                DISPID_DOMSTORAGE+1
#define DISPID_IHTMLSTORAGE_REMAININGSPACE                        DISPID_DOMSTORAGE+2
#define DISPID_IHTMLSTORAGE_KEY                                   DISPID_DOMSTORAGE+6
#define DISPID_IHTMLSTORAGE_GETITEM                               DISPID_DOMSTORAGE+3
#define DISPID_IHTMLSTORAGE_SETITEM                               DISPID_DOMSTORAGE+4
#define DISPID_IHTMLSTORAGE_REMOVEITEM                            DISPID_DOMSTORAGE+5
#define DISPID_IHTMLSTORAGE_CLEAR                                 DISPID_DOMSTORAGE+7

//    DISPIDs for interface IHTMLStorage2

#define DISPID_IHTMLSTORAGE2_IE9_SETITEM                          DISPID_DOMSTORAGE+8

//    DISPIDs for interface IEventTarget

#define DISPID_IEVENTTARGET_ADDEVENTLISTENER                      DISPID_HTMLOBJECT+10
#define DISPID_IEVENTTARGET_REMOVEEVENTLISTENER                   DISPID_HTMLOBJECT+11
#define DISPID_IEVENTTARGET_DISPATCHEVENT                         DISPID_HTMLOBJECT+12

//    DISPIDs for interface IDOMEvent

#define DISPID_IDOMEVENT_BUBBLES                                  DISPID_DOMEVENT+1
#define DISPID_IDOMEVENT_CANCELABLE                               DISPID_DOMEVENT+2
#define DISPID_IDOMEVENT_CURRENTTARGET                            DISPID_DOMEVENT+3
#define DISPID_IDOMEVENT_DEFAULTPREVENTED                         DISPID_DOMEVENT+4
#define DISPID_IDOMEVENT_EVENTPHASE                               DISPID_DOMEVENT+5
#define DISPID_IDOMEVENT_TARGET                                   DISPID_DOMEVENT+6
#define DISPID_IDOMEVENT_TIMESTAMP                                DISPID_DOMEVENT+7
#define DISPID_IDOMEVENT_TYPE                                     DISPID_DOMEVENT+8
#define DISPID_IDOMEVENT_INITEVENT                                DISPID_DOMEVENT+9
#define DISPID_IDOMEVENT_PREVENTDEFAULT                           DISPID_DOMEVENT+10
#define DISPID_IDOMEVENT_STOPPROPAGATION                          DISPID_DOMEVENT+11
#define DISPID_IDOMEVENT_STOPIMMEDIATEPROPAGATION                 DISPID_DOMEVENT+12
#define DISPID_IDOMEVENT_ISTRUSTED                                DISPID_DOMEVENT+13
#define DISPID_IDOMEVENT_CANCELBUBBLE                             DISPID_DOMEVENT+14
#define DISPID_IDOMEVENT_SRCELEMENT                               DISPID_DOMEVENT+15

//    DISPIDs for interface IDOMUIEvent

#define DISPID_IDOMUIEVENT_VIEW                                   DISPID_DOMUIEVENT+1
#define DISPID_IDOMUIEVENT_DETAIL                                 DISPID_DOMUIEVENT+2
#define DISPID_IDOMUIEVENT_INITUIEVENT                            DISPID_DOMUIEVENT+3

//    DISPIDs for interface IDOMMouseEvent

#define DISPID_IDOMMOUSEEVENT_SCREENX                             DISPID_DOMMOUSEEVENT+1
#define DISPID_IDOMMOUSEEVENT_SCREENY                             DISPID_DOMMOUSEEVENT+2
#define DISPID_IDOMMOUSEEVENT_CLIENTX                             DISPID_DOMMOUSEEVENT+3
#define DISPID_IDOMMOUSEEVENT_CLIENTY                             DISPID_DOMMOUSEEVENT+4
#define DISPID_IDOMMOUSEEVENT_CTRLKEY                             DISPID_DOMMOUSEEVENT+5
#define DISPID_IDOMMOUSEEVENT_SHIFTKEY                            DISPID_DOMMOUSEEVENT+6
#define DISPID_IDOMMOUSEEVENT_ALTKEY                              DISPID_DOMMOUSEEVENT+7
#define DISPID_IDOMMOUSEEVENT_METAKEY                             DISPID_DOMMOUSEEVENT+8
#define DISPID_IDOMMOUSEEVENT_BUTTON                              DISPID_DOMMOUSEEVENT+9
#define DISPID_IDOMMOUSEEVENT_RELATEDTARGET                       DISPID_DOMMOUSEEVENT+10
#define DISPID_IDOMMOUSEEVENT_INITMOUSEEVENT                      DISPID_DOMMOUSEEVENT+11
#define DISPID_IDOMMOUSEEVENT_GETMODIFIERSTATE                    DISPID_DOMMOUSEEVENT+12
#define DISPID_IDOMMOUSEEVENT_BUTTONS                             DISPID_DOMMOUSEEVENT+13
#define DISPID_IDOMMOUSEEVENT_FROMELEMENT                         DISPID_DOMMOUSEEVENT+14
#define DISPID_IDOMMOUSEEVENT_TOELEMENT                           DISPID_DOMMOUSEEVENT+15
#define DISPID_IDOMMOUSEEVENT_X                                   DISPID_DOMMOUSEEVENT+16
#define DISPID_IDOMMOUSEEVENT_Y                                   DISPID_DOMMOUSEEVENT+17
#define DISPID_IDOMMOUSEEVENT_OFFSETX                             DISPID_DOMMOUSEEVENT+18
#define DISPID_IDOMMOUSEEVENT_OFFSETY                             DISPID_DOMMOUSEEVENT+19
#define DISPID_IDOMMOUSEEVENT_PAGEX                               DISPID_DOMMOUSEEVENT+20
#define DISPID_IDOMMOUSEEVENT_PAGEY                               DISPID_DOMMOUSEEVENT+21
#define DISPID_IDOMMOUSEEVENT_LAYERX                              DISPID_DOMMOUSEEVENT+22
#define DISPID_IDOMMOUSEEVENT_LAYERY                              DISPID_DOMMOUSEEVENT+23
#define DISPID_IDOMMOUSEEVENT_WHICH                               DISPID_DOMMOUSEEVENT+24

//    DISPIDs for interface IDOMDragEvent

#define DISPID_IDOMDRAGEVENT_DATATRANSFER                         DISPID_DOMDRAGEVENT+1
#define DISPID_IDOMDRAGEVENT_INITDRAGEVENT                        DISPID_DOMDRAGEVENT+2

//    DISPIDs for interface IDOMMouseWheelEvent

#define DISPID_IDOMMOUSEWHEELEVENT_WHEELDELTA                     DISPID_DOMMOUSEWHEELEVENT+1
#define DISPID_IDOMMOUSEWHEELEVENT_INITMOUSEWHEELEVENT            DISPID_DOMMOUSEWHEELEVENT+2

//    DISPIDs for interface IDOMWheelEvent

#define DISPID_IDOMWHEELEVENT_DELTAX                              DISPID_DOMWHEELEVENT+1
#define DISPID_IDOMWHEELEVENT_DELTAY                              DISPID_DOMWHEELEVENT+2
#define DISPID_IDOMWHEELEVENT_DELTAZ                              DISPID_DOMWHEELEVENT+3
#define DISPID_IDOMWHEELEVENT_DELTAMODE                           DISPID_DOMWHEELEVENT+4
#define DISPID_IDOMWHEELEVENT_INITWHEELEVENT                      DISPID_DOMWHEELEVENT+5

//    DISPIDs for interface IDOMTextEvent

#define DISPID_IDOMTEXTEVENT_DATA                                 DISPID_DOMTEXTEVENT+1
#define DISPID_IDOMTEXTEVENT_INPUTMETHOD                          DISPID_DOMTEXTEVENT+2
#define DISPID_IDOMTEXTEVENT_INITTEXTEVENT                        DISPID_DOMTEXTEVENT+3
#define DISPID_IDOMTEXTEVENT_LOCALE                               DISPID_DOMTEXTEVENT+4

//    DISPIDs for interface IDOMKeyboardEvent

#define DISPID_IDOMKEYBOARDEVENT_KEY                              DISPID_DOMKEYBOARDEVENT+1
#define DISPID_IDOMKEYBOARDEVENT_LOCATION                         DISPID_DOMKEYBOARDEVENT+2
#define DISPID_IDOMKEYBOARDEVENT_CTRLKEY                          DISPID_DOMKEYBOARDEVENT+3
#define DISPID_IDOMKEYBOARDEVENT_SHIFTKEY                         DISPID_DOMKEYBOARDEVENT+4
#define DISPID_IDOMKEYBOARDEVENT_ALTKEY                           DISPID_DOMKEYBOARDEVENT+5
#define DISPID_IDOMKEYBOARDEVENT_METAKEY                          DISPID_DOMKEYBOARDEVENT+6
#define DISPID_IDOMKEYBOARDEVENT_REPEAT                           DISPID_DOMKEYBOARDEVENT+7
#define DISPID_IDOMKEYBOARDEVENT_GETMODIFIERSTATE                 DISPID_DOMKEYBOARDEVENT+8
#define DISPID_IDOMKEYBOARDEVENT_INITKEYBOARDEVENT                DISPID_DOMKEYBOARDEVENT+9
#define DISPID_IDOMKEYBOARDEVENT_KEYCODE                          DISPID_DOMKEYBOARDEVENT+10
#define DISPID_IDOMKEYBOARDEVENT_CHARCODE                         DISPID_DOMKEYBOARDEVENT+11
#define DISPID_IDOMKEYBOARDEVENT_WHICH                            DISPID_DOMKEYBOARDEVENT+12
#define DISPID_IDOMKEYBOARDEVENT_IE9_CHAR                         DISPID_DOMKEYBOARDEVENT+13
#define DISPID_IDOMKEYBOARDEVENT_LOCALE                           DISPID_DOMKEYBOARDEVENT+14

//    DISPIDs for interface IDOMCompositionEvent

#define DISPID_IDOMCOMPOSITIONEVENT_DATA                          DISPID_DOMCOMPOSITIONEVENT+1
#define DISPID_IDOMCOMPOSITIONEVENT_INITCOMPOSITIONEVENT          DISPID_DOMCOMPOSITIONEVENT+2
#define DISPID_IDOMCOMPOSITIONEVENT_LOCALE                        DISPID_DOMCOMPOSITIONEVENT+3

//    DISPIDs for interface IDOMMutationEvent

#define DISPID_IDOMMUTATIONEVENT_RELATEDNODE                      DISPID_DOMMUTATIONEVENT+1
#define DISPID_IDOMMUTATIONEVENT_PREVVALUE                        DISPID_DOMMUTATIONEVENT+2
#define DISPID_IDOMMUTATIONEVENT_NEWVALUE                         DISPID_DOMMUTATIONEVENT+3
#define DISPID_IDOMMUTATIONEVENT_ATTRNAME                         DISPID_DOMMUTATIONEVENT+4
#define DISPID_IDOMMUTATIONEVENT_ATTRCHANGE                       DISPID_DOMMUTATIONEVENT+5
#define DISPID_IDOMMUTATIONEVENT_INITMUTATIONEVENT                DISPID_DOMMUTATIONEVENT+6

//    DISPIDs for interface IDOMBeforeUnloadEvent

#define DISPID_IDOMBEFOREUNLOADEVENT_RETURNVALUE                  DISPID_DOMBEFOREUNLOADEVENT+1

//    DISPIDs for interface IDOMFocusEvent

#define DISPID_IDOMFOCUSEVENT_RELATEDTARGET                       DISPID_DOMFOCUSEVENT+1
#define DISPID_IDOMFOCUSEVENT_INITFOCUSEVENT                      DISPID_DOMFOCUSEVENT+2

//    DISPIDs for interface IDOMCustomEvent

#define DISPID_IDOMCUSTOMEVENT_DETAIL                             DISPID_DOMCUSTOMEVENT+1
#define DISPID_IDOMCUSTOMEVENT_INITCUSTOMEVENT                    DISPID_DOMCUSTOMEVENT+2

//    DISPIDs for interface ICanvasGradient

#define DISPID_ICANVASGRADIENT_ADDCOLORSTOP                       DISPID_CANVASGRADIENT

//    DISPIDs for interface ICanvasTextMetrics

#define DISPID_ICANVASTEXTMETRICS_WIDTH                           DISPID_CANVASTEXTMETRICS

//    DISPIDs for interface ICanvasImageData

#define DISPID_ICANVASIMAGEDATA_WIDTH                             DISPID_CANVASIMAGEDATA
#define DISPID_ICANVASIMAGEDATA_HEIGHT                            DISPID_CANVASIMAGEDATA+1
#define DISPID_ICANVASIMAGEDATA_DATA                              DISPID_CANVASIMAGEDATA+2

//    DISPIDs for interface ICanvasPixelArray

#define DISPID_ICANVASPIXELARRAY_LENGTH                           DISPID_CANVASPIXELARRAY

//    DISPIDs for interface ICanvasRenderingContext2D

#define DISPID_ICANVASRENDERINGCONTEXT2D_CANVAS                   DISPID_CANVASRENDERCONTEXT2D
#define DISPID_ICANVASRENDERINGCONTEXT2D_RESTORE                  DISPID_CANVASRENDERCONTEXT2D+1
#define DISPID_ICANVASRENDERINGCONTEXT2D_SAVE                     DISPID_CANVASRENDERCONTEXT2D+2
#define DISPID_ICANVASRENDERINGCONTEXT2D_ROTATE                   DISPID_CANVASRENDERCONTEXT2D+3
#define DISPID_ICANVASRENDERINGCONTEXT2D_SCALE                    DISPID_CANVASRENDERCONTEXT2D+4
#define DISPID_ICANVASRENDERINGCONTEXT2D_SETTRANSFORM             DISPID_CANVASRENDERCONTEXT2D+5
#define DISPID_ICANVASRENDERINGCONTEXT2D_TRANSFORM                DISPID_CANVASRENDERCONTEXT2D+6
#define DISPID_ICANVASRENDERINGCONTEXT2D_TRANSLATE                DISPID_CANVASRENDERCONTEXT2D+7
#define DISPID_ICANVASRENDERINGCONTEXT2D_GLOBALALPHA              DISPID_CANVASRENDERCONTEXT2D+8
#define DISPID_ICANVASRENDERINGCONTEXT2D_GLOBALCOMPOSITEOPERATION DISPID_CANVASRENDERCONTEXT2D+9
#define DISPID_ICANVASRENDERINGCONTEXT2D_FILLSTYLE                DISPID_CANVASRENDERCONTEXT2D+10
#define DISPID_ICANVASRENDERINGCONTEXT2D_STROKESTYLE              DISPID_CANVASRENDERCONTEXT2D+11
#define DISPID_ICANVASRENDERINGCONTEXT2D_CREATELINEARGRADIENT     DISPID_CANVASRENDERCONTEXT2D+12
#define DISPID_ICANVASRENDERINGCONTEXT2D_CREATERADIALGRADIENT     DISPID_CANVASRENDERCONTEXT2D+13
#define DISPID_ICANVASRENDERINGCONTEXT2D_CREATEPATTERN            DISPID_CANVASRENDERCONTEXT2D+14
#define DISPID_ICANVASRENDERINGCONTEXT2D_LINECAP                  DISPID_CANVASRENDERCONTEXT2D+15
#define DISPID_ICANVASRENDERINGCONTEXT2D_LINEJOIN                 DISPID_CANVASRENDERCONTEXT2D+16
#define DISPID_ICANVASRENDERINGCONTEXT2D_LINEWIDTH                DISPID_CANVASRENDERCONTEXT2D+17
#define DISPID_ICANVASRENDERINGCONTEXT2D_MITERLIMIT               DISPID_CANVASRENDERCONTEXT2D+18
#define DISPID_ICANVASRENDERINGCONTEXT2D_SHADOWBLUR               DISPID_CANVASRENDERCONTEXT2D+19
#define DISPID_ICANVASRENDERINGCONTEXT2D_SHADOWCOLOR              DISPID_CANVASRENDERCONTEXT2D+20
#define DISPID_ICANVASRENDERINGCONTEXT2D_SHADOWOFFSETX            DISPID_CANVASRENDERCONTEXT2D+21
#define DISPID_ICANVASRENDERINGCONTEXT2D_SHADOWOFFSETY            DISPID_CANVASRENDERCONTEXT2D+22
#define DISPID_ICANVASRENDERINGCONTEXT2D_CLEARRECT                DISPID_CANVASRENDERCONTEXT2D+23
#define DISPID_ICANVASRENDERINGCONTEXT2D_FILLRECT                 DISPID_CANVASRENDERCONTEXT2D+24
#define DISPID_ICANVASRENDERINGCONTEXT2D_STROKERECT               DISPID_CANVASRENDERCONTEXT2D+25
#define DISPID_ICANVASRENDERINGCONTEXT2D_ARC                      DISPID_CANVASRENDERCONTEXT2D+26
#define DISPID_ICANVASRENDERINGCONTEXT2D_ARCTO                    DISPID_CANVASRENDERCONTEXT2D+27
#define DISPID_ICANVASRENDERINGCONTEXT2D_BEGINPATH                DISPID_CANVASRENDERCONTEXT2D+28
#define DISPID_ICANVASRENDERINGCONTEXT2D_BEZIERCURVETO            DISPID_CANVASRENDERCONTEXT2D+29
#define DISPID_ICANVASRENDERINGCONTEXT2D_CLIP                     DISPID_CANVASRENDERCONTEXT2D+30
#define DISPID_ICANVASRENDERINGCONTEXT2D_CLOSEPATH                DISPID_CANVASRENDERCONTEXT2D+31
#define DISPID_ICANVASRENDERINGCONTEXT2D_FILL                     DISPID_CANVASRENDERCONTEXT2D+32
#define DISPID_ICANVASRENDERINGCONTEXT2D_LINETO                   DISPID_CANVASRENDERCONTEXT2D+33
#define DISPID_ICANVASRENDERINGCONTEXT2D_MOVETO                   DISPID_CANVASRENDERCONTEXT2D+34
#define DISPID_ICANVASRENDERINGCONTEXT2D_QUADRATICCURVETO         DISPID_CANVASRENDERCONTEXT2D+35
#define DISPID_ICANVASRENDERINGCONTEXT2D_RECT                     DISPID_CANVASRENDERCONTEXT2D+36
#define DISPID_ICANVASRENDERINGCONTEXT2D_STROKE                   DISPID_CANVASRENDERCONTEXT2D+37
#define DISPID_ICANVASRENDERINGCONTEXT2D_ISPOINTINPATH            DISPID_CANVASRENDERCONTEXT2D+38
#define DISPID_ICANVASRENDERINGCONTEXT2D_FONT                     DISPID_CANVASRENDERCONTEXT2D+39
#define DISPID_ICANVASRENDERINGCONTEXT2D_TEXTALIGN                DISPID_CANVASRENDERCONTEXT2D+40
#define DISPID_ICANVASRENDERINGCONTEXT2D_TEXTBASELINE             DISPID_CANVASRENDERCONTEXT2D+41
#define DISPID_ICANVASRENDERINGCONTEXT2D_FILLTEXT                 DISPID_CANVASRENDERCONTEXT2D+42
#define DISPID_ICANVASRENDERINGCONTEXT2D_MEASURETEXT              DISPID_CANVASRENDERCONTEXT2D+43
#define DISPID_ICANVASRENDERINGCONTEXT2D_STROKETEXT               DISPID_CANVASRENDERCONTEXT2D+44
#define DISPID_ICANVASRENDERINGCONTEXT2D_DRAWIMAGE                DISPID_CANVASRENDERCONTEXT2D+45
#define DISPID_ICANVASRENDERINGCONTEXT2D_CREATEIMAGEDATA          DISPID_CANVASRENDERCONTEXT2D+46
#define DISPID_ICANVASRENDERINGCONTEXT2D_GETIMAGEDATA             DISPID_CANVASRENDERCONTEXT2D+47
#define DISPID_ICANVASRENDERINGCONTEXT2D_PUTIMAGEDATA             DISPID_CANVASRENDERCONTEXT2D+48

//    DISPIDs for interface IHTMLCanvasElement

#define DISPID_IHTMLCANVASELEMENT_WIDTH                           STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLCANVASELEMENT_HEIGHT                          STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLCANVASELEMENT_GETCONTEXT                      DISPID_CANVASELEMENT+1
#define DISPID_IHTMLCANVASELEMENT_TODATAURL                       DISPID_CANVASELEMENT+2

//    DISPIDs for interface IDOMProgressEvent

#define DISPID_IDOMPROGRESSEVENT_LENGTHCOMPUTABLE                 DISPID_DOMPROGRESSEVENT+1
#define DISPID_IDOMPROGRESSEVENT_LOADED                           DISPID_DOMPROGRESSEVENT+2
#define DISPID_IDOMPROGRESSEVENT_TOTAL                            DISPID_DOMPROGRESSEVENT+3
#define DISPID_IDOMPROGRESSEVENT_INITPROGRESSEVENT                DISPID_DOMPROGRESSEVENT+4

//    DISPIDs for interface IDOMMessageEvent

#define DISPID_IDOMMESSAGEEVENT_DATA                              DISPID_DOMMESSAGEEVENT+1
#define DISPID_IDOMMESSAGEEVENT_ORIGIN                            DISPID_DOMMESSAGEEVENT+2
#define DISPID_IDOMMESSAGEEVENT_SOURCE                            DISPID_DOMMESSAGEEVENT+3
#define DISPID_IDOMMESSAGEEVENT_INITMESSAGEEVENT                  DISPID_DOMMESSAGEEVENT+4

//    DISPIDs for interface IDOMSiteModeEvent

#define DISPID_IDOMSITEMODEEVENT_BUTTONID                         DISPID_DOMSITEMODEEVENT+1
#define DISPID_IDOMSITEMODEEVENT_ACTIONURL                        DISPID_DOMSITEMODEEVENT+2

//    DISPIDs for interface IDOMStorageEvent

#define DISPID_IDOMSTORAGEEVENT_KEY                               DISPID_DOMSTORAGEEVENT+1
#define DISPID_IDOMSTORAGEEVENT_OLDVALUE                          DISPID_DOMSTORAGEEVENT+2
#define DISPID_IDOMSTORAGEEVENT_NEWVALUE                          DISPID_DOMSTORAGEEVENT+3
#define DISPID_IDOMSTORAGEEVENT_URL                               DISPID_DOMSTORAGEEVENT+4
#define DISPID_IDOMSTORAGEEVENT_STORAGEAREA                       DISPID_DOMSTORAGEEVENT+5
#define DISPID_IDOMSTORAGEEVENT_INITSTORAGEEVENT                  DISPID_DOMSTORAGEEVENT+6

//    DISPIDs for interface IHTMLXMLHttpRequest

#define DISPID_IHTMLXMLHTTPREQUEST_READYSTATE                     DISPID_XMLHTTPREQUEST+2
#define DISPID_IHTMLXMLHTTPREQUEST_RESPONSEBODY                   DISPID_XMLHTTPREQUEST+3
#define DISPID_IHTMLXMLHTTPREQUEST_RESPONSETEXT                   DISPID_XMLHTTPREQUEST+4
#define DISPID_IHTMLXMLHTTPREQUEST_RESPONSEXML                    DISPID_XMLHTTPREQUEST+5
#define DISPID_IHTMLXMLHTTPREQUEST_STATUS                         DISPID_XMLHTTPREQUEST+6
#define DISPID_IHTMLXMLHTTPREQUEST_STATUSTEXT                     DISPID_XMLHTTPREQUEST+7
#define DISPID_IHTMLXMLHTTPREQUEST_ONREADYSTATECHANGE             DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLXMLHTTPREQUEST_ABORT                          DISPID_XMLHTTPREQUEST+9
#define DISPID_IHTMLXMLHTTPREQUEST_OPEN                           DISPID_XMLHTTPREQUEST+10
#define DISPID_IHTMLXMLHTTPREQUEST_SEND                           DISPID_XMLHTTPREQUEST+11
#define DISPID_IHTMLXMLHTTPREQUEST_GETALLRESPONSEHEADERS          DISPID_XMLHTTPREQUEST+12
#define DISPID_IHTMLXMLHTTPREQUEST_GETRESPONSEHEADER              DISPID_XMLHTTPREQUEST+13
#define DISPID_IHTMLXMLHTTPREQUEST_SETREQUESTHEADER               DISPID_XMLHTTPREQUEST+14

//    DISPIDs for interface IHTMLXMLHttpRequest2

#define DISPID_IHTMLXMLHTTPREQUEST2_TIMEOUT                       DISPID_XMLHTTPREQUEST+15
#define DISPID_IHTMLXMLHTTPREQUEST2_ONTIMEOUT                     DISPID_EVPROP_TIMEOUT

//    DISPIDs for interface IHTMLXMLHttpRequestFactory

#define DISPID_IHTMLXMLHTTPREQUESTFACTORY_CREATE                  DISPID_VALUE

//    DISPIDs for event set HTMLXMLHttpRequestEvents

#define DISPID_HTMLXMLHTTPREQUESTEVENTS_ONTIMEOUT                 DISPID_XMLHTTPREQUEST+16
#define DISPID_HTMLXMLHTTPREQUESTEVENTS_ONREADYSTATECHANGE        DISPID_XMLHTTPREQUEST+8

//    DISPIDs for interface ISVGAngle

#define DISPID_ISVGANGLE_UNITTYPE                                 DISPID_SVGANGLE+0
#define DISPID_ISVGANGLE_VALUE                                    DISPID_SVGANGLE+1
#define DISPID_ISVGANGLE_VALUEINSPECIFIEDUNITS                    DISPID_SVGANGLE+2
#define DISPID_ISVGANGLE_VALUEASSTRING                            DISPID_SVGANGLE+3
#define DISPID_ISVGANGLE_NEWVALUESPECIFIEDUNITS                   DISPID_SVGANGLE+4
#define DISPID_ISVGANGLE_CONVERTTOSPECIFIEDUNITS                  DISPID_SVGANGLE+5

//    DISPIDs for interface ISVGStylable

#define DISPID_ISVGSTYLABLE_CLASSNAME                             DISPID_SVGSTYLABLE_CLASSNAME_PROP

//    DISPIDs for interface ISVGLocatable

#define DISPID_ISVGLOCATABLE_NEARESTVIEWPORTELEMENT               DISPID_SVGLOCATABLE_NEARESTVIEWPORTELEMENT
#define DISPID_ISVGLOCATABLE_FARTHESTVIEWPORTELEMENT              DISPID_SVGLOCATABLE_FARTHESTVIEWPORTELEMENT
#define DISPID_ISVGLOCATABLE_GETBBOX                              DISPID_SVGLOCATABLE_GETBBOX
#define DISPID_ISVGLOCATABLE_GETCTM                               DISPID_SVGLOCATABLE_GETCTM
#define DISPID_ISVGLOCATABLE_GETSCREENCTM                         DISPID_SVGLOCATABLE_GETSCREENCTM
#define DISPID_ISVGLOCATABLE_GETTRANSFORMTOELEMENT                DISPID_SVGLOCATABLE_GETTRANSFORMTOELEMENT

//    DISPIDs for interface ISVGTransformable

#define DISPID_ISVGTRANSFORMABLE_TRANSFORM                        DISPID_SVGTRANSFORMABLE_TRANSFORM_PROP

//    DISPIDs for interface ISVGTests

#define DISPID_ISVGTESTS_REQUIREDFEATURES                         DISPID_SVGTESTS_REQUIREDFEATURES_PROP
#define DISPID_ISVGTESTS_REQUIREDEXTENSIONS                       DISPID_SVGTESTS_REQUIREDEXTENSIONS_PROP
#define DISPID_ISVGTESTS_SYSTEMLANGUAGE                           DISPID_SVGTESTS_SYSTEMLANGUAGE_PROP
#define DISPID_ISVGTESTS_HASEXTENSION                             DISPID_SVGTESTS_HASEXTENSION

//    DISPIDs for interface ISVGLangSpace

#define DISPID_ISVGLANGSPACE_XMLLANG                              DISPID_SVGLANGSPACE_XMLLANG
#define DISPID_ISVGLANGSPACE_XMLSPACE                             DISPID_SVGLANGSPACE_XMLSPACE

//    DISPIDs for interface ISVGExternalResourcesRequired

#define DISPID_ISVGEXTERNALRESOURCESREQUIRED_EXTERNALRESOURCESREQUIRED DISPID_SVGEXTERNALRESOURCESREQUIRED_EXTERNALRESOURCESREQUIRED_PROP

//    DISPIDs for interface ISVGFitToViewBox

#define DISPID_ISVGFITTOVIEWBOX_VIEWBOX                           DISPID_SVGFITTOVIEWBOX_VIEWBOX_PROP
#define DISPID_ISVGFITTOVIEWBOX_PRESERVEASPECTRATIO               DISPID_SVGFITTOVIEWBOX_PRESERVEASPECTRATIO_PROP

//    DISPIDs for interface ISVGZoomAndPan

#define DISPID_ISVGZOOMANDPAN_ZOOMANDPAN                          DISPID_SVGZOOMANDPAN_ZOOMANDPAN

//    DISPIDs for interface ISVGURIReference

#define DISPID_ISVGURIREFERENCE_HREF                              DISPID_SVGURIREFERENCE_HREF

//    DISPIDs for interface ISVGAnimatedAngle

#define DISPID_ISVGANIMATEDANGLE_BASEVAL                          DISPID_SVGANIMATEDANGLE+0
#define DISPID_ISVGANIMATEDANGLE_ANIMVAL                          DISPID_SVGANIMATEDANGLE+1

//    DISPIDs for interface ISVGAnimatedTransformList

#define DISPID_ISVGANIMATEDTRANSFORMLIST_BASEVAL                  DISPID_SVGANIMATEDTRANSFORMLIST+0
#define DISPID_ISVGANIMATEDTRANSFORMLIST_ANIMVAL                  DISPID_SVGANIMATEDTRANSFORMLIST+1

//    DISPIDs for interface ISVGAnimatedBoolean

#define DISPID_ISVGANIMATEDBOOLEAN_BASEVAL                        DISPID_SVGANIMATEDBOOLEAN+0
#define DISPID_ISVGANIMATEDBOOLEAN_ANIMVAL                        DISPID_SVGANIMATEDBOOLEAN+1

//    DISPIDs for interface ISVGAnimatedEnumeration

#define DISPID_ISVGANIMATEDENUMERATION_BASEVAL                    DISPID_SVGANIMATEDENUMERATION+0
#define DISPID_ISVGANIMATEDENUMERATION_ANIMVAL                    DISPID_SVGANIMATEDENUMERATION+1

//    DISPIDs for interface ISVGAnimatedInteger

#define DISPID_ISVGANIMATEDINTEGER_BASEVAL                        DISPID_SVGANIMATEDINTEGER+0
#define DISPID_ISVGANIMATEDINTEGER_ANIMVAL                        DISPID_SVGANIMATEDINTEGER+1

//    DISPIDs for interface ISVGAnimatedLength

#define DISPID_ISVGANIMATEDLENGTH_BASEVAL                         DISPID_SVGANIMATEDLENGTH+0
#define DISPID_ISVGANIMATEDLENGTH_ANIMVAL                         DISPID_SVGANIMATEDLENGTH+1

//    DISPIDs for interface ISVGAnimatedLengthList

#define DISPID_ISVGANIMATEDLENGTHLIST_BASEVAL                     DISPID_SVGANIMATEDLENGTHLIST+0
#define DISPID_ISVGANIMATEDLENGTHLIST_ANIMVAL                     DISPID_SVGANIMATEDLENGTHLIST+1

//    DISPIDs for interface ISVGAnimatedNumber

#define DISPID_ISVGANIMATEDNUMBER_BASEVAL                         DISPID_SVGANIMATEDNUMBER+0
#define DISPID_ISVGANIMATEDNUMBER_ANIMVAL                         DISPID_SVGANIMATEDNUMBER+1

//    DISPIDs for interface ISVGAnimatedNumberList

#define DISPID_ISVGANIMATEDNUMBERLIST_BASEVAL                     DISPID_SVGANIMATEDNUMBERLIST+0
#define DISPID_ISVGANIMATEDNUMBERLIST_ANIMVAL                     DISPID_SVGANIMATEDNUMBERLIST+1

//    DISPIDs for interface ISVGAnimatedRect

#define DISPID_ISVGANIMATEDRECT_BASEVAL                           DISPID_SVGANIMATEDRECT+0
#define DISPID_ISVGANIMATEDRECT_ANIMVAL                           DISPID_SVGANIMATEDRECT+1

//    DISPIDs for interface ISVGAnimatedString

#define DISPID_ISVGANIMATEDSTRING_BASEVAL                         DISPID_SVGANIMATEDSTRING+0
#define DISPID_ISVGANIMATEDSTRING_ANIMVAL                         DISPID_SVGANIMATEDSTRING+1

//    DISPIDs for interface ISVGClipPathElement

#define DISPID_ISVGCLIPPATHELEMENT_CLIPPATHUNITS                  DISPID_SVGCLIPPATHELEMENT+1

//    DISPIDs for interface ISVGDocument

#define DISPID_ISVGDOCUMENT_ROOTELEMENT                           DISPID_OMDOCUMENT+116

//    DISPIDs for interface IGetSVGDocument

#define DISPID_IGETSVGDOCUMENT_GETSVGDOCUMENT                     STDPROPID_XOBJ_GETSVGDOCUMENT

//    DISPIDs for interface ISVGElement

#define DISPID_ISVGELEMENT_XMLBASE                                DISPID_SVGELEMENT+2
#define DISPID_ISVGELEMENT_OWNERSVGELEMENT                        DISPID_SVGELEMENT+3
#define DISPID_ISVGELEMENT_VIEWPORTELEMENT                        DISPID_SVGELEMENT+4
#define DISPID_ISVGELEMENT_FOCUSABLE                              DISPID_SVGELEMENT+6

//    DISPIDs for interface ISVGLength

#define DISPID_ISVGLENGTH_UNITTYPE                                DISPID_SVGLENGTH+0
#define DISPID_ISVGLENGTH_VALUE                                   DISPID_SVGLENGTH+1
#define DISPID_ISVGLENGTH_VALUEINSPECIFIEDUNITS                   DISPID_SVGLENGTH+2
#define DISPID_ISVGLENGTH_VALUEASSTRING                           DISPID_SVGLENGTH+3
#define DISPID_ISVGLENGTH_NEWVALUESPECIFIEDUNITS                  DISPID_SVGLENGTH+4
#define DISPID_ISVGLENGTH_CONVERTTOSPECIFIEDUNITS                 DISPID_SVGLENGTH+5

//    DISPIDs for interface ISVGLengthList

#define DISPID_ISVGLENGTHLIST_NUMBEROFITEMS                       DISPID_SVGLENGTHLIST+0
#define DISPID_ISVGLENGTHLIST_CLEAR                               DISPID_SVGLENGTHLIST+1
#define DISPID_ISVGLENGTHLIST_INITIALIZE                          DISPID_SVGLENGTHLIST+2
#define DISPID_ISVGLENGTHLIST_GETITEM                             DISPID_SVGLENGTHLIST+3
#define DISPID_ISVGLENGTHLIST_INSERTITEMBEFORE                    DISPID_SVGLENGTHLIST+4
#define DISPID_ISVGLENGTHLIST_REPLACEITEM                         DISPID_SVGLENGTHLIST+5
#define DISPID_ISVGLENGTHLIST_REMOVEITEM                          DISPID_SVGLENGTHLIST+6
#define DISPID_ISVGLENGTHLIST_APPENDITEM                          DISPID_SVGLENGTHLIST+7

//    DISPIDs for interface ISVGMatrix

#define DISPID_ISVGMATRIX_A                                       DISPID_SVGMATRIX+0
#define DISPID_ISVGMATRIX_B                                       DISPID_SVGMATRIX+1
#define DISPID_ISVGMATRIX_C                                       DISPID_SVGMATRIX+2
#define DISPID_ISVGMATRIX_D                                       DISPID_SVGMATRIX+3
#define DISPID_ISVGMATRIX_E                                       DISPID_SVGMATRIX+4
#define DISPID_ISVGMATRIX_F                                       DISPID_SVGMATRIX+5
#define DISPID_ISVGMATRIX_MULTIPLY                                DISPID_SVGMATRIX+6
#define DISPID_ISVGMATRIX_INVERSE                                 DISPID_SVGMATRIX+7
#define DISPID_ISVGMATRIX_TRANSLATE                               DISPID_SVGMATRIX+8
#define DISPID_ISVGMATRIX_SCALE                                   DISPID_SVGMATRIX+9
#define DISPID_ISVGMATRIX_SCALENONUNIFORM                         DISPID_SVGMATRIX+10
#define DISPID_ISVGMATRIX_ROTATE                                  DISPID_SVGMATRIX+11
#define DISPID_ISVGMATRIX_ROTATEFROMVECTOR                        DISPID_SVGMATRIX+12
#define DISPID_ISVGMATRIX_FLIPX                                   DISPID_SVGMATRIX+13
#define DISPID_ISVGMATRIX_FLIPY                                   DISPID_SVGMATRIX+14
#define DISPID_ISVGMATRIX_SKEWX                                   DISPID_SVGMATRIX+15
#define DISPID_ISVGMATRIX_SKEWY                                   DISPID_SVGMATRIX+16

//    DISPIDs for interface ISVGNumber

#define DISPID_ISVGNUMBER_VALUE                                   DISPID_SVGNUMBER+0

//    DISPIDs for interface ISVGNumberList

#define DISPID_ISVGNUMBERLIST_NUMBEROFITEMS                       DISPID_SVGNUMBERLIST+0
#define DISPID_ISVGNUMBERLIST_CLEAR                               DISPID_SVGNUMBERLIST+1
#define DISPID_ISVGNUMBERLIST_INITIALIZE                          DISPID_SVGNUMBERLIST+2
#define DISPID_ISVGNUMBERLIST_GETITEM                             DISPID_SVGNUMBERLIST+3
#define DISPID_ISVGNUMBERLIST_INSERTITEMBEFORE                    DISPID_SVGNUMBERLIST+4
#define DISPID_ISVGNUMBERLIST_REPLACEITEM                         DISPID_SVGNUMBERLIST+5
#define DISPID_ISVGNUMBERLIST_REMOVEITEM                          DISPID_SVGNUMBERLIST+6
#define DISPID_ISVGNUMBERLIST_APPENDITEM                          DISPID_SVGNUMBERLIST+7

//    DISPIDs for interface ISVGPatternElement

#define DISPID_ISVGPATTERNELEMENT_PATTERNUNITS                    DISPID_SVGPATTERNELEMENT+1
#define DISPID_ISVGPATTERNELEMENT_PATTERNCONTENTUNITS             DISPID_SVGPATTERNELEMENT+3
#define DISPID_ISVGPATTERNELEMENT_PATTERNTRANSFORM                DISPID_SVGPATTERNELEMENT+5
#define DISPID_ISVGPATTERNELEMENT_X                               DISPID_SVGPATTERNELEMENT+7
#define DISPID_ISVGPATTERNELEMENT_Y                               DISPID_SVGPATTERNELEMENT+9
#define DISPID_ISVGPATTERNELEMENT_WIDTH                           DISPID_SVGPATTERNELEMENT+11
#define DISPID_ISVGPATTERNELEMENT_HEIGHT                          DISPID_SVGPATTERNELEMENT+13

//    DISPIDs for interface ISVGPathSeg

#define DISPID_ISVGPATHSEG_PATHSEGTYPE                            DISPID_SVGPATHSEG+0
#define DISPID_ISVGPATHSEG_PATHSEGTYPEASLETTER                    DISPID_SVGPATHSEG+1

//    DISPIDs for interface ISVGPathSegArcAbs

#define DISPID_ISVGPATHSEGARCABS_X                                DISPID_SVGPATHSEGARCABS+0
#define DISPID_ISVGPATHSEGARCABS_Y                                DISPID_SVGPATHSEGARCABS+1
#define DISPID_ISVGPATHSEGARCABS_R1                               DISPID_SVGPATHSEGARCABS+2
#define DISPID_ISVGPATHSEGARCABS_R2                               DISPID_SVGPATHSEGARCABS+3
#define DISPID_ISVGPATHSEGARCABS_ANGLE                            DISPID_SVGPATHSEGARCABS+4
#define DISPID_ISVGPATHSEGARCABS_LARGEARCFLAG                     DISPID_SVGPATHSEGARCABS+5
#define DISPID_ISVGPATHSEGARCABS_SWEEPFLAG                        DISPID_SVGPATHSEGARCABS+6

//    DISPIDs for interface ISVGPathSegArcRel

#define DISPID_ISVGPATHSEGARCREL_X                                DISPID_SVGPATHSEGARCREL+0
#define DISPID_ISVGPATHSEGARCREL_Y                                DISPID_SVGPATHSEGARCREL+1
#define DISPID_ISVGPATHSEGARCREL_R1                               DISPID_SVGPATHSEGARCREL+2
#define DISPID_ISVGPATHSEGARCREL_R2                               DISPID_SVGPATHSEGARCREL+3
#define DISPID_ISVGPATHSEGARCREL_ANGLE                            DISPID_SVGPATHSEGARCREL+4
#define DISPID_ISVGPATHSEGARCREL_LARGEARCFLAG                     DISPID_SVGPATHSEGARCREL+5
#define DISPID_ISVGPATHSEGARCREL_SWEEPFLAG                        DISPID_SVGPATHSEGARCREL+6

//    DISPIDs for interface ISVGPathSegMovetoAbs

#define DISPID_ISVGPATHSEGMOVETOABS_X                             DISPID_SVGPATHSEGMOVETOABS+0
#define DISPID_ISVGPATHSEGMOVETOABS_Y                             DISPID_SVGPATHSEGMOVETOABS+1

//    DISPIDs for interface ISVGPathSegMovetoRel

#define DISPID_ISVGPATHSEGMOVETOREL_X                             DISPID_SVGPATHSEGMOVETOREL+0
#define DISPID_ISVGPATHSEGMOVETOREL_Y                             DISPID_SVGPATHSEGMOVETOREL+1

//    DISPIDs for interface ISVGPathSegLinetoAbs

#define DISPID_ISVGPATHSEGLINETOABS_X                             DISPID_SVGPATHSEGLINETOABS+0
#define DISPID_ISVGPATHSEGLINETOABS_Y                             DISPID_SVGPATHSEGLINETOABS+1

//    DISPIDs for interface ISVGPathSegLinetoRel

#define DISPID_ISVGPATHSEGLINETOREL_X                             DISPID_SVGPATHSEGLINETOREL+0
#define DISPID_ISVGPATHSEGLINETOREL_Y                             DISPID_SVGPATHSEGLINETOREL+1

//    DISPIDs for interface ISVGPathSegCurvetoCubicAbs

#define DISPID_ISVGPATHSEGCURVETOCUBICABS_X                       DISPID_SVGPATHSEGCURVETOCUBICABS+0
#define DISPID_ISVGPATHSEGCURVETOCUBICABS_Y                       DISPID_SVGPATHSEGCURVETOCUBICABS+1
#define DISPID_ISVGPATHSEGCURVETOCUBICABS_X1                      DISPID_SVGPATHSEGCURVETOCUBICABS+2
#define DISPID_ISVGPATHSEGCURVETOCUBICABS_Y1                      DISPID_SVGPATHSEGCURVETOCUBICABS+3
#define DISPID_ISVGPATHSEGCURVETOCUBICABS_X2                      DISPID_SVGPATHSEGCURVETOCUBICABS+4
#define DISPID_ISVGPATHSEGCURVETOCUBICABS_Y2                      DISPID_SVGPATHSEGCURVETOCUBICABS+5

//    DISPIDs for interface ISVGPathSegCurvetoCubicRel

#define DISPID_ISVGPATHSEGCURVETOCUBICREL_X                       DISPID_SVGPATHSEGCURVETOCUBICREL+0
#define DISPID_ISVGPATHSEGCURVETOCUBICREL_Y                       DISPID_SVGPATHSEGCURVETOCUBICREL+1
#define DISPID_ISVGPATHSEGCURVETOCUBICREL_X1                      DISPID_SVGPATHSEGCURVETOCUBICREL+2
#define DISPID_ISVGPATHSEGCURVETOCUBICREL_Y1                      DISPID_SVGPATHSEGCURVETOCUBICREL+3
#define DISPID_ISVGPATHSEGCURVETOCUBICREL_X2                      DISPID_SVGPATHSEGCURVETOCUBICREL+4
#define DISPID_ISVGPATHSEGCURVETOCUBICREL_Y2                      DISPID_SVGPATHSEGCURVETOCUBICREL+5

//    DISPIDs for interface ISVGPathSegCurvetoCubicSmoothAbs

#define DISPID_ISVGPATHSEGCURVETOCUBICSMOOTHABS_X                 DISPID_SVGPATHSEGCURVETOCUBICSMOOTHABS+0
#define DISPID_ISVGPATHSEGCURVETOCUBICSMOOTHABS_Y                 DISPID_SVGPATHSEGCURVETOCUBICSMOOTHABS+1
#define DISPID_ISVGPATHSEGCURVETOCUBICSMOOTHABS_X2                DISPID_SVGPATHSEGCURVETOCUBICSMOOTHABS+2
#define DISPID_ISVGPATHSEGCURVETOCUBICSMOOTHABS_Y2                DISPID_SVGPATHSEGCURVETOCUBICSMOOTHABS+3

//    DISPIDs for interface ISVGPathSegCurvetoCubicSmoothRel

#define DISPID_ISVGPATHSEGCURVETOCUBICSMOOTHREL_X                 DISPID_SVGPATHSEGCURVETOCUBICSMOOTHREL+0
#define DISPID_ISVGPATHSEGCURVETOCUBICSMOOTHREL_Y                 DISPID_SVGPATHSEGCURVETOCUBICSMOOTHREL+1
#define DISPID_ISVGPATHSEGCURVETOCUBICSMOOTHREL_X2                DISPID_SVGPATHSEGCURVETOCUBICSMOOTHREL+2
#define DISPID_ISVGPATHSEGCURVETOCUBICSMOOTHREL_Y2                DISPID_SVGPATHSEGCURVETOCUBICSMOOTHREL+3

//    DISPIDs for interface ISVGPathSegCurvetoQuadraticAbs

#define DISPID_ISVGPATHSEGCURVETOQUADRATICABS_X                   DISPID_SVGPATHSEGCURVETOQUADRATICABS+0
#define DISPID_ISVGPATHSEGCURVETOQUADRATICABS_Y                   DISPID_SVGPATHSEGCURVETOQUADRATICABS+1
#define DISPID_ISVGPATHSEGCURVETOQUADRATICABS_X1                  DISPID_SVGPATHSEGCURVETOQUADRATICABS+2
#define DISPID_ISVGPATHSEGCURVETOQUADRATICABS_Y1                  DISPID_SVGPATHSEGCURVETOQUADRATICABS+3

//    DISPIDs for interface ISVGPathSegCurvetoQuadraticRel

#define DISPID_ISVGPATHSEGCURVETOQUADRATICREL_X                   DISPID_SVGPATHSEGCURVETOQUADRATICREL+0
#define DISPID_ISVGPATHSEGCURVETOQUADRATICREL_Y                   DISPID_SVGPATHSEGCURVETOQUADRATICREL+1
#define DISPID_ISVGPATHSEGCURVETOQUADRATICREL_X1                  DISPID_SVGPATHSEGCURVETOQUADRATICREL+2
#define DISPID_ISVGPATHSEGCURVETOQUADRATICREL_Y1                  DISPID_SVGPATHSEGCURVETOQUADRATICREL+3

//    DISPIDs for interface ISVGPathSegCurvetoQuadraticSmoothAbs

#define DISPID_ISVGPATHSEGCURVETOQUADRATICSMOOTHABS_X             DISPID_SVGPATHSEGCURVETOQUADRATICSMOOTHABS+0
#define DISPID_ISVGPATHSEGCURVETOQUADRATICSMOOTHABS_Y             DISPID_SVGPATHSEGCURVETOQUADRATICSMOOTHABS+1

//    DISPIDs for interface ISVGPathSegCurvetoQuadraticSmoothRel

#define DISPID_ISVGPATHSEGCURVETOQUADRATICSMOOTHREL_X             DISPID_SVGPATHSEGCURVETOQUADRATICSMOOTHREL+0
#define DISPID_ISVGPATHSEGCURVETOQUADRATICSMOOTHREL_Y             DISPID_SVGPATHSEGCURVETOQUADRATICSMOOTHREL+1

//    DISPIDs for interface ISVGPathSegLinetoHorizontalAbs

#define DISPID_ISVGPATHSEGLINETOHORIZONTALABS_X                   DISPID_SVGPATHSEGLINETOHORIZONTALABS+0

//    DISPIDs for interface ISVGPathSegLinetoHorizontalRel

#define DISPID_ISVGPATHSEGLINETOHORIZONTALREL_X                   DISPID_SVGPATHSEGLINETOHORIZONTALREL+0

//    DISPIDs for interface ISVGPathSegLinetoVerticalAbs

#define DISPID_ISVGPATHSEGLINETOVERTICALABS_Y                     DISPID_SVGPATHSEGLINETOVERTICALABS+0

//    DISPIDs for interface ISVGPathSegLinetoVerticalRel

#define DISPID_ISVGPATHSEGLINETOVERTICALREL_Y                     DISPID_SVGPATHSEGLINETOVERTICALREL+0

//    DISPIDs for interface ISVGPathSegList

#define DISPID_ISVGPATHSEGLIST_NUMBEROFITEMS                      DISPID_SVGPATHSEGLIST+0
#define DISPID_ISVGPATHSEGLIST_CLEAR                              DISPID_SVGPATHSEGLIST+1
#define DISPID_ISVGPATHSEGLIST_INITIALIZE                         DISPID_SVGPATHSEGLIST+2
#define DISPID_ISVGPATHSEGLIST_GETITEM                            DISPID_SVGPATHSEGLIST+3
#define DISPID_ISVGPATHSEGLIST_INSERTITEMBEFORE                   DISPID_SVGPATHSEGLIST+4
#define DISPID_ISVGPATHSEGLIST_REPLACEITEM                        DISPID_SVGPATHSEGLIST+5
#define DISPID_ISVGPATHSEGLIST_REMOVEITEM                         DISPID_SVGPATHSEGLIST+6
#define DISPID_ISVGPATHSEGLIST_APPENDITEM                         DISPID_SVGPATHSEGLIST+7

//    DISPIDs for interface ISVGPoint

#define DISPID_ISVGPOINT_X                                        DISPID_SVGPOINT+0
#define DISPID_ISVGPOINT_Y                                        DISPID_SVGPOINT+1
#define DISPID_ISVGPOINT_MATRIXTRANSFORM                          DISPID_SVGPOINT+2

//    DISPIDs for interface ISVGPointList

#define DISPID_ISVGPOINTLIST_NUMBEROFITEMS                        DISPID_SVGPOINTLIST+0
#define DISPID_ISVGPOINTLIST_CLEAR                                DISPID_SVGPOINTLIST+1
#define DISPID_ISVGPOINTLIST_INITIALIZE                           DISPID_SVGPOINTLIST+2
#define DISPID_ISVGPOINTLIST_GETITEM                              DISPID_SVGPOINTLIST+3
#define DISPID_ISVGPOINTLIST_INSERTITEMBEFORE                     DISPID_SVGPOINTLIST+4
#define DISPID_ISVGPOINTLIST_REPLACEITEM                          DISPID_SVGPOINTLIST+5
#define DISPID_ISVGPOINTLIST_REMOVEITEM                           DISPID_SVGPOINTLIST+6
#define DISPID_ISVGPOINTLIST_APPENDITEM                           DISPID_SVGPOINTLIST+7

//    DISPIDs for interface ISVGRect

#define DISPID_ISVGRECT_X                                         DISPID_SVGRECT+0
#define DISPID_ISVGRECT_Y                                         DISPID_SVGRECT+1
#define DISPID_ISVGRECT_WIDTH                                     DISPID_SVGRECT+2
#define DISPID_ISVGRECT_HEIGHT                                    DISPID_SVGRECT+3

//    DISPIDs for interface ISVGStringList

#define DISPID_ISVGSTRINGLIST_NUMBEROFITEMS                       DISPID_SVGSTRINGLIST+0
#define DISPID_ISVGSTRINGLIST_CLEAR                               DISPID_SVGSTRINGLIST+1
#define DISPID_ISVGSTRINGLIST_INITIALIZE                          DISPID_SVGSTRINGLIST+2
#define DISPID_ISVGSTRINGLIST_GETITEM                             DISPID_SVGSTRINGLIST+3
#define DISPID_ISVGSTRINGLIST_INSERTITEMBEFORE                    DISPID_SVGSTRINGLIST+4
#define DISPID_ISVGSTRINGLIST_REPLACEITEM                         DISPID_SVGSTRINGLIST+5
#define DISPID_ISVGSTRINGLIST_REMOVEITEM                          DISPID_SVGSTRINGLIST+6
#define DISPID_ISVGSTRINGLIST_APPENDITEM                          DISPID_SVGSTRINGLIST+7

//    DISPIDs for interface ISVGTransform

#define DISPID_ISVGTRANSFORM_TYPE                                 DISPID_SVGTRANSFORM+0
#define DISPID_ISVGTRANSFORM_MATRIX                               DISPID_SVGTRANSFORM+1
#define DISPID_ISVGTRANSFORM_ANGLE                                DISPID_SVGTRANSFORM+2
#define DISPID_ISVGTRANSFORM_SETMATRIX                            DISPID_SVGTRANSFORM+3
#define DISPID_ISVGTRANSFORM_SETTRANSLATE                         DISPID_SVGTRANSFORM+4
#define DISPID_ISVGTRANSFORM_SETSCALE                             DISPID_SVGTRANSFORM+5
#define DISPID_ISVGTRANSFORM_SETROTATE                            DISPID_SVGTRANSFORM+6
#define DISPID_ISVGTRANSFORM_SETSKEWX                             DISPID_SVGTRANSFORM+7
#define DISPID_ISVGTRANSFORM_SETSKEWY                             DISPID_SVGTRANSFORM+8

//    DISPIDs for interface ISVGSVGElement

#define DISPID_ISVGSVGELEMENT_X                                   DISPID_SVGSVGELEMENT+2
#define DISPID_ISVGSVGELEMENT_Y                                   DISPID_SVGSVGELEMENT+4
#define DISPID_ISVGSVGELEMENT_WIDTH                               DISPID_SVGSVGELEMENT+6
#define DISPID_ISVGSVGELEMENT_HEIGHT                              DISPID_SVGSVGELEMENT+8
#define DISPID_ISVGSVGELEMENT_CONTENTSCRIPTTYPE                   DISPID_SVGSVGELEMENT+9
#define DISPID_ISVGSVGELEMENT_CONTENTSTYLETYPE                    DISPID_SVGSVGELEMENT+10
#define DISPID_ISVGSVGELEMENT_VIEWPORT                            DISPID_SVGSVGELEMENT+11
#define DISPID_ISVGSVGELEMENT_PIXELUNITTOMILLIMETERX              DISPID_SVGSVGELEMENT+12
#define DISPID_ISVGSVGELEMENT_PIXELUNITTOMILLIMETERY              DISPID_SVGSVGELEMENT+13
#define DISPID_ISVGSVGELEMENT_SCREENPIXELTOMILLIMETERX            DISPID_SVGSVGELEMENT+14
#define DISPID_ISVGSVGELEMENT_SCREENPIXELTOMILLIMETERY            DISPID_SVGSVGELEMENT+15
#define DISPID_ISVGSVGELEMENT_USECURRENTVIEW                      DISPID_SVGSVGELEMENT+16
#define DISPID_ISVGSVGELEMENT_CURRENTVIEW                         DISPID_SVGSVGELEMENT+17
#define DISPID_ISVGSVGELEMENT_CURRENTSCALE                        DISPID_SVGSVGELEMENT+18
#define DISPID_ISVGSVGELEMENT_CURRENTTRANSLATE                    DISPID_SVGSVGELEMENT+19
#define DISPID_ISVGSVGELEMENT_SUSPENDREDRAW                       DISPID_SVGSVGELEMENT+20
#define DISPID_ISVGSVGELEMENT_UNSUSPENDREDRAW                     DISPID_SVGSVGELEMENT+21
#define DISPID_ISVGSVGELEMENT_UNSUSPENDREDRAWALL                  DISPID_SVGSVGELEMENT+22
#define DISPID_ISVGSVGELEMENT_FORCEREDRAW                         DISPID_SVGSVGELEMENT+23
#define DISPID_ISVGSVGELEMENT_PAUSEANIMATIONS                     DISPID_SVGSVGELEMENT+24
#define DISPID_ISVGSVGELEMENT_UNPAUSEANIMATIONS                   DISPID_SVGSVGELEMENT+25
#define DISPID_ISVGSVGELEMENT_ANIMATIONSPAUSED                    DISPID_SVGSVGELEMENT+26
#define DISPID_ISVGSVGELEMENT_GETCURRENTTIME                      DISPID_SVGSVGELEMENT+27
#define DISPID_ISVGSVGELEMENT_SETCURRENTTIME                      DISPID_SVGSVGELEMENT+28
#define DISPID_ISVGSVGELEMENT_GETINTERSECTIONLIST                 DISPID_SVGSVGELEMENT+29
#define DISPID_ISVGSVGELEMENT_GETENCLOSURELIST                    DISPID_SVGSVGELEMENT+30
#define DISPID_ISVGSVGELEMENT_CHECKINTERSECTION                   DISPID_SVGSVGELEMENT+31
#define DISPID_ISVGSVGELEMENT_CHECKENCLOSURE                      DISPID_SVGSVGELEMENT+32
#define DISPID_ISVGSVGELEMENT_DESELECTALL                         DISPID_SVGSVGELEMENT+33
#define DISPID_ISVGSVGELEMENT_CREATESVGNUMBER                     DISPID_SVGSVGELEMENT+34
#define DISPID_ISVGSVGELEMENT_CREATESVGLENGTH                     DISPID_SVGSVGELEMENT+35
#define DISPID_ISVGSVGELEMENT_CREATESVGANGLE                      DISPID_SVGSVGELEMENT+36
#define DISPID_ISVGSVGELEMENT_CREATESVGPOINT                      DISPID_SVGSVGELEMENT+37
#define DISPID_ISVGSVGELEMENT_CREATESVGMATRIX                     DISPID_SVGSVGELEMENT+38
#define DISPID_ISVGSVGELEMENT_CREATESVGRECT                       DISPID_SVGSVGELEMENT+39
#define DISPID_ISVGSVGELEMENT_CREATESVGTRANSFORM                  DISPID_SVGSVGELEMENT+40
#define DISPID_ISVGSVGELEMENT_CREATESVGTRANSFORMFROMMATRIX        DISPID_SVGSVGELEMENT+41
#define DISPID_ISVGSVGELEMENT_GETELEMENTBYID                      DISPID_SVGSVGELEMENT+42

//    DISPIDs for interface ISVGUseElement

#define DISPID_ISVGUSEELEMENT_X                                   DISPID_SVGUSEELEMENT+2
#define DISPID_ISVGUSEELEMENT_Y                                   DISPID_SVGUSEELEMENT+4
#define DISPID_ISVGUSEELEMENT_WIDTH                               DISPID_SVGUSEELEMENT+6
#define DISPID_ISVGUSEELEMENT_HEIGHT                              DISPID_SVGUSEELEMENT+8
#define DISPID_ISVGUSEELEMENT_INSTANCEROOT                        DISPID_SVGUSEELEMENT+9
#define DISPID_ISVGUSEELEMENT_ANIMATEDINSTANCEROOT                DISPID_SVGUSEELEMENT+10

//    DISPIDs for interface IHTMLStyleSheetRulesAppliedCollection

#define DISPID_IHTMLSTYLESHEETRULESAPPLIEDCOLLECTION_ITEM         DISPID_VALUE
#define DISPID_IHTMLSTYLESHEETRULESAPPLIEDCOLLECTION_LENGTH       DISPID_STYLESHEETRULESAPPLIED_COLLECTION+1
#define DISPID_IHTMLSTYLESHEETRULESAPPLIEDCOLLECTION_PROPERTYAPPLIEDBY DISPID_STYLESHEETRULESAPPLIED_COLLECTION+2
#define DISPID_IHTMLSTYLESHEETRULESAPPLIEDCOLLECTION_PROPERTYAPPLIEDTRACE DISPID_RULESAPPLIED_COLLECTION+4
#define DISPID_IHTMLSTYLESHEETRULESAPPLIEDCOLLECTION_PROPERTYAPPLIEDTRACELENGTH DISPID_RULESAPPLIED_COLLECTION+5

//    DISPIDs for interface IRulesApplied

#define DISPID_IRULESAPPLIED_ELEMENT                              DISPID_RULESAPPLIED+1
#define DISPID_IRULESAPPLIED_INLINESTYLES                         DISPID_RULESAPPLIED+2
#define DISPID_IRULESAPPLIED_APPLIEDRULES                         DISPID_RULESAPPLIED+3
#define DISPID_IRULESAPPLIED_PROPERTYISINLINE                     DISPID_RULESAPPLIED+4
#define DISPID_IRULESAPPLIED_PROPERTYISINHERITABLE                DISPID_RULESAPPLIED+5
#define DISPID_IRULESAPPLIED_HASINHERITABLEPROPERTY               DISPID_RULESAPPLIED+6

//    DISPIDs for interface IRulesAppliedCollection

#define DISPID_IRULESAPPLIEDCOLLECTION_ITEM                       DISPID_VALUE
#define DISPID_IRULESAPPLIEDCOLLECTION_LENGTH                     DISPID_RULESAPPLIED_COLLECTION+1
#define DISPID_IRULESAPPLIEDCOLLECTION_ELEMENT                    DISPID_RULESAPPLIED_COLLECTION+2
#define DISPID_IRULESAPPLIEDCOLLECTION_PROPERTYINHERITEDFROM      DISPID_RULESAPPLIED_COLLECTION+3
#define DISPID_IRULESAPPLIEDCOLLECTION_PROPERTYCOUNT              DISPID_RULESAPPLIED_COLLECTION+4
#define DISPID_IRULESAPPLIEDCOLLECTION_PROPERTY                   DISPID_RULESAPPLIED_COLLECTION+5
#define DISPID_IRULESAPPLIEDCOLLECTION_PROPERTYINHERITEDTRACE     DISPID_RULESAPPLIED_COLLECTION+6
#define DISPID_IRULESAPPLIEDCOLLECTION_PROPERTYINHERITEDTRACELENGTH DISPID_RULESAPPLIED_COLLECTION+7

//    DISPIDs for interface ISVGTransformList

#define DISPID_ISVGTRANSFORMLIST_NUMBEROFITEMS                    DISPID_SVGTRANSFORMLIST+0
#define DISPID_ISVGTRANSFORMLIST_CLEAR                            DISPID_SVGTRANSFORMLIST+1
#define DISPID_ISVGTRANSFORMLIST_INITIALIZE                       DISPID_SVGTRANSFORMLIST+2
#define DISPID_ISVGTRANSFORMLIST_GETITEM                          DISPID_SVGTRANSFORMLIST+3
#define DISPID_ISVGTRANSFORMLIST_INSERTITEMBEFORE                 DISPID_SVGTRANSFORMLIST+4
#define DISPID_ISVGTRANSFORMLIST_REPLACEITEM                      DISPID_SVGTRANSFORMLIST+5
#define DISPID_ISVGTRANSFORMLIST_REMOVEITEM                       DISPID_SVGTRANSFORMLIST+6
#define DISPID_ISVGTRANSFORMLIST_APPENDITEM                       DISPID_SVGTRANSFORMLIST+7
#define DISPID_ISVGTRANSFORMLIST_CREATESVGTRANSFORMFROMMATRIX     DISPID_SVGTRANSFORMLIST+8
#define DISPID_ISVGTRANSFORMLIST_CONSOLIDATE                      DISPID_SVGTRANSFORMLIST+9

//    DISPIDs for interface ISVGAnimatedPoints

#define DISPID_ISVGANIMATEDPOINTS_POINTS                          DISPID_SVGPOLYGONELEMENT+0
#define DISPID_ISVGANIMATEDPOINTS_ANIMATEDPOINTS                  DISPID_SVGPOLYGONELEMENT+2

//    DISPIDs for interface ISVGCircleElement

#define DISPID_ISVGCIRCLEELEMENT_CX                               DISPID_SVGCIRCLEELEMENT+2
#define DISPID_ISVGCIRCLEELEMENT_CY                               DISPID_SVGCIRCLEELEMENT+4
#define DISPID_ISVGCIRCLEELEMENT_R                                DISPID_SVGCIRCLEELEMENT+6

//    DISPIDs for interface ISVGEllipseElement

#define DISPID_ISVGELLIPSEELEMENT_CX                              DISPID_SVGELLIPSEELEMENT+2
#define DISPID_ISVGELLIPSEELEMENT_CY                              DISPID_SVGELLIPSEELEMENT+4
#define DISPID_ISVGELLIPSEELEMENT_RX                              DISPID_SVGELLIPSEELEMENT+6
#define DISPID_ISVGELLIPSEELEMENT_RY                              DISPID_SVGELLIPSEELEMENT+8

//    DISPIDs for interface ISVGLineElement

#define DISPID_ISVGLINEELEMENT_X1                                 DISPID_SVGLINEELEMENT+2
#define DISPID_ISVGLINEELEMENT_Y1                                 DISPID_SVGLINEELEMENT+4
#define DISPID_ISVGLINEELEMENT_X2                                 DISPID_SVGLINEELEMENT+6
#define DISPID_ISVGLINEELEMENT_Y2                                 DISPID_SVGLINEELEMENT+8

//    DISPIDs for interface ISVGRectElement

#define DISPID_ISVGRECTELEMENT_X                                  DISPID_SVGRECTELEMENT+2
#define DISPID_ISVGRECTELEMENT_Y                                  DISPID_SVGRECTELEMENT+4
#define DISPID_ISVGRECTELEMENT_WIDTH                              DISPID_SVGRECTELEMENT+6
#define DISPID_ISVGRECTELEMENT_HEIGHT                             DISPID_SVGRECTELEMENT+8
#define DISPID_ISVGRECTELEMENT_RX                                 DISPID_SVGRECTELEMENT+10
#define DISPID_ISVGRECTELEMENT_RY                                 DISPID_SVGRECTELEMENT+12

//    DISPIDs for interface ISVGAnimatedPathData

#define DISPID_ISVGANIMATEDPATHDATA_PATHSEGLIST                   DISPID_SVGPATHELEMENT+2
#define DISPID_ISVGANIMATEDPATHDATA_NORMALIZEDPATHSEGLIST         DISPID_SVGPATHELEMENT+26
#define DISPID_ISVGANIMATEDPATHDATA_ANIMATEDPATHSEGLIST           DISPID_SVGPATHELEMENT+27
#define DISPID_ISVGANIMATEDPATHDATA_ANIMATEDNORMALIZEDPATHSEGLIST DISPID_SVGPATHELEMENT+28

//    DISPIDs for interface ISVGPathElement

#define DISPID_ISVGPATHELEMENT_PATHLENGTH                         DISPID_SVGPATHELEMENT+3
#define DISPID_ISVGPATHELEMENT_GETTOTALLENGTH                     DISPID_SVGPATHELEMENT+23
#define DISPID_ISVGPATHELEMENT_GETPOINTATLENGTH                   DISPID_SVGPATHELEMENT+24
#define DISPID_ISVGPATHELEMENT_GETPATHSEGATLENGTH                 DISPID_SVGPATHELEMENT+25
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCLOSEPATH          DISPID_SVGPATHELEMENT+4
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGMOVETOABS          DISPID_SVGPATHELEMENT+5
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGMOVETOREL          DISPID_SVGPATHELEMENT+6
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGLINETOABS          DISPID_SVGPATHELEMENT+7
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGLINETOREL          DISPID_SVGPATHELEMENT+8
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCURVETOCUBICABS    DISPID_SVGPATHELEMENT+9
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCURVETOCUBICREL    DISPID_SVGPATHELEMENT+10
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCURVETOQUADRATICABS DISPID_SVGPATHELEMENT+11
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCURVETOQUADRATICREL DISPID_SVGPATHELEMENT+12
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGARCABS             DISPID_SVGPATHELEMENT+13
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGARCREL             DISPID_SVGPATHELEMENT+14
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGLINETOHORIZONTALABS DISPID_SVGPATHELEMENT+15
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGLINETOHORIZONTALREL DISPID_SVGPATHELEMENT+16
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGLINETOVERTICALABS  DISPID_SVGPATHELEMENT+17
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGLINETOVERTICALREL  DISPID_SVGPATHELEMENT+18
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCURVETOCUBICSMOOTHABS DISPID_SVGPATHELEMENT+19
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCURVETOCUBICSMOOTHREL DISPID_SVGPATHELEMENT+20
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCURVETOQUADRATICSMOOTHABS DISPID_SVGPATHELEMENT+21
#define DISPID_ISVGPATHELEMENT_CREATESVGPATHSEGCURVETOQUADRATICSMOOTHREL DISPID_SVGPATHELEMENT+22

//    DISPIDs for interface ISVGPreserveAspectRatio

#define DISPID_ISVGPRESERVEASPECTRATIO_ALIGN                      DISPID_SVGPRESERVEASPECTRATIO+0
#define DISPID_ISVGPRESERVEASPECTRATIO_MEETORSLICE                DISPID_SVGPRESERVEASPECTRATIO+1

//    DISPIDs for interface ISVGAnimatedPreserveAspectRatio

#define DISPID_ISVGANIMATEDPRESERVEASPECTRATIO_BASEVAL            DISPID_SVGANIMATEDPRESERVEASPECTRATIO+0
#define DISPID_ISVGANIMATEDPRESERVEASPECTRATIO_ANIMVAL            DISPID_SVGANIMATEDPRESERVEASPECTRATIO+1

//    DISPIDs for interface ISVGImageElement

#define DISPID_ISVGIMAGEELEMENT_X                                 DISPID_SVGIMAGEELEMENT+1
#define DISPID_ISVGIMAGEELEMENT_Y                                 DISPID_SVGIMAGEELEMENT+3
#define DISPID_ISVGIMAGEELEMENT_WIDTH                             DISPID_SVGIMAGEELEMENT+5
#define DISPID_ISVGIMAGEELEMENT_HEIGHT                            DISPID_SVGIMAGEELEMENT+7

//    DISPIDs for interface ISVGStopElement

#define DISPID_ISVGSTOPELEMENT_OFFSET                             DISPID_SVGSTOPELEMENT+1

//    DISPIDs for interface ISVGGradientElement

#define DISPID_ISVGGRADIENTELEMENT_GRADIENTUNITS                  DISPID_SVGGRADIENTELEMENT+1
#define DISPID_ISVGGRADIENTELEMENT_GRADIENTTRANSFORM              DISPID_SVGGRADIENTELEMENT+3
#define DISPID_ISVGGRADIENTELEMENT_SPREADMETHOD                   DISPID_SVGGRADIENTELEMENT+5

//    DISPIDs for interface ISVGLinearGradientElement

#define DISPID_ISVGLINEARGRADIENTELEMENT_X1                       DISPID_SVGLINEARGRADIENTELEMENT+1
#define DISPID_ISVGLINEARGRADIENTELEMENT_Y1                       DISPID_SVGLINEARGRADIENTELEMENT+3
#define DISPID_ISVGLINEARGRADIENTELEMENT_X2                       DISPID_SVGLINEARGRADIENTELEMENT+5
#define DISPID_ISVGLINEARGRADIENTELEMENT_Y2                       DISPID_SVGLINEARGRADIENTELEMENT+7

//    DISPIDs for interface ISVGRadialGradientElement

#define DISPID_ISVGRADIALGRADIENTELEMENT_CX                       DISPID_SVGRADIALGRADIENTELEMENT+1
#define DISPID_ISVGRADIALGRADIENTELEMENT_CY                       DISPID_SVGRADIALGRADIENTELEMENT+3
#define DISPID_ISVGRADIALGRADIENTELEMENT_R                        DISPID_SVGRADIALGRADIENTELEMENT+5
#define DISPID_ISVGRADIALGRADIENTELEMENT_FX                       DISPID_SVGRADIALGRADIENTELEMENT+7
#define DISPID_ISVGRADIALGRADIENTELEMENT_FY                       DISPID_SVGRADIALGRADIENTELEMENT+9

//    DISPIDs for interface ISVGMaskElement

#define DISPID_ISVGMASKELEMENT_MASKUNITS                          DISPID_SVGMASKELEMENT+1
#define DISPID_ISVGMASKELEMENT_MASKCONTENTUNITS                   DISPID_SVGMASKELEMENT+3
#define DISPID_ISVGMASKELEMENT_X                                  DISPID_SVGMASKELEMENT+5
#define DISPID_ISVGMASKELEMENT_Y                                  DISPID_SVGMASKELEMENT+7
#define DISPID_ISVGMASKELEMENT_WIDTH                              DISPID_SVGMASKELEMENT+9
#define DISPID_ISVGMASKELEMENT_HEIGHT                             DISPID_SVGMASKELEMENT+11

//    DISPIDs for interface ISVGMarkerElement

#define DISPID_ISVGMARKERELEMENT_REFX                             DISPID_SVGMARKERELEMENT+1
#define DISPID_ISVGMARKERELEMENT_REFY                             DISPID_SVGMARKERELEMENT+3
#define DISPID_ISVGMARKERELEMENT_MARKERUNITS                      DISPID_SVGMARKERELEMENT+5
#define DISPID_ISVGMARKERELEMENT_MARKERWIDTH                      DISPID_SVGMARKERELEMENT+7
#define DISPID_ISVGMARKERELEMENT_MARKERHEIGHT                     DISPID_SVGMARKERELEMENT+9
#define DISPID_ISVGMARKERELEMENT_ORIENTTYPE                       DISPID_SVGMARKERELEMENT+11
#define DISPID_ISVGMARKERELEMENT_ORIENTANGLE                      DISPID_SVGMARKERELEMENT+12
#define DISPID_ISVGMARKERELEMENT_SETORIENTTOAUTO                  DISPID_SVGMARKERELEMENT+13
#define DISPID_ISVGMARKERELEMENT_SETORIENTTOANGLE                 DISPID_SVGMARKERELEMENT+14

//    DISPIDs for interface ISVGZoomEvent

#define DISPID_ISVGZOOMEVENT_ZOOMRECTSCREEN                       DISPID_SVGZOOMEVENT+1
#define DISPID_ISVGZOOMEVENT_PREVIOUSSCALE                        DISPID_SVGZOOMEVENT+2
#define DISPID_ISVGZOOMEVENT_PREVIOUSTRANSLATE                    DISPID_SVGZOOMEVENT+3
#define DISPID_ISVGZOOMEVENT_NEWSCALE                             DISPID_SVGZOOMEVENT+4
#define DISPID_ISVGZOOMEVENT_NEWTRANSLATE                         DISPID_SVGZOOMEVENT+5

//    DISPIDs for interface ISVGAElement

#define DISPID_ISVGAELEMENT_TARGET                                DISPID_SVGAELEMENT+2

//    DISPIDs for interface ISVGViewElement

#define DISPID_ISVGVIEWELEMENT_VIEWTARGET                         DISPID_SVGVIEWELEMENT+2

//    DISPIDs for interface IHTMLMediaError

#define DISPID_IHTMLMEDIAERROR_CODE                               DISPID_MEDIAERROR

//    DISPIDs for interface IHTMLTimeRanges

#define DISPID_IHTMLTIMERANGES_LENGTH                             DISPID_TIMERANGES
#define DISPID_IHTMLTIMERANGES_START                              DISPID_TIMERANGES+1
#define DISPID_IHTMLTIMERANGES_END                                DISPID_TIMERANGES+2

//    DISPIDs for interface IHTMLTimeRanges2

#define DISPID_IHTMLTIMERANGES2_STARTDOUBLE                       DISPID_TIMERANGES+3
#define DISPID_IHTMLTIMERANGES2_ENDDOUBLE                         DISPID_TIMERANGES+4

//    DISPIDs for interface IHTMLMediaElement

#define DISPID_IHTMLMEDIAELEMENT_ERROR                            DISPID_MEDIA
#define DISPID_IHTMLMEDIAELEMENT_SRC                              DISPID_MEDIA+1
#define DISPID_IHTMLMEDIAELEMENT_CURRENTSRC                       DISPID_MEDIA+2
#define DISPID_IHTMLMEDIAELEMENT_NETWORKSTATE                     DISPID_MEDIA+3
#define DISPID_IHTMLMEDIAELEMENT_PRELOAD                          DISPID_MEDIA+4
#define DISPID_IHTMLMEDIAELEMENT_BUFFERED                         DISPID_MEDIA+5
#define DISPID_IHTMLMEDIAELEMENT_LOAD                             DISPID_MEDIA+6
#define DISPID_IHTMLMEDIAELEMENT_CANPLAYTYPE                      DISPID_MEDIA+7
#define DISPID_IHTMLMEDIAELEMENT_SEEKING                          DISPID_MEDIA+9
#define DISPID_IHTMLMEDIAELEMENT_CURRENTTIME                      DISPID_MEDIA+10
#define DISPID_IHTMLMEDIAELEMENT_INITIALTIME                      DISPID_MEDIA+11
#define DISPID_IHTMLMEDIAELEMENT_DURATION                         DISPID_MEDIA+12
#define DISPID_IHTMLMEDIAELEMENT_PAUSED                           DISPID_MEDIA+13
#define DISPID_IHTMLMEDIAELEMENT_DEFAULTPLAYBACKRATE              DISPID_MEDIA+14
#define DISPID_IHTMLMEDIAELEMENT_PLAYBACKRATE                     DISPID_MEDIA+15
#define DISPID_IHTMLMEDIAELEMENT_PLAYED                           DISPID_MEDIA+16
#define DISPID_IHTMLMEDIAELEMENT_SEEKABLE                         DISPID_MEDIA+17
#define DISPID_IHTMLMEDIAELEMENT_ENDED                            DISPID_MEDIA+18
#define DISPID_IHTMLMEDIAELEMENT_AUTOPLAY                         DISPID_MEDIA+19
#define DISPID_IHTMLMEDIAELEMENT_LOOP                             DISPID_MEDIA+20
#define DISPID_IHTMLMEDIAELEMENT_PLAY                             DISPID_MEDIA+21
#define DISPID_IHTMLMEDIAELEMENT_PAUSE                            DISPID_MEDIA+22
#define DISPID_IHTMLMEDIAELEMENT_CONTROLS                         DISPID_MEDIA+23
#define DISPID_IHTMLMEDIAELEMENT_VOLUME                           DISPID_MEDIA+24
#define DISPID_IHTMLMEDIAELEMENT_MUTED                            DISPID_MEDIA+25
#define DISPID_IHTMLMEDIAELEMENT_AUTOBUFFER                       DISPID_MEDIA+26

//    DISPIDs for interface IHTMLMediaElement2

#define DISPID_IHTMLMEDIAELEMENT2_CURRENTTIMEDOUBLE               DISPID_MEDIA+27
#define DISPID_IHTMLMEDIAELEMENT2_INITIALTIMEDOUBLE               DISPID_MEDIA+28
#define DISPID_IHTMLMEDIAELEMENT2_DURATIONDOUBLE                  DISPID_MEDIA+29
#define DISPID_IHTMLMEDIAELEMENT2_DEFAULTPLAYBACKRATEDOUBLE       DISPID_MEDIA+30
#define DISPID_IHTMLMEDIAELEMENT2_PLAYBACKRATEDOUBLE              DISPID_MEDIA+31
#define DISPID_IHTMLMEDIAELEMENT2_VOLUMEDOUBLE                    DISPID_MEDIA+32

//    DISPIDs for interface IHTMLMSMediaElement

#define DISPID_IHTMLMSMEDIAELEMENT_MSPLAYTODISABLED               DISPID_MEDIA+33
#define DISPID_IHTMLMSMEDIAELEMENT_MSPLAYTOPRIMARY                DISPID_MEDIA+34

//    DISPIDs for interface IHTMLSourceElement

#define DISPID_IHTMLSOURCEELEMENT_SRC                             DISPID_SOURCE
#define DISPID_IHTMLSOURCEELEMENT_TYPE                            DISPID_SOURCE+1
#define DISPID_IHTMLSOURCEELEMENT_MEDIA                           DISPID_SOURCE+2

//    DISPIDs for interface IHTMLVideoElement

#define DISPID_IHTMLVIDEOELEMENT_WIDTH                            STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLVIDEOELEMENT_HEIGHT                           STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLVIDEOELEMENT_VIDEOWIDTH                       DISPID_VIDEO
#define DISPID_IHTMLVIDEOELEMENT_VIDEOHEIGHT                      DISPID_VIDEO+1
#define DISPID_IHTMLVIDEOELEMENT_POSTER                           DISPID_VIDEO+2

//    DISPIDs for interface IHTMLAudioElementFactory

#define DISPID_IHTMLAUDIOELEMENTFACTORY_CREATE                    DISPID_VALUE

//    DISPIDs for interface ISVGElementInstance

#define DISPID_ISVGELEMENTINSTANCE_CORRESPONDINGELEMENT           DISPID_SVGELEMENTINSTANCE+0
#define DISPID_ISVGELEMENTINSTANCE_CORRESPONDINGUSEELEMENT        DISPID_SVGELEMENTINSTANCE+1
#define DISPID_ISVGELEMENTINSTANCE_PARENTNODE                     DISPID_SVGELEMENTINSTANCE+2
#define DISPID_ISVGELEMENTINSTANCE_CHILDNODES                     DISPID_SVGELEMENTINSTANCE+3
#define DISPID_ISVGELEMENTINSTANCE_FIRSTCHILD                     DISPID_SVGELEMENTINSTANCE+4
#define DISPID_ISVGELEMENTINSTANCE_LASTCHILD                      DISPID_SVGELEMENTINSTANCE+5
#define DISPID_ISVGELEMENTINSTANCE_PREVIOUSSIBLING                DISPID_SVGELEMENTINSTANCE+6
#define DISPID_ISVGELEMENTINSTANCE_NEXTSIBLING                    DISPID_SVGELEMENTINSTANCE+7

//    DISPIDs for interface ISVGElementInstanceList

#define DISPID_ISVGELEMENTINSTANCELIST_LENGTH                     DISPID_SVGELEMENTINSTANCELIST+0
#define DISPID_ISVGELEMENTINSTANCELIST_ITEM                       DISPID_SVGELEMENTINSTANCELIST+1

//    DISPIDs for interface IDOMException

#define DISPID_IDOMEXCEPTION_CODE                                 DISPID_DOMEXCEPTION
#define DISPID_IDOMEXCEPTION_MESSAGE                              DISPID_DOMEXCEPTION+1

//    DISPIDs for interface IRangeException

#define DISPID_IRANGEEXCEPTION_CODE                               DISPID_RANGEEXCEPTION
#define DISPID_IRANGEEXCEPTION_MESSAGE                            DISPID_RANGEEXCEPTION+1

//    DISPIDs for interface ISVGException

#define DISPID_ISVGEXCEPTION_CODE                                 DISPID_SVGEXCEPTION
#define DISPID_ISVGEXCEPTION_MESSAGE                              DISPID_SVGEXCEPTION+1

//    DISPIDs for interface IEventException

#define DISPID_IEVENTEXCEPTION_CODE                               DISPID_EVENTEXCEPTION
#define DISPID_IEVENTEXCEPTION_MESSAGE                            DISPID_EVENTEXCEPTION+1

//    DISPIDs for interface ISVGScriptElement

#define DISPID_ISVGSCRIPTELEMENT_TYPE                             DISPID_SVGSCRIPTELEMENT+2

//    DISPIDs for interface ISVGStyleElement

#define DISPID_ISVGSTYLEELEMENT_TYPE                              DISPID_SVGSTYLEELEMENT+1
#define DISPID_ISVGSTYLEELEMENT_MEDIA                             DISPID_SVGSTYLEELEMENT+2

//    DISPIDs for interface ISVGTextContentElement

#define DISPID_ISVGTEXTCONTENTELEMENT_TEXTLENGTH                  DISPID_SVGTEXTCONTENTELEMENT+3
#define DISPID_ISVGTEXTCONTENTELEMENT_LENGTHADJUST                DISPID_SVGTEXTCONTENTELEMENT+1
#define DISPID_ISVGTEXTCONTENTELEMENT_GETNUMBEROFCHARS            DISPID_SVGTEXTCONTENTELEMENT+4
#define DISPID_ISVGTEXTCONTENTELEMENT_GETCOMPUTEDTEXTLENGTH       DISPID_SVGTEXTCONTENTELEMENT+5
#define DISPID_ISVGTEXTCONTENTELEMENT_GETSUBSTRINGLENGTH          DISPID_SVGTEXTCONTENTELEMENT+6
#define DISPID_ISVGTEXTCONTENTELEMENT_GETSTARTPOSITIONOFCHAR      DISPID_SVGTEXTCONTENTELEMENT+7
#define DISPID_ISVGTEXTCONTENTELEMENT_GETENDPOSITIONOFCHAR        DISPID_SVGTEXTCONTENTELEMENT+8
#define DISPID_ISVGTEXTCONTENTELEMENT_GETEXTENTOFCHAR             DISPID_SVGTEXTCONTENTELEMENT+9
#define DISPID_ISVGTEXTCONTENTELEMENT_GETROTATIONOFCHAR           DISPID_SVGTEXTCONTENTELEMENT+10
#define DISPID_ISVGTEXTCONTENTELEMENT_GETCHARNUMATPOSITION        DISPID_SVGTEXTCONTENTELEMENT+11
#define DISPID_ISVGTEXTCONTENTELEMENT_SELECTSUBSTRING             DISPID_SVGTEXTCONTENTELEMENT+12

//    DISPIDs for interface ISVGTextPositioningElement

#define DISPID_ISVGTEXTPOSITIONINGELEMENT_X                       DISPID_SVGTEXTPOSITIONINGELEMENT+1
#define DISPID_ISVGTEXTPOSITIONINGELEMENT_Y                       DISPID_SVGTEXTPOSITIONINGELEMENT+3
#define DISPID_ISVGTEXTPOSITIONINGELEMENT_DX                      DISPID_SVGTEXTPOSITIONINGELEMENT+5
#define DISPID_ISVGTEXTPOSITIONINGELEMENT_DY                      DISPID_SVGTEXTPOSITIONINGELEMENT+7
#define DISPID_ISVGTEXTPOSITIONINGELEMENT_ROTATE                  DISPID_SVGTEXTPOSITIONINGELEMENT+9

//    DISPIDs for interface IDOMDocumentType

#define DISPID_IDOMDOCUMENTTYPE_NAME                              DISPID_DOCUMENTTYPE
#define DISPID_IDOMDOCUMENTTYPE_ENTITIES                          DISPID_DOCUMENTTYPE+1
#define DISPID_IDOMDOCUMENTTYPE_NOTATIONS                         DISPID_DOCUMENTTYPE+2
#define DISPID_IDOMDOCUMENTTYPE_PUBLICID                          DISPID_DOCUMENTTYPE+3
#define DISPID_IDOMDOCUMENTTYPE_SYSTEMID                          DISPID_DOCUMENTTYPE+4
#define DISPID_IDOMDOCUMENTTYPE_INTERNALSUBSET                    DISPID_DOCUMENTTYPE+5

//    DISPIDs for interface IDOMNodeIterator

#define DISPID_IDOMNODEITERATOR_ROOT                              DISPID_DOMTRAVERSAL
#define DISPID_IDOMNODEITERATOR_WHATTOSHOW                        DISPID_DOMTRAVERSAL+1
#define DISPID_IDOMNODEITERATOR_FILTER                            DISPID_DOMTRAVERSAL+2
#define DISPID_IDOMNODEITERATOR_EXPANDENTITYREFERENCES            DISPID_DOMTRAVERSAL+3
#define DISPID_IDOMNODEITERATOR_NEXTNODE                          DISPID_DOMTRAVERSAL+10
#define DISPID_IDOMNODEITERATOR_PREVIOUSNODE                      DISPID_DOMTRAVERSAL+11
#define DISPID_IDOMNODEITERATOR_DETACH                            DISPID_DOMTRAVERSAL+12

//    DISPIDs for interface IDOMTreeWalker

#define DISPID_IDOMTREEWALKER_ROOT                                DISPID_DOMTRAVERSAL
#define DISPID_IDOMTREEWALKER_WHATTOSHOW                          DISPID_DOMTRAVERSAL+1
#define DISPID_IDOMTREEWALKER_FILTER                              DISPID_DOMTRAVERSAL+2
#define DISPID_IDOMTREEWALKER_EXPANDENTITYREFERENCES              DISPID_DOMTRAVERSAL+3
#define DISPID_IDOMTREEWALKER_CURRENTNODE                         DISPID_DOMTRAVERSAL+20
#define DISPID_IDOMTREEWALKER_PARENTNODE                          DISPID_DOMTRAVERSAL+21
#define DISPID_IDOMTREEWALKER_FIRSTCHILD                          DISPID_DOMTRAVERSAL+22
#define DISPID_IDOMTREEWALKER_LASTCHILD                           DISPID_DOMTRAVERSAL+23
#define DISPID_IDOMTREEWALKER_PREVIOUSSIBLING                     DISPID_DOMTRAVERSAL+24
#define DISPID_IDOMTREEWALKER_NEXTSIBLING                         DISPID_DOMTRAVERSAL+25
#define DISPID_IDOMTREEWALKER_PREVIOUSNODE                        DISPID_DOMTRAVERSAL+26
#define DISPID_IDOMTREEWALKER_NEXTNODE                            DISPID_DOMTRAVERSAL+27

//    DISPIDs for interface IDOMProcessingInstruction

#define DISPID_IDOMPROCESSINGINSTRUCTION_TARGET                   DISPID_PROCESSINGINSTRUCTION
#define DISPID_IDOMPROCESSINGINSTRUCTION_DATA                     DISPID_PROCESSINGINSTRUCTION+1

//    DISPIDs for interface IHTMLPerformance

#define DISPID_IHTMLPERFORMANCE_NAVIGATION                        DISPID_PERFORMANCE
#define DISPID_IHTMLPERFORMANCE_TIMING                            DISPID_PERFORMANCE+1
#define DISPID_IHTMLPERFORMANCE_TOSTRING                          DISPID_PERFORMANCE+2
#define DISPID_IHTMLPERFORMANCE_TOJSON                            DISPID_PERFORMANCE+3

//    DISPIDs for interface IHTMLPerformanceNavigation

#define DISPID_IHTMLPERFORMANCENAVIGATION_TYPE                    DISPID_PERFORMANCENAVIGATION
#define DISPID_IHTMLPERFORMANCENAVIGATION_REDIRECTCOUNT           DISPID_PERFORMANCENAVIGATION+1
#define DISPID_IHTMLPERFORMANCENAVIGATION_TOSTRING                DISPID_PERFORMANCENAVIGATION+2
#define DISPID_IHTMLPERFORMANCENAVIGATION_TOJSON                  DISPID_PERFORMANCENAVIGATION+3

//    DISPIDs for interface IHTMLPerformanceTiming

#define DISPID_IHTMLPERFORMANCETIMING_NAVIGATIONSTART             DISPID_PERFORMANCETIMING
#define DISPID_IHTMLPERFORMANCETIMING_UNLOADEVENTSTART            DISPID_PERFORMANCETIMING+1
#define DISPID_IHTMLPERFORMANCETIMING_UNLOADEVENTEND              DISPID_PERFORMANCETIMING+2
#define DISPID_IHTMLPERFORMANCETIMING_REDIRECTSTART               DISPID_PERFORMANCETIMING+3
#define DISPID_IHTMLPERFORMANCETIMING_REDIRECTEND                 DISPID_PERFORMANCETIMING+4
#define DISPID_IHTMLPERFORMANCETIMING_FETCHSTART                  DISPID_PERFORMANCETIMING+5
#define DISPID_IHTMLPERFORMANCETIMING_DOMAINLOOKUPSTART           DISPID_PERFORMANCETIMING+6
#define DISPID_IHTMLPERFORMANCETIMING_DOMAINLOOKUPEND             DISPID_PERFORMANCETIMING+7
#define DISPID_IHTMLPERFORMANCETIMING_CONNECTSTART                DISPID_PERFORMANCETIMING+8
#define DISPID_IHTMLPERFORMANCETIMING_CONNECTEND                  DISPID_PERFORMANCETIMING+9
#define DISPID_IHTMLPERFORMANCETIMING_REQUESTSTART                DISPID_PERFORMANCETIMING+10
#define DISPID_IHTMLPERFORMANCETIMING_RESPONSESTART               DISPID_PERFORMANCETIMING+11
#define DISPID_IHTMLPERFORMANCETIMING_RESPONSEEND                 DISPID_PERFORMANCETIMING+12
#define DISPID_IHTMLPERFORMANCETIMING_DOMLOADING                  DISPID_PERFORMANCETIMING+13
#define DISPID_IHTMLPERFORMANCETIMING_DOMINTERACTIVE              DISPID_PERFORMANCETIMING+14
#define DISPID_IHTMLPERFORMANCETIMING_DOMCONTENTLOADEDEVENTSTART  DISPID_PERFORMANCETIMING+15
#define DISPID_IHTMLPERFORMANCETIMING_DOMCONTENTLOADEDEVENTEND    DISPID_PERFORMANCETIMING+16
#define DISPID_IHTMLPERFORMANCETIMING_DOMCOMPLETE                 DISPID_PERFORMANCETIMING+17
#define DISPID_IHTMLPERFORMANCETIMING_LOADEVENTSTART              DISPID_PERFORMANCETIMING+18
#define DISPID_IHTMLPERFORMANCETIMING_LOADEVENTEND                DISPID_PERFORMANCETIMING+19
#define DISPID_IHTMLPERFORMANCETIMING_MSFIRSTPAINT                DISPID_PERFORMANCETIMING+20
#define DISPID_IHTMLPERFORMANCETIMING_TOSTRING                    DISPID_PERFORMANCETIMING+21
#define DISPID_IHTMLPERFORMANCETIMING_TOJSON                      DISPID_PERFORMANCETIMING+22

//    DISPIDs for interface ITemplatePrinter

#define DISPID_ITEMPLATEPRINTER_STARTDOC                          DISPID_TEMPLATE_PRINTER
#define DISPID_ITEMPLATEPRINTER_STOPDOC                           DISPID_TEMPLATE_PRINTER+1
#define DISPID_ITEMPLATEPRINTER_PRINTBLANKPAGE                    DISPID_TEMPLATE_PRINTER+2
#define DISPID_ITEMPLATEPRINTER_PRINTPAGE                         DISPID_TEMPLATE_PRINTER+3
#define DISPID_ITEMPLATEPRINTER_ENSUREPRINTDIALOGDEFAULTS         DISPID_TEMPLATE_PRINTER+4
#define DISPID_ITEMPLATEPRINTER_SHOWPRINTDIALOG                   DISPID_TEMPLATE_PRINTER+5
#define DISPID_ITEMPLATEPRINTER_SHOWPAGESETUPDIALOG               DISPID_TEMPLATE_PRINTER+6
#define DISPID_ITEMPLATEPRINTER_PRINTNONNATIVE                    DISPID_TEMPLATE_PRINTER+7
#define DISPID_ITEMPLATEPRINTER_PRINTNONNATIVEFRAMES              DISPID_TEMPLATE_PRINTER+8
#define DISPID_ITEMPLATEPRINTER_FRAMESETDOCUMENT                  DISPID_TEMPLATE_PRINTER+9
#define DISPID_ITEMPLATEPRINTER_FRAMEACTIVE                       DISPID_TEMPLATE_PRINTER+10
#define DISPID_ITEMPLATEPRINTER_FRAMEASSHOWN                      DISPID_TEMPLATE_PRINTER+11
#define DISPID_ITEMPLATEPRINTER_SELECTION                         DISPID_TEMPLATE_PRINTER+12
#define DISPID_ITEMPLATEPRINTER_SELECTEDPAGES                     DISPID_TEMPLATE_PRINTER+13
#define DISPID_ITEMPLATEPRINTER_CURRENTPAGE                       DISPID_TEMPLATE_PRINTER+14
#define DISPID_ITEMPLATEPRINTER_CURRENTPAGEAVAIL                  DISPID_TEMPLATE_PRINTER+15
#define DISPID_ITEMPLATEPRINTER_COLLATE                           DISPID_TEMPLATE_PRINTER+16
#define DISPID_ITEMPLATEPRINTER_DUPLEX                            DISPID_TEMPLATE_PRINTER+17
#define DISPID_ITEMPLATEPRINTER_COPIES                            DISPID_TEMPLATE_PRINTER+18
#define DISPID_ITEMPLATEPRINTER_PAGEFROM                          DISPID_TEMPLATE_PRINTER+19
#define DISPID_ITEMPLATEPRINTER_PAGETO                            DISPID_TEMPLATE_PRINTER+20
#define DISPID_ITEMPLATEPRINTER_TABLEOFLINKS                      DISPID_TEMPLATE_PRINTER+21
#define DISPID_ITEMPLATEPRINTER_ALLLINKEDDOCUMENTS                DISPID_TEMPLATE_PRINTER+22
#define DISPID_ITEMPLATEPRINTER_HEADER                            DISPID_TEMPLATE_PRINTER+23
#define DISPID_ITEMPLATEPRINTER_FOOTER                            DISPID_TEMPLATE_PRINTER+24
#define DISPID_ITEMPLATEPRINTER_MARGINLEFT                        DISPID_TEMPLATE_PRINTER+25
#define DISPID_ITEMPLATEPRINTER_MARGINRIGHT                       DISPID_TEMPLATE_PRINTER+26
#define DISPID_ITEMPLATEPRINTER_MARGINTOP                         DISPID_TEMPLATE_PRINTER+27
#define DISPID_ITEMPLATEPRINTER_MARGINBOTTOM                      DISPID_TEMPLATE_PRINTER+28
#define DISPID_ITEMPLATEPRINTER_PAGEWIDTH                         DISPID_TEMPLATE_PRINTER+29
#define DISPID_ITEMPLATEPRINTER_PAGEHEIGHT                        DISPID_TEMPLATE_PRINTER+30
#define DISPID_ITEMPLATEPRINTER_UNPRINTABLELEFT                   DISPID_TEMPLATE_PRINTER+31
#define DISPID_ITEMPLATEPRINTER_UNPRINTABLETOP                    DISPID_TEMPLATE_PRINTER+32
#define DISPID_ITEMPLATEPRINTER_UNPRINTABLERIGHT                  DISPID_TEMPLATE_PRINTER+33
#define DISPID_ITEMPLATEPRINTER_UNPRINTABLEBOTTOM                 DISPID_TEMPLATE_PRINTER+34
#define DISPID_ITEMPLATEPRINTER_UPDATEPAGESTATUS                  DISPID_TEMPLATE_PRINTER+35

//    DISPIDs for interface ITemplatePrinter2

#define DISPID_ITEMPLATEPRINTER2_SELECTIONENABLED                 DISPID_TEMPLATE_PRINTER+36
#define DISPID_ITEMPLATEPRINTER2_FRAMEACTIVEENABLED               DISPID_TEMPLATE_PRINTER+37
#define DISPID_ITEMPLATEPRINTER2_ORIENTATION                      DISPID_TEMPLATE_PRINTER+38
#define DISPID_ITEMPLATEPRINTER2_USEPRINTERCOPYCOLLATE            DISPID_TEMPLATE_PRINTER+39
#define DISPID_ITEMPLATEPRINTER2_DEVICESUPPORTS                   DISPID_TEMPLATE_PRINTER+40

//    DISPIDs for interface ITemplatePrinter3

#define DISPID_ITEMPLATEPRINTER3_HEADERFOOTERFONT                 DISPID_TEMPLATE_PRINTER+41
#define DISPID_ITEMPLATEPRINTER3_GETPAGEMARGINTOP                 DISPID_TEMPLATE_PRINTER+42
#define DISPID_ITEMPLATEPRINTER3_GETPAGEMARGINRIGHT               DISPID_TEMPLATE_PRINTER+43
#define DISPID_ITEMPLATEPRINTER3_GETPAGEMARGINBOTTOM              DISPID_TEMPLATE_PRINTER+44
#define DISPID_ITEMPLATEPRINTER3_GETPAGEMARGINLEFT                DISPID_TEMPLATE_PRINTER+45
#define DISPID_ITEMPLATEPRINTER3_GETPAGEMARGINTOPIMPORTANT        DISPID_TEMPLATE_PRINTER+46
#define DISPID_ITEMPLATEPRINTER3_GETPAGEMARGINRIGHTIMPORTANT      DISPID_TEMPLATE_PRINTER+47
#define DISPID_ITEMPLATEPRINTER3_GETPAGEMARGINBOTTOMIMPORTANT     DISPID_TEMPLATE_PRINTER+48
#define DISPID_ITEMPLATEPRINTER3_GETPAGEMARGINLEFTIMPORTANT       DISPID_TEMPLATE_PRINTER+49

//    DISPIDs for interface IPrintManagerTemplatePrinter

#define DISPID_IPRINTMANAGERTEMPLATEPRINTER_STARTPRINT            DISPID_PRINTMANAGER_TEMPLATE_PRINTER
#define DISPID_IPRINTMANAGERTEMPLATEPRINTER_DRAWPREVIEWPAGE       DISPID_PRINTMANAGER_TEMPLATE_PRINTER+1
#define DISPID_IPRINTMANAGERTEMPLATEPRINTER_SETPAGECOUNT          DISPID_PRINTMANAGER_TEMPLATE_PRINTER+2
#define DISPID_IPRINTMANAGERTEMPLATEPRINTER_INVALIDATEPREVIEW     DISPID_PRINTMANAGER_TEMPLATE_PRINTER+3
#define DISPID_IPRINTMANAGERTEMPLATEPRINTER_GETPRINTTASKOPTIONVALUE DISPID_PRINTMANAGER_TEMPLATE_PRINTER+4
#define DISPID_IPRINTMANAGERTEMPLATEPRINTER_ENDPRINT              DISPID_PRINTMANAGER_TEMPLATE_PRINTER+5

//    DISPIDs for interface IPrintManagerTemplatePrinter2

#define DISPID_IPRINTMANAGERTEMPLATEPRINTER2_SHOWHEADERFOOTER     DISPID_PRINTMANAGER_TEMPLATE_PRINTER+6
#define DISPID_IPRINTMANAGERTEMPLATEPRINTER2_SHRINKTOFIT          DISPID_PRINTMANAGER_TEMPLATE_PRINTER+7
#define DISPID_IPRINTMANAGERTEMPLATEPRINTER2_PERCENTSCALE         DISPID_PRINTMANAGER_TEMPLATE_PRINTER+8

//    DISPIDs for interface ISVGTextPathElement

#define DISPID_ISVGTEXTPATHELEMENT_STARTOFFSET                    DISPID_SVGTEXTPATHELEMENT+1
#define DISPID_ISVGTEXTPATHELEMENT_METHOD                         DISPID_SVGTEXTPATHELEMENT+3
#define DISPID_ISVGTEXTPATHELEMENT_SPACING                        DISPID_SVGTEXTPATHELEMENT+5

//    DISPIDs for interface IDOMXmlSerializer

#define DISPID_IDOMXMLSERIALIZER_SERIALIZETOSTRING                DISPID_XMLSERIALIZER

//    DISPIDs for interface IDOMParser

#define DISPID_IDOMPARSER_PARSEFROMSTRING                         DISPID_DOMPARSER

//    DISPIDs for interface IDOMXmlSerializerFactory

#define DISPID_IDOMXMLSERIALIZERFACTORY_CREATE                    DISPID_VALUE

//    DISPIDs for interface IDOMParserFactory

#define DISPID_IDOMPARSERFACTORY_CREATE                           DISPID_VALUE

//    DISPIDs for interface IHTMLProgressElement

#define DISPID_IHTMLPROGRESSELEMENT_VALUE                         DISPID_VALUE
#define DISPID_IHTMLPROGRESSELEMENT_MAX                           DISPID_PROGRESS
#define DISPID_IHTMLPROGRESSELEMENT_POSITION                      DISPID_PROGRESS+1
#define DISPID_IHTMLPROGRESSELEMENT_FORM                          DISPID_SITE+4

//    DISPIDs for interface IDOMMSTransitionEvent

#define DISPID_IDOMMSTRANSITIONEVENT_PROPERTYNAME                 DISPID_DOMMSTRANSITIONEVENT+1
#define DISPID_IDOMMSTRANSITIONEVENT_ELAPSEDTIME                  DISPID_DOMMSTRANSITIONEVENT+2
#define DISPID_IDOMMSTRANSITIONEVENT_INITMSTRANSITIONEVENT        DISPID_DOMMSTRANSITIONEVENT+3

//    DISPIDs for interface IDOMMSAnimationEvent

#define DISPID_IDOMMSANIMATIONEVENT_ANIMATIONNAME                 DISPID_DOMMSANIMATIONEVENT+1
#define DISPID_IDOMMSANIMATIONEVENT_ELAPSEDTIME                   DISPID_DOMMSANIMATIONEVENT+2
#define DISPID_IDOMMSANIMATIONEVENT_INITMSANIMATIONEVENT          DISPID_DOMMSANIMATIONEVENT+3

//    DISPIDs for interface IWebGeolocation

#define DISPID_IWEBGEOLOCATION_GETCURRENTPOSITION                 DISPID_WEBGEOLOCATION+1
#define DISPID_IWEBGEOLOCATION_WATCHPOSITION                      DISPID_WEBGEOLOCATION+2
#define DISPID_IWEBGEOLOCATION_CLEARWATCH                         DISPID_WEBGEOLOCATION+3

//    DISPIDs for interface IWebGeocoordinates

#define DISPID_IWEBGEOCOORDINATES_LATITUDE                        DISPID_WEBGEOCOORDINATES+1
#define DISPID_IWEBGEOCOORDINATES_LONGITUDE                       DISPID_WEBGEOCOORDINATES+2
#define DISPID_IWEBGEOCOORDINATES_ALTITUDE                        DISPID_WEBGEOCOORDINATES+3
#define DISPID_IWEBGEOCOORDINATES_ACCURACY                        DISPID_WEBGEOCOORDINATES+4
#define DISPID_IWEBGEOCOORDINATES_ALTITUDEACCURACY                DISPID_WEBGEOCOORDINATES+5
#define DISPID_IWEBGEOCOORDINATES_HEADING                         DISPID_WEBGEOCOORDINATES+6
#define DISPID_IWEBGEOCOORDINATES_SPEED                           DISPID_WEBGEOCOORDINATES+7

//    DISPIDs for interface IWebGeopositionError

#define DISPID_IWEBGEOPOSITIONERROR_CODE                          DISPID_WEBGEOPOSITION_ERROR+1
#define DISPID_IWEBGEOPOSITIONERROR_MESSAGE                       DISPID_WEBGEOPOSITION_ERROR+2

//    DISPIDs for interface IWebGeoposition

#define DISPID_IWEBGEOPOSITION_COORDS                             DISPID_WEBGEOPOSITION+1
#define DISPID_IWEBGEOPOSITION_TIMESTAMP                          DISPID_WEBGEOPOSITION+2

//    DISPIDs for interface IClientCaps

#define DISPID_ICLIENTCAPS_JAVAENABLED                            DISPID_CLIENTCAPS
#define DISPID_ICLIENTCAPS_COOKIEENABLED                          DISPID_CLIENTCAPS+1
#define DISPID_ICLIENTCAPS_CPUCLASS                               DISPID_CLIENTCAPS+2
#define DISPID_ICLIENTCAPS_SYSTEMLANGUAGE                         DISPID_CLIENTCAPS+3
#define DISPID_ICLIENTCAPS_USERLANGUAGE                           DISPID_CLIENTCAPS+4
#define DISPID_ICLIENTCAPS_PLATFORM                               DISPID_CLIENTCAPS+5
#define DISPID_ICLIENTCAPS_CONNECTIONSPEED                        DISPID_CLIENTCAPS+6
#define DISPID_ICLIENTCAPS_ONLINE                                 DISPID_CLIENTCAPS+7
#define DISPID_ICLIENTCAPS_COLORDEPTH                             DISPID_CLIENTCAPS+8
#define DISPID_ICLIENTCAPS_BUFFERDEPTH                            DISPID_CLIENTCAPS+9
#define DISPID_ICLIENTCAPS_WIDTH                                  DISPID_CLIENTCAPS+10
#define DISPID_ICLIENTCAPS_HEIGHT                                 DISPID_CLIENTCAPS+11
#define DISPID_ICLIENTCAPS_AVAILHEIGHT                            DISPID_CLIENTCAPS+12
#define DISPID_ICLIENTCAPS_AVAILWIDTH                             DISPID_CLIENTCAPS+13
#define DISPID_ICLIENTCAPS_CONNECTIONTYPE                         DISPID_CLIENTCAPS+14
#define DISPID_ICLIENTCAPS_ISCOMPONENTINSTALLED                   DISPID_CLIENTCAPS+15
#define DISPID_ICLIENTCAPS_GETCOMPONENTVERSION                    DISPID_CLIENTCAPS+16
#define DISPID_ICLIENTCAPS_COMPAREVERSIONS                        DISPID_CLIENTCAPS+17
#define DISPID_ICLIENTCAPS_ADDCOMPONENTREQUEST                    DISPID_CLIENTCAPS+18
#define DISPID_ICLIENTCAPS_DOCOMPONENTREQUEST                     DISPID_CLIENTCAPS+19
#define DISPID_ICLIENTCAPS_CLEARCOMPONENTREQUEST                  DISPID_CLIENTCAPS+20

//    DISPIDs for interface IDOMMSManipulationEvent

#define DISPID_IDOMMSMANIPULATIONEVENT_LASTSTATE                  DISPID_DOMMSMANIPULATIONEVENT+1
#define DISPID_IDOMMSMANIPULATIONEVENT_CURRENTSTATE               DISPID_DOMMSMANIPULATIONEVENT+2
#define DISPID_IDOMMSMANIPULATIONEVENT_INITMSMANIPULATIONEVENT    DISPID_DOMMSMANIPULATIONEVENT+3

//    DISPIDs for interface IDOMCloseEvent

#define DISPID_IDOMCLOSEEVENT_WASCLEAN                            DISPID_DOMCLOSEEVENT+1
#define DISPID_IDOMCLOSEEVENT_INITCLOSEEVENT                      DISPID_DOMCLOSEEVENT+4

//    DISPIDs for interface IHTMLApplicationCache

#define DISPID_IHTMLAPPLICATIONCACHE_STATUS                       DISPID_APPLICATIONCACHE+1
#define DISPID_IHTMLAPPLICATIONCACHE_ONCHECKING                   DISPID_EVPROP_CHECKING
#define DISPID_IHTMLAPPLICATIONCACHE_ONERROR                      DISPID_EVPROP_ONERROR
#define DISPID_IHTMLAPPLICATIONCACHE_ONNOUPDATE                   DISPID_EVPROP_NOUPDATE
#define DISPID_IHTMLAPPLICATIONCACHE_ONDOWNLOADING                DISPID_EVPROP_DOWNLOADING
#define DISPID_IHTMLAPPLICATIONCACHE_ONPROGRESS                   DISPID_EVPROP_PROGRESS
#define DISPID_IHTMLAPPLICATIONCACHE_ONUPDATEREADY                DISPID_EVPROP_UPDATEREADY
#define DISPID_IHTMLAPPLICATIONCACHE_ONCACHED                     DISPID_EVPROP_CACHED
#define DISPID_IHTMLAPPLICATIONCACHE_ONOBSOLETE                   DISPID_EVPROP_OBSOLETE
#define DISPID_IHTMLAPPLICATIONCACHE_UPDATE                       DISPID_APPLICATIONCACHE+2
#define DISPID_IHTMLAPPLICATIONCACHE_SWAPCACHE                    DISPID_APPLICATIONCACHE+3
#define DISPID_IHTMLAPPLICATIONCACHE_ABORT                        DISPID_APPLICATIONCACHE+4

//    DISPIDs for interface ICSSFilterSite

#define DISPID_ICSSFILTERSITE_GETELEMENT                          
#define DISPID_ICSSFILTERSITE_FIREONFILTERCHANGEEVENT             

//    DISPIDs for interface ICSSFilter

#define DISPID_ICSSFILTER_SETSITE                                 
#define DISPID_ICSSFILTER_ONAMBIENTPROPERTYCHANGE                 

//    DISPIDs for interface ISecureUrlHost

#define DISPID_ISECUREURLHOST_VALIDATESECUREURL                   

//    DISPIDs for interface IMarkupServices

#define DISPID_IMARKUPSERVICES_CREATEMARKUPPOINTER                
#define DISPID_IMARKUPSERVICES_CREATEMARKUPCONTAINER              
#define DISPID_IMARKUPSERVICES_CREATEELEMENT                      
#define DISPID_IMARKUPSERVICES_CLONEELEMENT                       
#define DISPID_IMARKUPSERVICES_INSERTELEMENT                      
#define DISPID_IMARKUPSERVICES_REMOVEELEMENT                      
#define DISPID_IMARKUPSERVICES_REMOVE                             
#define DISPID_IMARKUPSERVICES_COPY                               
#define DISPID_IMARKUPSERVICES_MOVE                               
#define DISPID_IMARKUPSERVICES_INSERTTEXT                         
#define DISPID_IMARKUPSERVICES_PARSESTRING                        
#define DISPID_IMARKUPSERVICES_PARSEGLOBAL                        
#define DISPID_IMARKUPSERVICES_ISSCOPEDELEMENT                    
#define DISPID_IMARKUPSERVICES_GETELEMENTTAGID                    
#define DISPID_IMARKUPSERVICES_GETTAGIDFORNAME                    
#define DISPID_IMARKUPSERVICES_GETNAMEFORTAGID                    
#define DISPID_IMARKUPSERVICES_MOVEPOINTERSTORANGE                
#define DISPID_IMARKUPSERVICES_MOVERANGETOPOINTERS                
#define DISPID_IMARKUPSERVICES_BEGINUNDOUNIT                      
#define DISPID_IMARKUPSERVICES_ENDUNDOUNIT                        

//    DISPIDs for interface IMarkupServices2

#define DISPID_IMARKUPSERVICES2_PARSEGLOBALEX                     
#define DISPID_IMARKUPSERVICES2_VALIDATEELEMENTS                  
#define DISPID_IMARKUPSERVICES2_SAVESEGMENTSTOCLIPBOARD           

//    DISPIDs for interface IMarkupContainer

#define DISPID_IMARKUPCONTAINER_OWNINGDOC                         

//    DISPIDs for interface IMarkupContainer2

#define DISPID_IMARKUPCONTAINER2_CREATECHANGELOG                  
#define DISPID_IMARKUPCONTAINER2_REGISTERFORDIRTYRANGE            
#define DISPID_IMARKUPCONTAINER2_UNREGISTERFORDIRTYRANGE          
#define DISPID_IMARKUPCONTAINER2_GETANDCLEARDIRTYRANGE            
#define DISPID_IMARKUPCONTAINER2_GETVERSIONNUMBER                 
#define DISPID_IMARKUPCONTAINER2_GETMASTERELEMENT                 

//    DISPIDs for interface IHTMLChangePlayback

#define DISPID_IHTMLCHANGEPLAYBACK_EXECCHANGE                     

//    DISPIDs for interface IMarkupPointer

#define DISPID_IMARKUPPOINTER_OWNINGDOC                           
#define DISPID_IMARKUPPOINTER_GRAVITY                             
#define DISPID_IMARKUPPOINTER_SETGRAVITY                          
#define DISPID_IMARKUPPOINTER_CLING                               
#define DISPID_IMARKUPPOINTER_SETCLING                            
#define DISPID_IMARKUPPOINTER_UNPOSITION                          
#define DISPID_IMARKUPPOINTER_ISPOSITIONED                        
#define DISPID_IMARKUPPOINTER_GETCONTAINER                        
#define DISPID_IMARKUPPOINTER_MOVEADJACENTTOELEMENT               
#define DISPID_IMARKUPPOINTER_MOVETOPOINTER                       
#define DISPID_IMARKUPPOINTER_MOVETOCONTAINER                     
#define DISPID_IMARKUPPOINTER_LEFT                                
#define DISPID_IMARKUPPOINTER_RIGHT                               
#define DISPID_IMARKUPPOINTER_CURRENTSCOPE                        
#define DISPID_IMARKUPPOINTER_ISLEFTOF                            
#define DISPID_IMARKUPPOINTER_ISLEFTOFOREQUALTO                   
#define DISPID_IMARKUPPOINTER_ISRIGHTOF                           
#define DISPID_IMARKUPPOINTER_ISRIGHTOFOREQUALTO                  
#define DISPID_IMARKUPPOINTER_ISEQUALTO                           
#define DISPID_IMARKUPPOINTER_MOVEUNIT                            
#define DISPID_IMARKUPPOINTER_FINDTEXT                            

//    DISPIDs for interface IMarkupPointer2

#define DISPID_IMARKUPPOINTER2_ISATWORDBREAK                      
#define DISPID_IMARKUPPOINTER2_GETMARKUPPOSITION                  
#define DISPID_IMARKUPPOINTER2_MOVETOMARKUPPOSITION               
#define DISPID_IMARKUPPOINTER2_MOVEUNITBOUNDED                    
#define DISPID_IMARKUPPOINTER2_ISINSIDEURL                        
#define DISPID_IMARKUPPOINTER2_MOVETOCONTENT                      

//    DISPIDs for interface IMarkupTextFrags

#define DISPID_IMARKUPTEXTFRAGS_GETTEXTFRAGCOUNT                  
#define DISPID_IMARKUPTEXTFRAGS_GETTEXTFRAG                       
#define DISPID_IMARKUPTEXTFRAGS_REMOVETEXTFRAG                    
#define DISPID_IMARKUPTEXTFRAGS_INSERTTEXTFRAG                    
#define DISPID_IMARKUPTEXTFRAGS_FINDTEXTFRAGFROMMARKUPPOINTER     

//    DISPIDs for interface IHTMLChangeLog

#define DISPID_IHTMLCHANGELOG_GETNEXTCHANGE                       

//    DISPIDs for interface IHTMLChangeSink

#define DISPID_IHTMLCHANGESINK_NOTIFY                             

//    DISPIDs for interface IXMLGenericParse

#define DISPID_IXMLGENERICPARSE_SETGENERICPARSE                   

//    DISPIDs for interface IHTMLEditHost

#define DISPID_IHTMLEDITHOST_SNAPRECT                             

//    DISPIDs for interface IHTMLEditHost2

#define DISPID_IHTMLEDITHOST2_PREDRAG                             

//    DISPIDs for interface ISegment

#define DISPID_ISEGMENT_GETPOINTERS                               

//    DISPIDs for interface ISegmentListIterator

#define DISPID_ISEGMENTLISTITERATOR_CURRENT                       
#define DISPID_ISEGMENTLISTITERATOR_FIRST                         
#define DISPID_ISEGMENTLISTITERATOR_ISDONE                        
#define DISPID_ISEGMENTLISTITERATOR_ADVANCE                       

//    DISPIDs for interface ISegmentList

#define DISPID_ISEGMENTLIST_CREATEITERATOR                        
#define DISPID_ISEGMENTLIST_GETTYPE                               
#define DISPID_ISEGMENTLIST_ISEMPTY                               

//    DISPIDs for interface ISequenceNumber

#define DISPID_ISEQUENCENUMBER_GETSEQUENCENUMBER                  

//    DISPIDs for interface IIMEServices

#define DISPID_IIMESERVICES_GETACTIVEIMM                          

//    DISPIDs for interface IHTMLCaret

#define DISPID_IHTMLCARET_MOVECARETTOPOINTER                      
#define DISPID_IHTMLCARET_MOVECARETTOPOINTEREX                    
#define DISPID_IHTMLCARET_MOVEMARKUPPOINTERTOCARET                
#define DISPID_IHTMLCARET_MOVEDISPLAYPOINTERTOCARET               
#define DISPID_IHTMLCARET_ISVISIBLE                               
#define DISPID_IHTMLCARET_SHOW                                    
#define DISPID_IHTMLCARET_HIDE                                    
#define DISPID_IHTMLCARET_INSERTTEXT                              
#define DISPID_IHTMLCARET_SCROLLINTOVIEW                          
#define DISPID_IHTMLCARET_GETLOCATION                             
#define DISPID_IHTMLCARET_GETCARETDIRECTION                       
#define DISPID_IHTMLCARET_SETCARETDIRECTION                       

//    DISPIDs for interface IHighlightRenderingServices

#define DISPID_IHIGHLIGHTRENDERINGSERVICES_ADDSEGMENT             
#define DISPID_IHIGHLIGHTRENDERINGSERVICES_MOVESEGMENTTOPOINTERS  
#define DISPID_IHIGHLIGHTRENDERINGSERVICES_REMOVESEGMENT          

//    DISPIDs for interface ISelectionServicesListener

#define DISPID_ISELECTIONSERVICESLISTENER_BEGINSELECTIONUNDO      
#define DISPID_ISELECTIONSERVICESLISTENER_ENDSELECTIONUNDO        
#define DISPID_ISELECTIONSERVICESLISTENER_ONSELECTEDELEMENTEXIT   
#define DISPID_ISELECTIONSERVICESLISTENER_ONCHANGETYPE            
#define DISPID_ISELECTIONSERVICESLISTENER_GETTYPEDETAIL           

//    DISPIDs for interface ISelectionServices

#define DISPID_ISELECTIONSERVICES_SETSELECTIONTYPE                
#define DISPID_ISELECTIONSERVICES_GETMARKUPCONTAINER              
#define DISPID_ISELECTIONSERVICES_ADDSEGMENT                      
#define DISPID_ISELECTIONSERVICES_ADDELEMENTSEGMENT               
#define DISPID_ISELECTIONSERVICES_REMOVESEGMENT                   
#define DISPID_ISELECTIONSERVICES_GETSELECTIONSERVICESLISTENER    

//    DISPIDs for interface IElementSegment

#define DISPID_IELEMENTSEGMENT_GETELEMENT                         
#define DISPID_IELEMENTSEGMENT_SETPRIMARY                         
#define DISPID_IELEMENTSEGMENT_ISPRIMARY                          

//    DISPIDs for interface IHTMLEditDesigner

#define DISPID_IHTMLEDITDESIGNER_PREHANDLEEVENT                   
#define DISPID_IHTMLEDITDESIGNER_POSTHANDLEEVENT                  
#define DISPID_IHTMLEDITDESIGNER_TRANSLATEACCELERATOR             
#define DISPID_IHTMLEDITDESIGNER_POSTEDITOREVENTNOTIFY            

//    DISPIDs for interface IHTMLEditServices

#define DISPID_IHTMLEDITSERVICES_ADDDESIGNER                      
#define DISPID_IHTMLEDITSERVICES_REMOVEDESIGNER                   
#define DISPID_IHTMLEDITSERVICES_GETSELECTIONSERVICES             
#define DISPID_IHTMLEDITSERVICES_MOVETOSELECTIONANCHOR            
#define DISPID_IHTMLEDITSERVICES_MOVETOSELECTIONEND               
#define DISPID_IHTMLEDITSERVICES_SELECTRANGE                      

//    DISPIDs for interface IHTMLEditServices2

#define DISPID_IHTMLEDITSERVICES2_MOVETOSELECTIONANCHOREX         
#define DISPID_IHTMLEDITSERVICES2_MOVETOSELECTIONENDEX            
#define DISPID_IHTMLEDITSERVICES2_FREEZEVIRTUALCARETPOS           
#define DISPID_IHTMLEDITSERVICES2_UNFREEZEVIRTUALCARETPOS         

//    DISPIDs for interface ILineInfo

#define DISPID_ILINEINFO_X                                        DISPID_ILINEINFO+1
#define DISPID_ILINEINFO_BASELINE                                 DISPID_ILINEINFO+2
#define DISPID_ILINEINFO_TEXTDESCENT                              DISPID_ILINEINFO+3
#define DISPID_ILINEINFO_TEXTHEIGHT                               DISPID_ILINEINFO+4
#define DISPID_ILINEINFO_LINEDIRECTION                            DISPID_ILINEINFO+5

//    DISPIDs for interface IHTMLComputedStyle

#define DISPID_IHTMLCOMPUTEDSTYLE_BOLD                            DISPID_IHTMLCOMPUTEDSTYLE+1
#define DISPID_IHTMLCOMPUTEDSTYLE_ITALIC                          DISPID_IHTMLCOMPUTEDSTYLE+2
#define DISPID_IHTMLCOMPUTEDSTYLE_UNDERLINE                       DISPID_IHTMLCOMPUTEDSTYLE+3
#define DISPID_IHTMLCOMPUTEDSTYLE_OVERLINE                        DISPID_IHTMLCOMPUTEDSTYLE+4
#define DISPID_IHTMLCOMPUTEDSTYLE_STRIKEOUT                       DISPID_IHTMLCOMPUTEDSTYLE+5
#define DISPID_IHTMLCOMPUTEDSTYLE_SUBSCRIPT                       DISPID_IHTMLCOMPUTEDSTYLE+6
#define DISPID_IHTMLCOMPUTEDSTYLE_SUPERSCRIPT                     DISPID_IHTMLCOMPUTEDSTYLE+7
#define DISPID_IHTMLCOMPUTEDSTYLE_EXPLICITFACE                    DISPID_IHTMLCOMPUTEDSTYLE+8
#define DISPID_IHTMLCOMPUTEDSTYLE_FONTWEIGHT                      DISPID_IHTMLCOMPUTEDSTYLE+9
#define DISPID_IHTMLCOMPUTEDSTYLE_FONTSIZE                        DISPID_IHTMLCOMPUTEDSTYLE+10
#define DISPID_IHTMLCOMPUTEDSTYLE_FONTNAME                        DISPID_IHTMLCOMPUTEDSTYLE+11
#define DISPID_IHTMLCOMPUTEDSTYLE_HASBGCOLOR                      DISPID_IHTMLCOMPUTEDSTYLE+12
#define DISPID_IHTMLCOMPUTEDSTYLE_TEXTCOLOR                       DISPID_IHTMLCOMPUTEDSTYLE+13
#define DISPID_IHTMLCOMPUTEDSTYLE_BACKGROUNDCOLOR                 DISPID_IHTMLCOMPUTEDSTYLE+14
#define DISPID_IHTMLCOMPUTEDSTYLE_PREFORMATTED                    DISPID_IHTMLCOMPUTEDSTYLE+15
#define DISPID_IHTMLCOMPUTEDSTYLE_DIRECTION                       DISPID_IHTMLCOMPUTEDSTYLE+16
#define DISPID_IHTMLCOMPUTEDSTYLE_BLOCKDIRECTION                  DISPID_IHTMLCOMPUTEDSTYLE+17
#define DISPID_IHTMLCOMPUTEDSTYLE_OL                              DISPID_IHTMLCOMPUTEDSTYLE+18
#define DISPID_IHTMLCOMPUTEDSTYLE_ISEQUAL                         

//    DISPIDs for interface IDisplayPointer

#define DISPID_IDISPLAYPOINTER_MOVETOPOINT                        
#define DISPID_IDISPLAYPOINTER_MOVEUNIT                           
#define DISPID_IDISPLAYPOINTER_POSITIONMARKUPPOINTER              
#define DISPID_IDISPLAYPOINTER_MOVETOPOINTER                      
#define DISPID_IDISPLAYPOINTER_SETPOINTERGRAVITY                  
#define DISPID_IDISPLAYPOINTER_GETPOINTERGRAVITY                  
#define DISPID_IDISPLAYPOINTER_SETDISPLAYGRAVITY                  
#define DISPID_IDISPLAYPOINTER_GETDISPLAYGRAVITY                  
#define DISPID_IDISPLAYPOINTER_ISPOSITIONED                       
#define DISPID_IDISPLAYPOINTER_UNPOSITION                         
#define DISPID_IDISPLAYPOINTER_ISEQUALTO                          
#define DISPID_IDISPLAYPOINTER_ISLEFTOF                           
#define DISPID_IDISPLAYPOINTER_ISRIGHTOF                          
#define DISPID_IDISPLAYPOINTER_ISATBOL                            
#define DISPID_IDISPLAYPOINTER_MOVETOMARKUPPOINTER                
#define DISPID_IDISPLAYPOINTER_SCROLLINTOVIEW                     
#define DISPID_IDISPLAYPOINTER_GETLINEINFO                        
#define DISPID_IDISPLAYPOINTER_GETFLOWELEMENT                     
#define DISPID_IDISPLAYPOINTER_QUERYBREAKS                        

//    DISPIDs for interface IDisplayServices

#define DISPID_IDISPLAYSERVICES_CREATEDISPLAYPOINTER              
#define DISPID_IDISPLAYSERVICES_TRANSFORMRECT                     
#define DISPID_IDISPLAYSERVICES_TRANSFORMPOINT                    
#define DISPID_IDISPLAYSERVICES_GETCARET                          
#define DISPID_IDISPLAYSERVICES_GETCOMPUTEDSTYLE                  
#define DISPID_IDISPLAYSERVICES_SCROLLRECTINTOVIEW                
#define DISPID_IDISPLAYSERVICES_HASFLOWLAYOUT                     

//    DISPIDs for interface IHtmlDlgSafeHelper

#define DISPID_IHTMLDLGSAFEHELPER_CHOOSECOLORDLG                  1
#define DISPID_IHTMLDLGSAFEHELPER_GETCHARSET                      2
#define DISPID_IHTMLDLGSAFEHELPER_FONTS                           3
#define DISPID_IHTMLDLGSAFEHELPER_BLOCKFORMATS                    4

//    DISPIDs for interface IBlockFormats

#define DISPID_IBLOCKFORMATS__NEWENUM                             DISPID_NEWENUM
#define DISPID_IBLOCKFORMATS_COUNT                                1
#define DISPID_IBLOCKFORMATS_ITEM                                 DISPID_VALUE

//    DISPIDs for interface IFontNames

#define DISPID_IFONTNAMES__NEWENUM                                DISPID_NEWENUM
#define DISPID_IFONTNAMES_COUNT                                   1
#define DISPID_IFONTNAMES_ITEM                                    DISPID_VALUE

//    DISPIDs for interface IDeveloperConsoleMessageReceiver

#define DISPID_IDEVELOPERCONSOLEMESSAGERECEIVER_WRITE             
#define DISPID_IDEVELOPERCONSOLEMESSAGERECEIVER_WRITEWITHURL      
#define DISPID_IDEVELOPERCONSOLEMESSAGERECEIVER_WRITEWITHURLANDLINE 
#define DISPID_IDEVELOPERCONSOLEMESSAGERECEIVER_WRITEWITHURLLINEANDCOLUMN 

//    DISPIDs for interface IDebugCallbackNotificationHandler

#define DISPID_IDEBUGCALLBACKNOTIFICATIONHANDLER_REQUESTEDCALLBACKTYPES 
#define DISPID_IDEBUGCALLBACKNOTIFICATIONHANDLER_BEFOREDISPATCHEVENT 
#define DISPID_IDEBUGCALLBACKNOTIFICATIONHANDLER_DISPATCHEVENTCOMPLETE 
#define DISPID_IDEBUGCALLBACKNOTIFICATIONHANDLER_BEFOREINVOKEDOMCALLBACK 
#define DISPID_IDEBUGCALLBACKNOTIFICATIONHANDLER_INVOKEDOMCALLBACKCOMPLETE 
#define DISPID_IDEBUGCALLBACKNOTIFICATIONHANDLER_BEFOREINVOKECALLBACK 
#define DISPID_IDEBUGCALLBACKNOTIFICATIONHANDLER_INVOKECALLBACKCOMPLETE 

//    DISPIDs for interface IScriptEventHandler

#define DISPID_ISCRIPTEVENTHANDLER_FUNCTIONNAME                   
#define DISPID_ISCRIPTEVENTHANDLER_DEBUGDOCUMENTCONTEXT           
#define DISPID_ISCRIPTEVENTHANDLER_EVENTHANDLERDISPATCH           
#define DISPID_ISCRIPTEVENTHANDLER_USESCAPTURE                    
#define DISPID_ISCRIPTEVENTHANDLER_COOKIE                         

//    DISPIDs for interface IScriptEventHandlerSourceInfo

#define DISPID_ISCRIPTEVENTHANDLERSOURCEINFO_GETSOURCEINFO        

//    DISPIDs for interface IDOMEventRegistrationCallback

#define DISPID_IDOMEVENTREGISTRATIONCALLBACK_ONDOMEVENTLISTENERADDED 
#define DISPID_IDOMEVENTREGISTRATIONCALLBACK_ONDOMEVENTLISTENERREMOVED 

//    DISPIDs for interface IEventTarget2

#define DISPID_IEVENTTARGET2_GETREGISTEREDEVENTTYPES              
#define DISPID_IEVENTTARGET2_GETLISTENERSFORTYPE                  
#define DISPID_IEVENTTARGET2_REGISTERFORDOMEVENTLISTENERS         
#define DISPID_IEVENTTARGET2_UNREGISTERFORDOMEVENTLISTENERS       

//    DISPIDs for interface IHTMLNamespace

#define DISPID_IHTMLNAMESPACE_NAME                                DISPID_NAMESPACE+0
#define DISPID_IHTMLNAMESPACE_URN                                 DISPID_NAMESPACE+1
#define DISPID_IHTMLNAMESPACE_TAGNAMES                            DISPID_NAMESPACE+2
#define DISPID_IHTMLNAMESPACE_READYSTATE                          DISPID_A_READYSTATE
#define DISPID_IHTMLNAMESPACE_ONREADYSTATECHANGE                  DISPID_EVPROP_ONREADYSTATECHANGE
#define DISPID_IHTMLNAMESPACE_DOIMPORT                            DISPID_NAMESPACE+3
#define DISPID_IHTMLNAMESPACE_ATTACHEVENT                         DISPID_HTMLOBJECT+7
#define DISPID_IHTMLNAMESPACE_DETACHEVENT                         DISPID_HTMLOBJECT+8

//    DISPIDs for interface IHTMLNamespaceCollection

#define DISPID_IHTMLNAMESPACECOLLECTION_LENGTH                    DISPID_NAMESPACE_COLLECTION+0
#define DISPID_IHTMLNAMESPACECOLLECTION_ITEM                      DISPID_VALUE
#define DISPID_IHTMLNAMESPACECOLLECTION_ADD                       DISPID_NAMESPACE_COLLECTION+1

//    DISPIDs for event set HTMLNamespaceEvents

#define DISPID_HTMLNAMESPACEEVENTS_ONREADYSTATECHANGE             DISPID_EVMETH_ONREADYSTATECHANGE

//    DISPIDs for interface IHTMLPainter

#define DISPID_IHTMLPAINTER_DRAW                                  
#define DISPID_IHTMLPAINTER_ONRESIZE                              
#define DISPID_IHTMLPAINTER_GETPAINTERINFO                        
#define DISPID_IHTMLPAINTER_HITTESTPOINT                          

//    DISPIDs for interface IHTMLPainterEventInfo

#define DISPID_IHTMLPAINTEREVENTINFO_GETEVENTINFOFLAGS            
#define DISPID_IHTMLPAINTEREVENTINFO_GETEVENTTARGET               
#define DISPID_IHTMLPAINTEREVENTINFO_SETCURSOR                    
#define DISPID_IHTMLPAINTEREVENTINFO_STRINGFROMPARTID             

//    DISPIDs for interface IHTMLPainterOverlay

#define DISPID_IHTMLPAINTEROVERLAY_ONMOVE                         

//    DISPIDs for interface IHTMLPaintSite

#define DISPID_IHTMLPAINTSITE_INVALIDATEPAINTERINFO               
#define DISPID_IHTMLPAINTSITE_INVALIDATERECT                      
#define DISPID_IHTMLPAINTSITE_INVALIDATEREGION                    
#define DISPID_IHTMLPAINTSITE_GETDRAWINFO                         
#define DISPID_IHTMLPAINTSITE_TRANSFORMGLOBALTOLOCAL              
#define DISPID_IHTMLPAINTSITE_TRANSFORMLOCALTOGLOBAL              
#define DISPID_IHTMLPAINTSITE_GETHITTESTCOOKIE                    

//    DISPIDs for interface IHTMLIPrintCollection

#define DISPID_IHTMLIPRINTCOLLECTION_LENGTH                       DISPID_OPTIONS_COL+1
#define DISPID_IHTMLIPRINTCOLLECTION__NEWENUM                     DISPID_NEWENUM
#define DISPID_IHTMLIPRINTCOLLECTION_ITEM                         DISPID_VALUE

//    DISPIDs for interface IEnumPrivacyRecords

#define DISPID_IENUMPRIVACYRECORDS_RESET                          
#define DISPID_IENUMPRIVACYRECORDS_GETSIZE                        
#define DISPID_IENUMPRIVACYRECORDS_GETPRIVACYIMPACTED             
#define DISPID_IENUMPRIVACYRECORDS_NEXT                           

//    DISPIDs for interface IWPCBlockedUrls

#define DISPID_IWPCBLOCKEDURLS_GETCOUNT                           
#define DISPID_IWPCBLOCKEDURLS_GETURL                             

//    DISPIDs for interface IHTMLDOMConstructorCollection

#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_ATTR                 DISPID_WINDOW+8001+DomConstructorAttr
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_BEHAVIORURNSCOLLECTION DISPID_WINDOW+8001+DomConstructorBehaviorUrnsCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_BOOKMARKCOLLECTION   DISPID_WINDOW+8001+DomConstructorBookmarkCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_COMPATIBLEINFO       DISPID_WINDOW+8001+DomConstructorCompatibleInfo
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_COMPATIBLEINFOCOLLECTION DISPID_WINDOW+8001+DomConstructorCompatibleInfoCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_CONTROLRANGECOLLECTION DISPID_WINDOW+8001+DomConstructorControlRangeCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_CSSCURRENTSTYLEDECLARATION DISPID_WINDOW+8001+DomConstructorCSSCurrentStyleDeclaration
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_CSSRULELIST          DISPID_WINDOW+8001+DomConstructorCSSRuleList
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_CSSRULESTYLEDECLARATION DISPID_WINDOW+8001+DomConstructorCSSRuleStyleDeclaration
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_CSSSTYLEDECLARATION  DISPID_WINDOW+8001+DomConstructorCSSStyleDeclaration
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_CSSSTYLERULE         DISPID_WINDOW+8001+DomConstructorCSSStyleRule
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_CSSSTYLESHEET        DISPID_WINDOW+8001+DomConstructorCSSStyleSheet
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_DATATRANSFER         DISPID_WINDOW+8001+DomConstructorDataTransfer
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_DOMIMPLEMENTATION    DISPID_WINDOW+8001+DomConstructorDOMImplementation
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_ELEMENT              DISPID_WINDOW+8001+DomConstructorElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_EVENT                DISPID_WINDOW+8001+DomConstructorEvent
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HISTORY              DISPID_WINDOW+8001+DomConstructorHistory
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTCELEMENTBEHAVIORDEFAULTS DISPID_WINDOW+8001+DomConstructorHTCElementBehaviorDefaults
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLANCHORELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLAnchorElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLAREAELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLAreaElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLAREASCOLLECTION  DISPID_WINDOW+8001+DomConstructorHTMLAreasCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLBASEELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLBaseElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLBASEFONTELEMENT  DISPID_WINDOW+8001+DomConstructorHTMLBaseFontElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLBGSOUNDELEMENT   DISPID_WINDOW+8001+DomConstructorHTMLBGSoundElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLBLOCKELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLBlockElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLBODYELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLBodyElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLBRELEMENT        DISPID_WINDOW+8001+DomConstructorHTMLBRElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLBUTTONELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLButtonElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLCOLLECTION       DISPID_WINDOW+8001+DomConstructorHTMLCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLCOMMENTELEMENT   DISPID_WINDOW+8001+DomConstructorHTMLCommentElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLDDELEMENT        DISPID_WINDOW+8001+DomConstructorHTMLDDElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLDIVELEMENT       DISPID_WINDOW+8001+DomConstructorHTMLDivElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLDOCUMENT         DISPID_WINDOW+8001+DomConstructorHTMLDocument
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLDLISTELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLDListElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLDTELEMENT        DISPID_WINDOW+8001+DomConstructorHTMLDTElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLEMBEDELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLEmbedElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLFIELDSETELEMENT  DISPID_WINDOW+8001+DomConstructorHTMLFieldSetElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLFONTELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLFontElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLFORMELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLFormElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLFRAMEELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLFrameElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLFRAMESETELEMENT  DISPID_WINDOW+8001+DomConstructorHTMLFrameSetElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLGENERICELEMENT   DISPID_WINDOW+8001+DomConstructorHTMLGenericElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLHEADELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLHeadElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLHEADINGELEMENT   DISPID_WINDOW+8001+DomConstructorHTMLHeadingElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLHRELEMENT        DISPID_WINDOW+8001+DomConstructorHTMLHRElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLHTMLELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLHtmlElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLIFRAMEELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLIFrameElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLIMAGEELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLImageElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLINPUTELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLInputElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLISINDEXELEMENT   DISPID_WINDOW+8001+DomConstructorHTMLIsIndexElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLLABELELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLLabelElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLLEGENDELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLLegendElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLLIELEMENT        DISPID_WINDOW+8001+DomConstructorHTMLLIElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLLINKELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLLinkElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLMAPELEMENT       DISPID_WINDOW+8001+DomConstructorHTMLMapElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLMARQUEEELEMENT   DISPID_WINDOW+8001+DomConstructorHTMLMarqueeElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLMETAELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLMetaElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLMODELESSDIALOG   DISPID_WINDOW+8001+DomConstructorHTMLModelessDialog
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLNAMESPACEINFO    DISPID_WINDOW+8001+DomConstructorHTMLNamespaceInfo
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLNAMESPACEINFOCOLLECTION DISPID_WINDOW+8001+DomConstructorHTMLNamespaceInfoCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLNEXTIDELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLNextIdElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLNOSHOWELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLNoShowElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLOBJECTELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLObjectElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLOLISTELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLOListElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLOPTIONELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLOptionElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLPARAGRAPHELEMENT DISPID_WINDOW+8001+DomConstructorHTMLParagraphElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLPARAMELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLParamElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLPHRASEELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLPhraseElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLPLUGINSCOLLECTION DISPID_WINDOW+8001+DomConstructorHTMLPluginsCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLPOPUP            DISPID_WINDOW+8001+DomConstructorHTMLPopup
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLSCRIPTELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLScriptElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLSELECTELEMENT    DISPID_WINDOW+8001+DomConstructorHTMLSelectElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLSPANELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLSpanElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLSTYLEELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLStyleElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTABLECAPTIONELEMENT DISPID_WINDOW+8001+DomConstructorHTMLTableCaptionElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTABLECELLELEMENT DISPID_WINDOW+8001+DomConstructorHTMLTableCellElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTABLECOLELEMENT  DISPID_WINDOW+8001+DomConstructorHTMLTableColElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTABLEELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLTableElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTABLEROWELEMENT  DISPID_WINDOW+8001+DomConstructorHTMLTableRowElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTABLESECTIONELEMENT DISPID_WINDOW+8001+DomConstructorHTMLTableSectionElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTEXTAREAELEMENT  DISPID_WINDOW+8001+DomConstructorHTMLTextAreaElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTEXTELEMENT      DISPID_WINDOW+8001+DomConstructorHTMLTextElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLTITLEELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLTitleElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLULISTELEMENT     DISPID_WINDOW+8001+DomConstructorHTMLUListElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_HTMLUNKNOWNELEMENT   DISPID_WINDOW+8001+DomConstructorHTMLUnknownElement
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_IMAGE                DISPID_WINDOW+8001+DomConstructorImage
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_LOCATION             DISPID_WINDOW+8001+DomConstructorLocation
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_NAMEDNODEMAP         DISPID_WINDOW+8001+DomConstructorNamedNodeMap
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_NAVIGATOR            DISPID_WINDOW+8001+DomConstructorNavigator
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_NODELIST             DISPID_WINDOW+8001+DomConstructorNodeList
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_OPTION               DISPID_WINDOW+8001+DomConstructorOption
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_SCREEN               DISPID_WINDOW+8001+DomConstructorScreen
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_SELECTION            DISPID_WINDOW+8001+DomConstructorSelection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_STATICNODELIST       DISPID_WINDOW+8001+DomConstructorStaticNodeList
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_STORAGE              DISPID_WINDOW+8001+DomConstructorStorage
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_STYLESHEETLIST       DISPID_WINDOW+8001+DomConstructorStyleSheetList
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_STYLESHEETPAGE       DISPID_WINDOW+8001+DomConstructorStyleSheetPage
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_STYLESHEETPAGELIST   DISPID_WINDOW+8001+DomConstructorStyleSheetPageList
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_TEXT                 DISPID_WINDOW+8001+DomConstructorText
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_TEXTRANGE            DISPID_WINDOW+8001+DomConstructorTextRange
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_TEXTRANGECOLLECTION  DISPID_WINDOW+8001+DomConstructorTextRangeCollection
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_TEXTRECTANGLE        DISPID_WINDOW+8001+DomConstructorTextRectangle
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_TEXTRECTANGLELIST    DISPID_WINDOW+8001+DomConstructorTextRectangleList
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_WINDOW               DISPID_WINDOW+8001+DomConstructorWindow
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_XDOMAINREQUEST       DISPID_WINDOW+8001+DomConstructorXDomainRequest
#define DISPID_IHTMLDOMCONSTRUCTORCOLLECTION_XMLHTTPREQUEST       DISPID_WINDOW+8001+DomConstructorXMLHttpRequest

//    DISPIDs for interface IHTMLDialog

#define DISPID_IHTMLDIALOG_DIALOGTOP                              STDPROPID_XOBJ_TOP
#define DISPID_IHTMLDIALOG_DIALOGLEFT                             STDPROPID_XOBJ_LEFT
#define DISPID_IHTMLDIALOG_DIALOGWIDTH                            STDPROPID_XOBJ_WIDTH
#define DISPID_IHTMLDIALOG_DIALOGHEIGHT                           STDPROPID_XOBJ_HEIGHT
#define DISPID_IHTMLDIALOG_DIALOGARGUMENTS                        DISPID_HTMLDLG+0
#define DISPID_IHTMLDIALOG_MENUARGUMENTS                          DISPID_HTMLDLG+13
#define DISPID_IHTMLDIALOG_RETURNVALUE                            DISPID_HTMLDLG+1
#define DISPID_IHTMLDIALOG_CLOSE                                  DISPID_HTMLDLG+11
#define DISPID_IHTMLDIALOG_TOSTRING                               DISPID_HTMLDLG+12

//    DISPIDs for interface IHTMLDialog2

#define DISPID_IHTMLDIALOG2_STATUS                                DISPID_HTMLDLG+14
#define DISPID_IHTMLDIALOG2_RESIZABLE                             DISPID_HTMLDLG+15

//    DISPIDs for interface IHTMLDialog3

#define DISPID_IHTMLDIALOG3_UNADORNED                             DISPID_HTMLDLG+16
#define DISPID_IHTMLDIALOG3_DIALOGHIDE                            DISPID_HTMLDLG+7

//    DISPIDs for interface IHTMLModelessInit

#define DISPID_IHTMLMODELESSINIT_PARAMETERS                       DISPID_HTMLDLG+0
#define DISPID_IHTMLMODELESSINIT_OPTIONSTRING                     DISPID_HTMLDLG+1
#define DISPID_IHTMLMODELESSINIT_MONIKER                          DISPID_HTMLDLG+6
#define DISPID_IHTMLMODELESSINIT_DOCUMENT                         DISPID_HTMLDLG+7

//    DISPIDs for interface IHTMLPopup

#define DISPID_IHTMLPOPUP_SHOW                                    DISPID_HTMLPOPUP+1
#define DISPID_IHTMLPOPUP_HIDE                                    DISPID_HTMLPOPUP+2
#define DISPID_IHTMLPOPUP_DOCUMENT                                DISPID_HTMLPOPUP+3
#define DISPID_IHTMLPOPUP_ISOPEN                                  DISPID_HTMLPOPUP+4

//    DISPIDs for interface IHTMLAppBehavior

#define DISPID_IHTMLAPPBEHAVIOR_APPLICATIONNAME                   DISPID_HTMLAPP+0
#define DISPID_IHTMLAPPBEHAVIOR_VERSION                           DISPID_HTMLAPP+1
#define DISPID_IHTMLAPPBEHAVIOR_ICON                              DISPID_HTMLAPP+2
#define DISPID_IHTMLAPPBEHAVIOR_SINGLEINSTANCE                    DISPID_HTMLAPP+3
#define DISPID_IHTMLAPPBEHAVIOR_MINIMIZEBUTTON                    DISPID_HTMLAPP+5
#define DISPID_IHTMLAPPBEHAVIOR_MAXIMIZEBUTTON                    DISPID_HTMLAPP+6
#define DISPID_IHTMLAPPBEHAVIOR_BORDER                            DISPID_HTMLAPP+7
#define DISPID_IHTMLAPPBEHAVIOR_BORDERSTYLE                       DISPID_HTMLAPP+8
#define DISPID_IHTMLAPPBEHAVIOR_SYSMENU                           DISPID_HTMLAPP+9
#define DISPID_IHTMLAPPBEHAVIOR_CAPTION                           DISPID_HTMLAPP+10
#define DISPID_IHTMLAPPBEHAVIOR_WINDOWSTATE                       DISPID_HTMLAPP+11
#define DISPID_IHTMLAPPBEHAVIOR_SHOWINTASKBAR                     DISPID_HTMLAPP+12
#define DISPID_IHTMLAPPBEHAVIOR_COMMANDLINE                       DISPID_HTMLAPP+13

//    DISPIDs for interface IHTMLAppBehavior2

#define DISPID_IHTMLAPPBEHAVIOR2_CONTEXTMENU                      DISPID_HTMLAPP+14
#define DISPID_IHTMLAPPBEHAVIOR2_INNERBORDER                      DISPID_HTMLAPP+15
#define DISPID_IHTMLAPPBEHAVIOR2_SCROLL                           DISPID_HTMLAPP+16
#define DISPID_IHTMLAPPBEHAVIOR2_SCROLLFLAT                       DISPID_HTMLAPP+17
#define DISPID_IHTMLAPPBEHAVIOR2_SELECTION                        DISPID_HTMLAPP+18

//    DISPIDs for interface IHTMLAppBehavior3

#define DISPID_IHTMLAPPBEHAVIOR3_NAVIGABLE                        DISPID_HTMLAPP+19

//    DISPIDs for interface IHTMLPrivateWindow

#define DISPID_IHTMLPRIVATEWINDOW_SUPERNAVIGATE                   
#define DISPID_IHTMLPRIVATEWINDOW_GETPENDINGURL                   
#define DISPID_IHTMLPRIVATEWINDOW_SETPICSTARGET                   
#define DISPID_IHTMLPRIVATEWINDOW_PICSCOMPLETE                    
#define DISPID_IHTMLPRIVATEWINDOW_FINDWINDOWBYNAME                
#define DISPID_IHTMLPRIVATEWINDOW_GETADDRESSBARURL                

//    DISPIDs for interface IHTMLPrivateWindow2

#define DISPID_IHTMLPRIVATEWINDOW2_NAVIGATEEX                     
#define DISPID_IHTMLPRIVATEWINDOW2_GETINNERWINDOWUNKNOWN          

//    DISPIDs for interface IHTMLPrivateWindow3

#define DISPID_IHTMLPRIVATEWINDOW3_OPENEX                         
#define DISPID_IHTMLPRIVATEWINDOW3_NAVIGATEEX2                    
#define DISPID_IHTMLPRIVATEWINDOW3_GETDOCUMENTTRUSTED             

//    DISPIDs for interface IHTMLPrivateWindow4

#define DISPID_IHTMLPRIVATEWINDOW4_SUPERNAVIGATE2                 
#define DISPID_IHTMLPRIVATEWINDOW4_SUPERNAVIGATE3                 
#define DISPID_IHTMLPRIVATEWINDOW4_GETSCRIPTPROFILER              
#define DISPID_IHTMLPRIVATEWINDOW4_SUPERNAVIGATE2WITHBINDFLAGS    
#define DISPID_IHTMLPRIVATEWINDOW4_ARECLIENTSWAITINGFORUNLOAD     
#define DISPID_IHTMLPRIVATEWINDOW4_RESETSCRIPTPROFILERITERATOR    
#define DISPID_IHTMLPRIVATEWINDOW4_GETPERFORMANCEINTERNAL         

//    DISPIDs for interface IHTMLPrivateWindow5

#define DISPID_IHTMLPRIVATEWINDOW5_ESTABLISHINCOMINGPORT          
#define DISPID_IHTMLPRIVATEWINDOW5_GETPROCESSIDTHREADID           
#define DISPID_IHTMLPRIVATEWINDOW5_ESTABLISHISODEPENDENCIES       
#define DISPID_IHTMLPRIVATEWINDOW5_ESTABLISHCROSSPROCESSINCOMINGPORT 

//    DISPIDs for interface IHTMLPrivateWindow6

#define DISPID_IHTMLPRIVATEWINDOW6_NAVIGATEEX3                    

//    DISPIDs for interface IHTMLPrivateWindowAccessible

#define DISPID_IHTMLPRIVATEWINDOWACCESSIBLE_GETACCESSIBLE         
#define DISPID_IHTMLPRIVATEWINDOWACCESSIBLE_GETACCESSIBLEOBJECT   

//    DISPIDs for interface ISubDivisionProvider

#define DISPID_ISUBDIVISIONPROVIDER_GETSUBDIVISIONCOUNT           
#define DISPID_ISUBDIVISIONPROVIDER_GETSUBDIVISIONTABS            
#define DISPID_ISUBDIVISIONPROVIDER_SUBDIVISIONFROMPT             

//    DISPIDs for interface IElementBehaviorUI

#define DISPID_IELEMENTBEHAVIORUI_ONRECEIVEFOCUS                  
#define DISPID_IELEMENTBEHAVIORUI_GETSUBDIVISIONPROVIDER          
#define DISPID_IELEMENTBEHAVIORUI_CANTAKEFOCUS                    

//    DISPIDs for interface IElementAdorner

#define DISPID_IELEMENTADORNER_DRAW                               
#define DISPID_IELEMENTADORNER_HITTESTPOINT                       
#define DISPID_IELEMENTADORNER_GETSIZE                            
#define DISPID_IELEMENTADORNER_GETPOSITION                        
#define DISPID_IELEMENTADORNER_ONPOSITIONSET                      

//    DISPIDs for interface IHTMLEditor

#define DISPID_IHTMLEDITOR_PREHANDLEEVENT                         
#define DISPID_IHTMLEDITOR_POSTHANDLEEVENT                        
#define DISPID_IHTMLEDITOR_TRANSLATEACCELERATOR                   
#define DISPID_IHTMLEDITOR_INITIALIZE                             
#define DISPID_IHTMLEDITOR_NOTIFY                                 
#define DISPID_IHTMLEDITOR_GETCOMMANDTARGET                       
#define DISPID_IHTMLEDITOR_GETELEMENTTOTABFROM                    
#define DISPID_IHTMLEDITOR_ISEDITCONTEXTUIACTIVE                  
#define DISPID_IHTMLEDITOR_TERMINATEIMECOMPOSITION                
#define DISPID_IHTMLEDITOR_ENABLEMODELESS                         

//    DISPIDs for interface IHTMLEditingServices

#define DISPID_IHTMLEDITINGSERVICES_DELETE                        
#define DISPID_IHTMLEDITINGSERVICES_PASTE                         
#define DISPID_IHTMLEDITINGSERVICES_PASTEFROMCLIPBOARD            
#define DISPID_IHTMLEDITINGSERVICES_LAUNDERSPACES                 
#define DISPID_IHTMLEDITINGSERVICES_INSERTSANITIZEDTEXT           
#define DISPID_IHTMLEDITINGSERVICES_URLAUTODETECTCURRENTWORD      
#define DISPID_IHTMLEDITINGSERVICES_URLAUTODETECTRANGE            
#define DISPID_IHTMLEDITINGSERVICES_SHOULDUPDATEANCHORTEXT        
#define DISPID_IHTMLEDITINGSERVICES_ADJUSTPOINTERFORINSERT        
#define DISPID_IHTMLEDITINGSERVICES_FINDSITESELECTABLEELEMENT     
#define DISPID_IHTMLEDITINGSERVICES_ISELEMENTSITESELECTABLE       
#define DISPID_IHTMLEDITINGSERVICES_ISELEMENTUIACTIVATABLE        
#define DISPID_IHTMLEDITINGSERVICES_ISELEMENTATOMIC               
#define DISPID_IHTMLEDITINGSERVICES_POSITIONPOINTERSINMASTER      

//    DISPIDs for interface ISelectionObject2

#define DISPID_ISELECTIONOBJECT2_SELECT                           
#define DISPID_ISELECTIONOBJECT2_ISPOINTERINSELECTION             
#define DISPID_ISELECTIONOBJECT2_EMPTYSELECTION                   
#define DISPID_ISELECTIONOBJECT2_DESTROYSELECTION                 
#define DISPID_ISELECTIONOBJECT2_DESTROYALLSELECTION              
#define DISPID_ISELECTIONOBJECT2_ADDRANGETOSELECTION              
#define DISPID_ISELECTIONOBJECT2_CLEARSELECTION                   

//    DISPIDs for interface ISelectionServicesListener2

#define DISPID_ISELECTIONSERVICESLISTENER2_ONBECOMEPASSIVE        
#define DISPID_ISELECTIONSERVICESLISTENER2_ONREMOVELISTENER       

//    DISPIDs for interface ISelectionServices2

#define DISPID_ISELECTIONSERVICES2_ADDSELECTIONSERVICESLISTENER   
#define DISPID_ISELECTIONSERVICES2_REMOVESELECTIONSERVICESLISTENER 

//    DISPIDs for interface ISelectionServices3

#define DISPID_ISELECTIONSERVICES3_GETSELECTIONVERSION            

//    DISPIDs for interface IEditDebugServices

#define DISPID_IEDITDEBUGSERVICES_GETCP                           
#define DISPID_IEDITDEBUGSERVICES_SETDEBUGNAME                    
#define DISPID_IEDITDEBUGSERVICES_SETDISPLAYPOINTERDEBUGNAME      
#define DISPID_IEDITDEBUGSERVICES_DUMPTREE                        
#define DISPID_IEDITDEBUGSERVICES_LINESINELEMENT                  
#define DISPID_IEDITDEBUGSERVICES_FONTSONLINE                     
#define DISPID_IEDITDEBUGSERVICES_ISUSINGBCKGRNRECALC             
#define DISPID_IEDITDEBUGSERVICES_ISENCODINGAUTOSELECT            
#define DISPID_IEDITDEBUGSERVICES_ENABLEENCODINGAUTOSELECT        
#define DISPID_IEDITDEBUGSERVICES_ISUSINGTABLEINCRECALC           

//    DISPIDs for interface IHTMLPrivateDocument

#define DISPID_IHTMLPRIVATEDOCUMENT_GETPIXEL                      
#define DISPID_IHTMLPRIVATEDOCUMENT_ISHARDWAREACCELERATED         

//    DISPIDs for interface IHTMLPrivateDocument2

#define DISPID_IHTMLPRIVATEDOCUMENT2_FIREMSTHUMBNAILCLICK         
#define DISPID_IHTMLPRIVATEDOCUMENT2_FIREMSSITEMODEJUMPLISTITEMREMOVED 
#define DISPID_IHTMLPRIVATEDOCUMENT2_FIRESTORAGEEVENT             
#define DISPID_IHTMLPRIVATEDOCUMENT2_FIRECONNECTIVITYEVENT        
#define DISPID_IHTMLPRIVATEDOCUMENT2_FIREPINNEDSITECOMPLETEDEVENT 

//    DISPIDs for interface IHTMLPrivateDocument3

#define DISPID_IHTMLPRIVATEDOCUMENT3_PAINTNOW                     
#define DISPID_IHTMLPRIVATEDOCUMENT3_INVALIDATEALL                

//    DISPIDs for interface IHTMLPrivateDocument4

#define DISPID_IHTMLPRIVATEDOCUMENT4_GETSURFACESNAPSHOT           
#define DISPID_IHTMLPRIVATEDOCUMENT4_ISBUILTINELEMENT             
#define DISPID_IHTMLPRIVATEDOCUMENT4_DEBUGGEROPENED               
#define DISPID_IHTMLPRIVATEDOCUMENT4_SYNCHRONOUSINDEPENDENTHITTEST 
#define DISPID_IHTMLPRIVATEDOCUMENT4_CALLSUSPENDHANDLER           
#define DISPID_IHTMLPRIVATEDOCUMENT4_CALLRESUMEHANDLER            
#define DISPID_IHTMLPRIVATEDOCUMENT4_ELEMENTFROMGLOBALPOINT       
#define DISPID_IHTMLPRIVATEDOCUMENT4_GETPOPUPDOCUMENT             
#define DISPID_IHTMLPRIVATEDOCUMENT4_SELECTPLAYTOELEMENT          
#define DISPID_IHTMLPRIVATEDOCUMENT4_SCROLLVISUALVIEWPORTBY       
#define DISPID_IHTMLPRIVATEDOCUMENT4_INITFORCEDANIMATIONTIME      
#define DISPID_IHTMLPRIVATEDOCUMENT4_FORCEANIMATIONTIME           
#define DISPID_IHTMLPRIVATEDOCUMENT4_RESETFORCEDANIMATIONTIME     
#define DISPID_IHTMLPRIVATEDOCUMENT4_ENSUREVIEW                   
#define DISPID_IHTMLPRIVATEDOCUMENT4_ISINDEPENDENTRENDERINGENABLED 
#define DISPID_IHTMLPRIVATEDOCUMENT4_GETINDEPENDENTRENDERINGFALLBACKREASON 
#define DISPID_IHTMLPRIVATEDOCUMENT4_SETRENDERTASKQUEUEMODE       
#define DISPID_IHTMLPRIVATEDOCUMENT4_GETRENDERTASKQUEUEMODE       
#define DISPID_IHTMLPRIVATEDOCUMENT4_GETRENDERTASKQUEUESIZE       
#define DISPID_IHTMLPRIVATEDOCUMENT4_QUEUEPSPWITHASYNCPAINT       
#define DISPID_IHTMLPRIVATEDOCUMENT4_PROCESSSINGLERENDERQUEUETASK 
#define DISPID_IHTMLPRIVATEDOCUMENT4_SETBYPASSUNDOSCRIPTCHECK     
#define DISPID_IHTMLPRIVATEDOCUMENT4_SETLINKHIGHLIGHTINGENABLED   
#define DISPID_IHTMLPRIVATEDOCUMENT4_FORCELINKHIGHLIGHTTODISMISS  
#define DISPID_IHTMLPRIVATEDOCUMENT4_SETLINKHIGHLIGHTMANUALDISMISSALMODE 
#define DISPID_IHTMLPRIVATEDOCUMENT4_RESETDEVICE                  
#define DISPID_IHTMLPRIVATEDOCUMENT4_ISIMAGERIGHTSIZED            
#define DISPID_IHTMLPRIVATEDOCUMENT4_ISIMAGEDECODED               
#define DISPID_IHTMLPRIVATEDOCUMENT4_GETIMAGEDECODEDWIDTH         
#define DISPID_IHTMLPRIVATEDOCUMENT4_GETIMAGEDECODEDHEIGHT        
#define DISPID_IHTMLPRIVATEDOCUMENT4_CAPTUREDRAWCOMMANDS          
#define DISPID_IHTMLPRIVATEDOCUMENT4_GETSURFACESNAPSHOTFROMDCOMP  

//    DISPIDs for interface IVSyncSink

#define DISPID_IVSYNCSINK_ONVSYNC                                 
#define DISPID_IVSYNCSINK_ONVSYNCSTATUS                           

//    DISPIDs for interface IVSyncService

#define DISPID_IVSYNCSERVICE_STARTVSYNC                           
#define DISPID_IVSYNCSERVICE_STOPVSYNC                            
#define DISPID_IVSYNCSERVICE_ISVSYNCAVAILABLE                     
#define DISPID_IVSYNCSERVICE_ADVISESTATUS                         
#define DISPID_IVSYNCSERVICE_UNADVISESTATUS                       

//    DISPIDs for interface ILayoutDumper

#define DISPID_ILAYOUTDUMPER_DUMPLAYOUT                           
#define DISPID_ILAYOUTDUMPER_GETELEMENTLAYOUTCOUNT                
#define DISPID_ILAYOUTDUMPER_GETELEMENTMEASURECOUNT               
#define DISPID_ILAYOUTDUMPER_RESETELEMENTLAYOUTCOUNT              

//    DISPIDs for interface IDisplayTreeDumper

#define DISPID_IDISPLAYTREEDUMPER_DUMPDISPLAYTREE                 

//    DISPIDs for interface IFormatDetectionDumper

#define DISPID_IFORMATDETECTIONDUMPER_DUMPENTITYTREE              
#define DISPID_IFORMATDETECTIONDUMPER_GETCURRENTFOCUSEDENTITYINDEX 

//    DISPIDs for interface IPrivacyServices

#define DISPID_IPRIVACYSERVICES_ADDPRIVACYINFOTOLIST              

//    DISPIDs for interface IHTMLFilterPainter

#define DISPID_IHTMLFILTERPAINTER_INVALIDATERECTUNFILTERED        
#define DISPID_IHTMLFILTERPAINTER_INVALIDATERGNUNFILTERED         
#define DISPID_IHTMLFILTERPAINTER_CHANGEELEMENTVISIBILITY         

//    DISPIDs for interface IHTMLFilterPainter2

#define DISPID_IHTMLFILTERPAINTER2_ISDPIAWARE                     

//    DISPIDs for interface IHTMLFilterPaintSite

#define DISPID_IHTMLFILTERPAINTSITE_DRAWUNFILTERED                
#define DISPID_IHTMLFILTERPAINTSITE_HITTESTPOINTUNFILTERED        
#define DISPID_IHTMLFILTERPAINTSITE_INVALIDATERECTFILTERED        
#define DISPID_IHTMLFILTERPAINTSITE_INVALIDATERGNFILTERED         
#define DISPID_IHTMLFILTERPAINTSITE_CHANGEFILTERVISIBILITY        
#define DISPID_IHTMLFILTERPAINTSITE_ENSUREVIEWFORFILTERSITE       
#define DISPID_IHTMLFILTERPAINTSITE_GETDIRECTDRAW                 
#define DISPID_IHTMLFILTERPAINTSITE_GETFILTERFLAGS                

//    DISPIDs for interface IElementNamespacePrivate

#define DISPID_IELEMENTNAMESPACEPRIVATE_ADDTAGPRIVATE             

//    DISPIDs for interface IMarkupServicesPriv

#define DISPID_IMARKUPSERVICESPRIV_PARSEGLOBALWITHCONTENTTYPE     
#define DISPID_IMARKUPSERVICESPRIV_CREATETEXTRANGE                
#define DISPID_IMARKUPSERVICESPRIV_GETDATAOBJECTFORSHARE          

//    DISPIDs for interface IHighlightRenderingServicesPriv

#define DISPID_IHIGHLIGHTRENDERINGSERVICESPRIV_REMOVESEGMENTEX    
#define DISPID_IHIGHLIGHTRENDERINGSERVICESPRIV_ADDSEGMENTEX       

//    DISPIDs for interface IDocHostUIHandlerPriv

#define DISPID_IDOCHOSTUIHANDLERPRIV_ONDOCSWITCH                  

//    DISPIDs for interface IHTMLStyleSheetRulePriv

#define DISPID_IHTMLSTYLESHEETRULEPRIV_GETSPECIFICITY             

//    DISPIDs for interface IHTMLTxtRangeInternal

#define DISPID_IHTMLTXTRANGEINTERNAL_GET_VISIBLETEXT              DISPID_RANGE+50

//    DISPIDs for interface IGeolocationPriv

#define DISPID_IGEOLOCATIONPRIV_ONLOCATIONCHANGED                 
#define DISPID_IGEOLOCATIONPRIV_SETUSERCONSENT                    
#define DISPID_IGEOLOCATIONPRIV_ONSUSPEND                         
#define DISPID_IGEOLOCATIONPRIV_ONRESUMEFROMSUSPEND               
#define DISPID_IGEOLOCATIONPRIV_UPDATEEMULATEDGEOLOCATION         

//    DISPIDs for interface IIndexedDBPriv

#define DISPID_IINDEXEDDBPRIV_SETUSERCONSENT                      

//    DISPIDs for interface IPersistStreamInitVersionPriv

#define DISPID_IPERSISTSTREAMINITVERSIONPRIV_SETPERSISTDOCUMENTMODE 

//    DISPIDs for interface IElementBehaviorFactory

#define DISPID_IELEMENTBEHAVIORFACTORY_FINDBEHAVIOR               

//    DISPIDs for interface IElementNamespace

#define DISPID_IELEMENTNAMESPACE_ADDTAG                           

//    DISPIDs for interface IElementNamespaceTable

#define DISPID_IELEMENTNAMESPACETABLE_ADDNAMESPACE                

//    DISPIDs for interface IElementNamespaceFactory

#define DISPID_IELEMENTNAMESPACEFACTORY_CREATE                    

//    DISPIDs for interface IElementNamespaceFactory2

#define DISPID_IELEMENTNAMESPACEFACTORY2_CREATEWITHIMPLEMENTATION 

//    DISPIDs for interface IElementNamespaceFactoryCallback

#define DISPID_IELEMENTNAMESPACEFACTORYCALLBACK_RESOLVE           

//    DISPIDs for interface IElementBehavior

#define DISPID_IELEMENTBEHAVIOR_INIT                              
#define DISPID_IELEMENTBEHAVIOR_NOTIFY                            
#define DISPID_IELEMENTBEHAVIOR_DETACH                            

//    DISPIDs for interface IElementBehaviorSite

#define DISPID_IELEMENTBEHAVIORSITE_GETELEMENT                    
#define DISPID_IELEMENTBEHAVIORSITE_REGISTERNOTIFICATION          

//    DISPIDs for interface IElementBehaviorSiteOM

#define DISPID_IELEMENTBEHAVIORSITEOM_REGISTEREVENT               
#define DISPID_IELEMENTBEHAVIORSITEOM_GETEVENTCOOKIE              
#define DISPID_IELEMENTBEHAVIORSITEOM_FIREEVENT                   
#define DISPID_IELEMENTBEHAVIORSITEOM_CREATEEVENTOBJECT           
#define DISPID_IELEMENTBEHAVIORSITEOM_REGISTERNAME                
#define DISPID_IELEMENTBEHAVIORSITEOM_REGISTERURN                 

//    DISPIDs for interface IElementBehaviorSiteOM2

#define DISPID_IELEMENTBEHAVIORSITEOM2_GETDEFAULTS                

//    DISPIDs for interface IElementBehaviorRender

#define DISPID_IELEMENTBEHAVIORRENDER_DRAW                        
#define DISPID_IELEMENTBEHAVIORRENDER_GETRENDERINFO               
#define DISPID_IELEMENTBEHAVIORRENDER_HITTESTPOINT                

//    DISPIDs for interface IElementBehaviorSiteRender

#define DISPID_IELEMENTBEHAVIORSITERENDER_INVALIDATE              
#define DISPID_IELEMENTBEHAVIORSITERENDER_INVALIDATERENDERINFO    
#define DISPID_IELEMENTBEHAVIORSITERENDER_INVALIDATESTYLE         

//    DISPIDs for interface IElementBehaviorCategory

#define DISPID_IELEMENTBEHAVIORCATEGORY_GETCATEGORY               

//    DISPIDs for interface IElementBehaviorSiteCategory

#define DISPID_IELEMENTBEHAVIORSITECATEGORY_GETRELATEDBEHAVIORS   

//    DISPIDs for interface IElementBehaviorSubmit

#define DISPID_IELEMENTBEHAVIORSUBMIT_GETSUBMITINFO               
#define DISPID_IELEMENTBEHAVIORSUBMIT_RESET                       

//    DISPIDs for interface IElementBehaviorFocus

#define DISPID_IELEMENTBEHAVIORFOCUS_GETFOCUSRECT                 

//    DISPIDs for interface IElementBehaviorLayout

#define DISPID_IELEMENTBEHAVIORLAYOUT_GETSIZE                     
#define DISPID_IELEMENTBEHAVIORLAYOUT_GETLAYOUTINFO               
#define DISPID_IELEMENTBEHAVIORLAYOUT_GETPOSITION                 
#define DISPID_IELEMENTBEHAVIORLAYOUT_MAPSIZE                     

//    DISPIDs for interface IElementBehaviorLayout2

#define DISPID_IELEMENTBEHAVIORLAYOUT2_GETTEXTDESCENT             

//    DISPIDs for interface IElementBehaviorSiteLayout

#define DISPID_IELEMENTBEHAVIORSITELAYOUT_INVALIDATELAYOUTINFO    
#define DISPID_IELEMENTBEHAVIORSITELAYOUT_INVALIDATESIZE          
#define DISPID_IELEMENTBEHAVIORSITELAYOUT_GETMEDIARESOLUTION      

//    DISPIDs for interface IElementBehaviorSiteLayout2

#define DISPID_IELEMENTBEHAVIORSITELAYOUT2_GETFONTINFO            

//    DISPIDs for interface IHostBehaviorInit

#define DISPID_IHOSTBEHAVIORINIT_POPULATENAMESPACETABLE           

//    DISPIDs for event set IE9Events

#define DISPID_IE9EVENTS_ABORT                                    DISPID_EVMETH_ONABORT
#define DISPID_IE9EVENTS_ACTIVATE                                 DISPID_EVMETH_ONACTIVATE
#define DISPID_IE9EVENTS_AFTERPRINT                               DISPID_EVMETH_ONAFTERPRINT
#define DISPID_IE9EVENTS_BEFOREACTIVATE                           DISPID_EVMETH_ONBEFOREACTIVATE
#define DISPID_IE9EVENTS_BEFOREDEACTIVATE                         DISPID_EVMETH_ONBEFOREDEACTIVATE
#define DISPID_IE9EVENTS_BEFOREUNLOAD                             DISPID_EVMETH_ONBEFOREUNLOAD
#define DISPID_IE9EVENTS_BEFOREPRINT                              DISPID_EVMETH_ONBEFOREPRINT
#define DISPID_IE9EVENTS_BOUNCE                                   DISPID_EVMETH_ONBOUNCE
#define DISPID_IE9EVENTS_BLUR                                     DISPID_EVMETH_ONBLUR
#define DISPID_IE9EVENTS_CHANGE                                   DISPID_EVMETH_ONCHANGE
#define DISPID_IE9EVENTS_CLICK                                    DISPID_EVMETH_ONCLICK
#define DISPID_IE9EVENTS_COMPLETE                                 DISPID_EVPROP_ONCOMPLETE
#define DISPID_IE9EVENTS_CONTEXTMENU                              DISPID_EVMETH_ONCONTEXTMENU
#define DISPID_IE9EVENTS_DEACTIVATE                               DISPID_EVMETH_ONDEACTIVATE
#define DISPID_IE9EVENTS_DOMCONTENTLOADED                         DISPID_EVPROP_DOMCONTENTLOADED
#define DISPID_IE9EVENTS_SUCCESS                                  DISPID_EVPROP_ONSUCCESS
#define DISPID_IE9EVENTS_ERROR                                    DISPID_EVMETH_ONERROR
#define DISPID_IE9EVENTS_FINISH                                   DISPID_EVMETH_ONFINISH
#define DISPID_IE9EVENTS_FOCUS                                    DISPID_EVMETH_ONFOCUS
#define DISPID_IE9EVENTS_FOCUSIN                                  DISPID_EVMETH_ONFOCUSIN
#define DISPID_IE9EVENTS_FOCUSOUT                                 DISPID_EVMETH_ONFOCUSOUT
#define DISPID_IE9EVENTS_HASHCHANGE                               DISPID_EVMETH_ONHASHCHANGE
#define DISPID_IE9EVENTS_HELP                                     DISPID_EVMETH_ONHELP
#define DISPID_IE9EVENTS_INPUT                                    DISPID_EVPROP_INPUT
#define DISPID_IE9EVENTS_LOAD                                     DISPID_EVMETH_ONLOAD
#define DISPID_IE9EVENTS_KEYDOWN                                  DISPID_EVMETH_ONKEYDOWN
#define DISPID_IE9EVENTS_KEYPRESS                                 DISPID_EVMETH_ONKEYPRESS
#define DISPID_IE9EVENTS_KEYUP                                    DISPID_EVMETH_ONKEYUP
#define DISPID_IE9EVENTS_MESSAGE                                  DISPID_EVMETH_ONMESSAGE
#define DISPID_IE9EVENTS_ONLINE                                   DISPID_EVMETH_ONONLINE
#define DISPID_IE9EVENTS_OFFLINE                                  DISPID_EVMETH_ONOFFLINE
#define DISPID_IE9EVENTS_READYSTATECHANGE                         DISPID_EVMETH_ONREADYSTATECHANGE
#define DISPID_IE9EVENTS_RESET                                    DISPID_EVMETH_ONRESET
#define DISPID_IE9EVENTS_RESIZE                                   DISPID_EVMETH_ONRESIZE
#define DISPID_IE9EVENTS_SCROLL                                   DISPID_EVMETH_ONSCROLL
#define DISPID_IE9EVENTS_SELECT                                   DISPID_EVMETH_ONSELECT
#define DISPID_IE9EVENTS_SELECTIONCHANGE                          DISPID_EVMETH_ONSELECTIONCHANGE
#define DISPID_IE9EVENTS_SELECTSTART                              DISPID_EVMETH_ONSELECTSTART
#define DISPID_IE9EVENTS_START                                    DISPID_EVMETH_ONSTART
#define DISPID_IE9EVENTS_STOP                                     DISPID_EVMETH_ONSTOP
#define DISPID_IE9EVENTS_STORAGE                                  DISPID_EVMETH_ONSTORAGE
#define DISPID_IE9EVENTS_STORAGECOMMIT                            DISPID_EVMETH_ONSTORAGECOMMIT
#define DISPID_IE9EVENTS_SUBMIT                                   DISPID_EVMETH_ONSUBMIT
#define DISPID_IE9EVENTS_TEXTINPUT                                DISPID_EVPROP_TEXTINPUT
#define DISPID_IE9EVENTS_TIMEOUT                                  0
#define DISPID_IE9EVENTS_UNLOAD                                   DISPID_EVMETH_ONUNLOAD
#define DISPID_IE9EVENTS_WHEEL                                    DISPID_EVPROP_WHEEL
#define DISPID_IE9EVENTS_DBLCLICK                                 DISPID_EVMETH_ONDBLCLICK
#define DISPID_IE9EVENTS_MOUSEDOWN                                DISPID_EVMETH_ONMOUSEDOWN
#define DISPID_IE9EVENTS_MOUSEENTER                               DISPID_EVMETH_ONMOUSEENTER
#define DISPID_IE9EVENTS_MOUSELEAVE                               DISPID_EVMETH_ONMOUSELEAVE
#define DISPID_IE9EVENTS_MOUSEMOVE                                DISPID_EVMETH_ONMOUSEMOVE
#define DISPID_IE9EVENTS_MOUSEOUT                                 DISPID_EVMETH_ONMOUSEOUT
#define DISPID_IE9EVENTS_MOUSEOVER                                DISPID_EVMETH_ONMOUSEOVER
#define DISPID_IE9EVENTS_MOUSEUP                                  DISPID_EVMETH_ONMOUSEUP
#define DISPID_IE9EVENTS_MOUSEWHEEL                               DISPID_EVMETH_ONMOUSEWHEEL
#define DISPID_IE9EVENTS_BEFORECOPY                               DISPID_EVMETH_ONBEFORECOPY
#define DISPID_IE9EVENTS_BEFORECUT                                DISPID_EVMETH_ONBEFORECUT
#define DISPID_IE9EVENTS_BEFOREPASTE                              DISPID_EVMETH_ONBEFOREPASTE
#define DISPID_IE9EVENTS_COPY                                     DISPID_EVMETH_ONCOPY
#define DISPID_IE9EVENTS_CUT                                      DISPID_EVMETH_ONCUT
#define DISPID_IE9EVENTS_DRAG                                     DISPID_EVMETH_ONDRAG
#define DISPID_IE9EVENTS_DRAGEND                                  DISPID_EVMETH_ONDRAGEND
#define DISPID_IE9EVENTS_DRAGENTER                                DISPID_EVMETH_ONDRAGENTER
#define DISPID_IE9EVENTS_DRAGLEAVE                                DISPID_EVMETH_ONDRAGLEAVE
#define DISPID_IE9EVENTS_DRAGOVER                                 DISPID_EVMETH_ONDRAGOVER
#define DISPID_IE9EVENTS_DRAGSTART                                DISPID_EVMETH_ONDRAGSTART
#define DISPID_IE9EVENTS_DROP                                     DISPID_EVMETH_ONDROP
#define DISPID_IE9EVENTS_PASTE                                    DISPID_EVMETH_ONPASTE
#define DISPID_IE9EVENTS_MSBEFOREEDITFOCUS                        DISPID_EVMETH_ONBEFOREEDITFOCUS
#define DISPID_IE9EVENTS_MSCONTROLSELECT                          DISPID_EVMETH_ONCONTROLSELECT
#define DISPID_IE9EVENTS_MSCONTROLRESIZESTART                     DISPID_EVMETH_ONRESIZESTART
#define DISPID_IE9EVENTS_MSCONTROLRESIZEEND                       DISPID_EVMETH_ONRESIZEEND
#define DISPID_IE9EVENTS_COMPOSITIONSTART                         DISPID_EVPROP_COMPOSITIONSTART
#define DISPID_IE9EVENTS_COMPOSITIONUPDATE                        DISPID_EVPROP_COMPOSITIONUPDATE
#define DISPID_IE9EVENTS_COMPOSITIONEND                           DISPID_EVPROP_COMPOSITIONEND
#define DISPID_IE9EVENTS_DOMATTRMODIFIED                          DISPID_EVPROP_DOMATTRMODIFIED
#define DISPID_IE9EVENTS_DOMCHARACTERDATAMODIFIED                 DISPID_EVPROP_DOMCHARDATAMODIFIED
#define DISPID_IE9EVENTS_DOMNODEINSERTED                          DISPID_EVPROP_DOMNODEINSERTED
#define DISPID_IE9EVENTS_DOMNODEREMOVED                           DISPID_EVPROP_DOMNODEREMOVED
#define DISPID_IE9EVENTS_DOMSUBTREEMODIFIED                       DISPID_EVPROP_DOMSUBTREEMODIFIED
#define DISPID_IE9EVENTS_SVGLOAD                                  DISPID_EVPROP_SVGLOAD
#define DISPID_IE9EVENTS_SVGUNLOAD                                DISPID_EVPROP_SVGUNLOAD
#define DISPID_IE9EVENTS_SVGABORT                                 DISPID_EVPROP_SVGABORT
#define DISPID_IE9EVENTS_SVGERROR                                 DISPID_EVPROP_SVGERROR
#define DISPID_IE9EVENTS_SVGRESIZE                                DISPID_EVPROP_SVGRESIZE
#define DISPID_IE9EVENTS_SVGSCROLL                                DISPID_EVPROP_SVGSCROLL
#define DISPID_IE9EVENTS_SVGZOOM                                  DISPID_EVPROP_SVGZOOM
#define DISPID_IE9EVENTS_MSTHUMBNAILCLICK                         DISPID_EVPROP_ONMSTHUMBNAILCLICK
#define DISPID_IE9EVENTS_MSSITEMODEJUMPLISTITEMREMOVED            DISPID_EVPROP_ONMSSITEMODEJUMPLISTITEMREMOVED
#define DISPID_IE9EVENTS_CANPLAY                                  DISPID_EVPROP_CANPLAY
#define DISPID_IE9EVENTS_CANPLAYTHROUGH                           DISPID_EVPROP_CANPLAYTHROUGH
#define DISPID_IE9EVENTS_DURATIONCHANGE                           DISPID_EVPROP_DURATIONCHANGE
#define DISPID_IE9EVENTS_EMPTIED                                  DISPID_EVPROP_EMPTIED
#define DISPID_IE9EVENTS_ENDED                                    DISPID_EVPROP_ENDED
#define DISPID_IE9EVENTS_LOADEDDATA                               DISPID_EVPROP_LOADEDDATA
#define DISPID_IE9EVENTS_LOADEDMETADATA                           DISPID_EVPROP_LOADEDMETADATA
#define DISPID_IE9EVENTS_LOADSTART                                DISPID_EVPROP_LOADSTART
#define DISPID_IE9EVENTS_PAUSE                                    DISPID_EVPROP_PAUSE
#define DISPID_IE9EVENTS_PLAY                                     DISPID_EVPROP_PLAY
#define DISPID_IE9EVENTS_PLAYING                                  DISPID_EVPROP_PLAYING
#define DISPID_IE9EVENTS_PROGRESS                                 DISPID_EVPROP_PROGRESS
#define DISPID_IE9EVENTS_RATECHANGE                               DISPID_EVPROP_RATECHANGE
#define DISPID_IE9EVENTS_SEEKED                                   DISPID_EVPROP_SEEKED
#define DISPID_IE9EVENTS_SEEKING                                  DISPID_EVPROP_SEEKING
#define DISPID_IE9EVENTS_STALLED                                  DISPID_EVPROP_STALLED
#define DISPID_IE9EVENTS_SUSPEND                                  DISPID_EVPROP_SUSPEND
#define DISPID_IE9EVENTS_TIMEUPDATE                               DISPID_EVPROP_TIMEUPDATE
#define DISPID_IE9EVENTS_VOLUMECHANGE                             DISPID_EVPROP_VOLUMECHANGE
#define DISPID_IE9EVENTS_WAITING                                  DISPID_EVPROP_WAITING
#define DISPID_IE9EVENTS_BLOCKED                                  DISPID_EVPROP_ONBLOCKED
#define DISPID_IE9EVENTS_UPGRADENEEDED                            DISPID_EVPROP_ONUPGRADENEEDED
#define DISPID_IE9EVENTS_CUECHANGE                                DISPID_EVPROP_ONCUECHANGE
#define DISPID_IE9EVENTS_ENTER                                    DISPID_EVPROP_ONENTER
#define DISPID_IE9EVENTS_EXIT                                     DISPID_EVPROP_ONEXIT
#define DISPID_IE9EVENTS_ADDTRACK                                 DISPID_EVPROP_ADDTRACK
#define DISPID_IE9EVENTS_REMOVETRACK                              DISPID_EVPROP_REMOVETRACK
#define DISPID_IE9EVENTS_MSPOINTERDOWN                            DISPID_EVPROP_ONMSPOINTERDOWN
#define DISPID_IE9EVENTS_MSPOINTERMOVE                            DISPID_EVPROP_ONMSPOINTERMOVE
#define DISPID_IE9EVENTS_MSPOINTERUP                              DISPID_EVPROP_ONMSPOINTERUP
#define DISPID_IE9EVENTS_MSPOINTEROVER                            DISPID_EVPROP_ONMSPOINTEROVER
#define DISPID_IE9EVENTS_MSPOINTEROUT                             DISPID_EVPROP_ONMSPOINTEROUT
#define DISPID_IE9EVENTS_MSPOINTERCANCEL                          DISPID_EVPROP_ONMSPOINTERCANCEL
#define DISPID_IE9EVENTS_MSPOINTERHOVER                           DISPID_EVPROP_ONMSPOINTERHOVER
#define DISPID_IE9EVENTS_MSLOSTPOINTERCAPTURE                     DISPID_EVPROP_ONMSLOSTPOINTERCAPTURE
#define DISPID_IE9EVENTS_MSGOTPOINTERCAPTURE                      DISPID_EVPROP_ONMSGOTPOINTERCAPTURE
#define DISPID_IE9EVENTS_MSPOINTERENTER                           DISPID_EVPROP_ONMSPOINTERENTER
#define DISPID_IE9EVENTS_MSPOINTERLEAVE                           DISPID_EVPROP_ONMSPOINTERLEAVE
#define DISPID_IE9EVENTS_TOUCHSTART                               DISPID_EVPROP_ONTOUCHSTART
#define DISPID_IE9EVENTS_TOUCHEND                                 DISPID_EVPROP_ONTOUCHEND
#define DISPID_IE9EVENTS_TOUCHMOVE                                DISPID_EVPROP_ONTOUCHMOVE
#define DISPID_IE9EVENTS_TOUCHCANCEL                              DISPID_EVPROP_ONTOUCHCANCEL
#define DISPID_IE9EVENTS_MSGESTURESTART                           DISPID_EVPROP_ONMSGESTURESTART
#define DISPID_IE9EVENTS_MSGESTURECHANGE                          DISPID_EVPROP_ONMSGESTURECHANGE
#define DISPID_IE9EVENTS_MSGESTUREEND                             DISPID_EVPROP_ONMSGESTUREEND
#define DISPID_IE9EVENTS_MSGESTUREHOLD                            DISPID_EVPROP_ONMSGESTUREHOLD
#define DISPID_IE9EVENTS_MSGESTURETAP                             DISPID_EVPROP_ONMSGESTURETAP
#define DISPID_IE9EVENTS_MSGESTUREDOUBLETAP                       DISPID_EVPROP_ONMSGESTUREDOUBLETAP
#define DISPID_IE9EVENTS_MSINERTIASTART                           DISPID_EVPROP_ONMSINERTIASTART
#define DISPID_IE9EVENTS_MSCONTENTZOOM                            DISPID_EVPROP_ONMSCONTENTZOOM
#define DISPID_IE9EVENTS_MSHOLDVISUAL                             DISPID_EVPROP_ONMSHOLDVISUAL
#define DISPID_IE9EVENTS_TRANSITIONSTART                          DISPID_EVPROP_ONTRANSITIONSTART
#define DISPID_IE9EVENTS_TRANSITIONEND                            DISPID_EVPROP_ONTRANSITIONEND
#define DISPID_IE9EVENTS_ANIMATIONSTART                           DISPID_EVPROP_ONANIMATIONSTART
#define DISPID_IE9EVENTS_ANIMATIONEND                             DISPID_EVPROP_ONANIMATIONEND
#define DISPID_IE9EVENTS_ANIMATIONITERATION                       DISPID_EVPROP_ONANIMATIONITERATION
#define DISPID_IE9EVENTS_MSMANIPULATIONSTATECHANGED               DISPID_EVPROP_ONMSMANIPULATIONSTATECHANGED
#define DISPID_IE9EVENTS_CHECKING                                 DISPID_EVPROP_CHECKING
#define DISPID_IE9EVENTS_NOUPDATE                                 DISPID_EVPROP_NOUPDATE
#define DISPID_IE9EVENTS_DOWNLOADING                              DISPID_EVPROP_DOWNLOADING
#define DISPID_IE9EVENTS_UPDATEREADY                              DISPID_EVPROP_UPDATEREADY
#define DISPID_IE9EVENTS_CACHED                                   DISPID_EVPROP_CACHED
#define DISPID_IE9EVENTS_OBSOLETE                                 DISPID_EVPROP_OBSOLETE
#define DISPID_IE9EVENTS_INVALID                                  DISPID_EVPROP_INVALID
#define DISPID_IE9EVENTS_OPEN                                     DISPID_EVPROP_ONOPEN
#define DISPID_IE9EVENTS_CLOSE                                    DISPID_EVPROP_ONCLOSE
#define DISPID_IE9EVENTS_LOADEND                                  DISPID_EVPROP_LOADEND
#define DISPID_IE9EVENTS_POPSTATE                                 DISPID_EVPROP_ONPOPSTATE
#define DISPID_IE9EVENTS_VISIBILITYCHANGE                         DISPID_EVPROP_VISIBILITYCHANGE
#define DISPID_IE9EVENTS_MSREGIONUPDATE                           DISPID_EVPROP_ONMSREGIONUPDATE
#define DISPID_IE9EVENTS_MSVIDEOFORMATCHANGED                     DISPID_EVPROP_ONMSVIDEOFORMATCHANGED
#define DISPID_IE9EVENTS_MSVIDEOFRAMESTEPCOMPLETED                DISPID_EVPROP_ONMSVIDEOFRAMESTEPCOMPLETED
#define DISPID_IE9EVENTS_MSVIDEOOPTIMALLAYOUTCHANGED              DISPID_EVPROP_ONMSVIDEOOPTIMALLAYOUTCHANGED
#define DISPID_IE9EVENTS_MSFULLSCREENCHANGE                       DISPID_EVPROP_ONMSFULLSCREENCHANGE
#define DISPID_IE9EVENTS_MSFULLSCREENERROR                        DISPID_EVPROP_ONMSFULLSCREENERROR
#define DISPID_IE9EVENTS_MSELEMENTRESIZE                          DISPID_EVPROP_MSELEMENTRESIZE
#define DISPID_IE9EVENTS_SOURCEOPEN                               DISPID_EVPROP_ONSOURCEOPEN
#define DISPID_IE9EVENTS_SOURCEENDED                              DISPID_EVPROP_ONSOURCEENDED
#define DISPID_IE9EVENTS_SOURCECLOSE                              DISPID_EVPROP_ONSOURCECLOSE
#define DISPID_IE9EVENTS_ADDSOURCEBUFFER                          DISPID_EVPROP_ONADDSOURCEBUFFER
#define DISPID_IE9EVENTS_REMOVESOURCEBUFFER                       DISPID_EVPROP_ONREMOVESOURCEBUFFER
#define DISPID_IE9EVENTS_UPDATESTART                              DISPID_EVPROP_ONUPDATESTART
#define DISPID_IE9EVENTS_UPDATE                                   DISPID_EVPROP_ONUPDATE
#define DISPID_IE9EVENTS_UPDATEEND                                DISPID_EVPROP_ONUPDATEEND
#define DISPID_IE9EVENTS_MSNEEDKEY                                DISPID_EVPROP_ONMSNEEDKEY
#define DISPID_IE9EVENTS_MSKEYMESSAGE                             DISPID_EVPROP_ONMSKEYMESSAGE
#define DISPID_IE9EVENTS_MSKEYERROR                               DISPID_EVPROP_ONMSKEYERROR
#define DISPID_IE9EVENTS_MSKEYADDED                               DISPID_EVPROP_ONMSKEYADDED
#define DISPID_IE9EVENTS_MSWEBVIEWDOMCONTENTLOADED                DISPID_EVPROP_MSHTMLWEBVIEW_ONDOMCONTENTLOADED
#define DISPID_IE9EVENTS_MSWEBVIEWCONTENTLOADING                  DISPID_EVPROP_MSHTMLWEBVIEW_ONCONTENTLOADING
#define DISPID_IE9EVENTS_MSWEBVIEWNAVIGATIONSTARTING              DISPID_EVPROP_MSHTMLWEBVIEW_ONNAVIGATIONSTARTING
#define DISPID_IE9EVENTS_MSWEBVIEWNAVIGATIONCOMPLETED             DISPID_EVPROP_MSHTMLWEBVIEW_ONNAVIGATIONCOMPLETED
#define DISPID_IE9EVENTS_MSWEBVIEWFRAMEDOMCONTENTLOADED           DISPID_EVPROP_MSHTMLWEBVIEW_ONFRAMEDOMCONTENTLOADED
#define DISPID_IE9EVENTS_MSWEBVIEWFRAMECONTENTLOADING             DISPID_EVPROP_MSHTMLWEBVIEW_ONFRAMECONTENTLOADING
#define DISPID_IE9EVENTS_MSWEBVIEWFRAMENAVIGATIONSTARTING         DISPID_EVPROP_MSHTMLWEBVIEW_ONFRAMENAVIGATIONSTARTING
#define DISPID_IE9EVENTS_MSWEBVIEWFRAMENAVIGATIONCOMPLETED        DISPID_EVPROP_MSHTMLWEBVIEW_ONFRAMENAVIGATIONCOMPLETED
#define DISPID_IE9EVENTS_MSWEBVIEWSCRIPTNOTIFY                    DISPID_EVPROP_MSHTMLWEBVIEW_ONSCRIPTNOTIFY
#define DISPID_IE9EVENTS_MSWEBVIEWLONGRUNNINGSCRIPTDETECTED       DISPID_EVPROP_MSHTMLWEBVIEW_ONLONGRUNNINGSCRIPTDETECTED
#define DISPID_IE9EVENTS_MSWEBVIEWUNVIEWABLECONTENTIDENTIFIED     DISPID_EVPROP_MSHTMLWEBVIEW_ONUNVIEWABLECONTENT
#define DISPID_IE9EVENTS_MSWEBVIEWUNSAFECONTENTWARNINGDISPLAYING  DISPID_EVPROP_MSHTMLWEBVIEW_ONUNSAFECONTENTWARNINGDISPLAYING
#define DISPID_IE9EVENTS_MSWEBVIEWCONTAINSFULLSCREENELEMENTCHANGED DISPID_EVPROP_MSHTMLWEBVIEW_ONCONTAINSFULLSCREENELEMENTCHANGED
#define DISPID_IE9EVENTS_WEBGLCONTEXTLOST                         DISPID_EVPROP_WEBGLCONTEXTLOST
#define DISPID_IE9EVENTS_WEBGLCONTEXTRESTORED                     DISPID_EVPROP_WEBGLCONTEXTRESTORED
#define DISPID_IE9EVENTS_WEBGLCONTEXTCREATIONERROR                DISPID_EVPROP_WEBGLCONTEXTCREATIONERROR
#define DISPID_IE9EVENTS_MSSITEPINNED                             DISPID_EVPROP_ONMSSITEPINNED
#define DISPID_IE9EVENTS_MSORIENTATIONCHANGE                      DISPID_EVPROP_MSORIENTATIONCHANGE
#define DISPID_IE9EVENTS_ORIENTATIONCHANGE                        DISPID_EVPROP_ORIENTATIONCHANGE
#define DISPID_IE9EVENTS_DEVICEORIENTATION                        DISPID_EVPROP_ONDEVICEORIENTATION
#define DISPID_IE9EVENTS_DEVICEMOTION                             DISPID_EVPROP_ONDEVICEMOTION
#define DISPID_IE9EVENTS_COMPASSNEEDSCALIBRATION                  DISPID_EVPROP_ONCOMPASSNEEDSCALIBRATION
#define DISPID_IE9EVENTS_PAGESHOW                                 DISPID_EVPROP_ONPAGESHOW
#define DISPID_IE9EVENTS_PAGEHIDE                                 DISPID_EVPROP_ONPAGEHIDE
#define DISPID_IE9EVENTS_MSCANDIDATEWINDOWSHOW                    DISPID_EVPROP_ONMSCANDIDATEWINDOWSHOW
#define DISPID_IE9EVENTS_MSCANDIDATEWINDOWUPDATE                  DISPID_EVPROP_ONMSCANDIDATEWINDOWUPDATE
#define DISPID_IE9EVENTS_MSCANDIDATEWINDOWHIDE                    DISPID_EVPROP_ONMSCANDIDATEWINDOWHIDE

