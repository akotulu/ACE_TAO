# Microsoft Developer Studio Project File - Name="ServiceConfigurator" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Java Virtual Machine Java Project" 0x0809

CFG=ServiceConfigurator - Java Virtual Machine Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "ServiceConfigurator.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ServiceConfigurator.mak"\
 CFG="ServiceConfigurator - Java Virtual Machine Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ServiceConfigurator - Java Virtual Machine Release" (based on\
 "Java Virtual Machine Java Project")
!MESSAGE "ServiceConfigurator - Java Virtual Machine Debug" (based on\
 "Java Virtual Machine Java Project")
!MESSAGE 

# Begin Project
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
JAVA=jvc.exe

!IF  "$(CFG)" == "ServiceConfigurator - Java Virtual Machine Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir ""
# PROP BASE Intermediate_Dir ""
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\..\classes-r"
# PROP Intermediate_Dir ""
# PROP Target_Dir ""
# ADD BASE JAVA /O
# ADD JAVA /O

!ELSEIF  "$(CFG)" == "ServiceConfigurator - Java Virtual Machine Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir ""
# PROP BASE Intermediate_Dir ""
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\..\classes"
# PROP Intermediate_Dir ""
# PROP Target_Dir ""
# ADD BASE JAVA /g
# ADD JAVA /g

!ENDIF 

# Begin Target

# Name "ServiceConfigurator - Java Virtual Machine Release"
# Name "ServiceConfigurator - Java Virtual Machine Debug"
# Begin Source File

SOURCE=.\reloadTest.java
# End Source File
# Begin Source File

SOURCE=.\suspendTest.java
# End Source File
# Begin Source File

SOURCE=.\TestService.java
# End Source File
# End Target
# End Project
