:-
:- batch file that is included in all other batch files for configuration
:-

:-*********************************************************************
:- determine your compiler settings
:- 
:- you have to
:-   search for XNASM    - and set the path for NASM
:-   search for COMPILER - and set your compiler
:-   search for ??_BASE  - and set the path to your compiler
:- 
:-*********************************************************************

:-**********************************************************************
:-- define NASM executable - remember - it should not be protected
:-  mode DJGPP version if you're using Windows NT/2k/XP to compile
:-  because DJGPP-nasm crashes when using protected mode Borland's
:-  make under Windows NT/2k/XP
:-**********************************************************************

set XNASM=nasm

:**********************************************************************
:- define your COMPILER type here, pick one of them
:**********************************************************************

:- Turbo C 2.01
:- set COMPILER=TC2
:- Turbo C++ 1.01
:- set COMPILER=TURBOCPP
:- Borland C
:- set COMPILER=BC5
:- Watcom C (for DOS)
set COMPILER=WATCOM
:- Watcom C (for Windows)
:- set COMPILER=OWWIN

:-**********************************************************************
:-- where is the BASE dir of your compiler(s) ??
:-**********************************************************************
						
:- set TC2_BASE=c:\tc201
:- set TP1_BASE=c:\tcpp
:- set BC5_BASE=c:\bc5

:- if WATCOM maybe you need to set your WATCOM environment variables 
:- and path
:- if not \%WATCOM% == \ goto watcom_defined
:- set WATCOM=c:\watcom
:- set PATH=%PATH%;%WATCOM%\binw
:watcom_defined

:-**********************************************************************
:- where is UPX and which options to use?
:-**********************************************************************
set XUPX=upx --8086 --best
:- or use set XUPX=
:- if you don't want to use it

:**********************************************************************
:* select your default target: required CPU and what FAT system to support
:**********************************************************************

:- set XCPU=86
:- set XCPU=186
set XCPU=386

:- set XFAT=16
set XFAT=32

:- Give extra compiler DEFINE flags here
:- such as -DDEBUG : extra DEBUG output
:-         -DDOSEMU : printf output goes to dosemu log
:- set ALLCFLAGS=-DDEBUG


:-
:- $Id: config.b 864 2004-04-11 12:21:25Z bartoldeman $
:-
