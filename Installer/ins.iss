[Setup]
AppVersion=v1.0
AppName=SirahNabi
AppVerName=SirahNabi
AppPublisher=Prosoft
AllowCancelDuringInstall = yes
DefaultDirName={pf}\Prosoft\SirahNabi
DefaultGroupName=SirahNabi
Compression = lzma
SolidCompression = yes
OutputBaseFilename=SirahNabiSetup
AllowNoIcons = yes
AlwaysRestart = no
AlwaysShowComponentsList = no
DisableProgramGroupPage = yes
AppendDefaultDirName = yes
CreateUninstallRegKey = yes
DisableStartupPrompt = yes
LanguageDetectionMethod=none
ShowLanguageDialog=no
Uninstallable = yes
UninstallFilesDir={app}\uninst
UninstallDisplayIcon={app}\SirahNabi.exe,0
UninstallDisplayName=Sirah Nabi
WindowVisible = no
AppCopyright=Copyright © 2015 Professional Software
FlatComponentsList = yes
PrivilegesRequired = admin
VersionInfoVersion=1.0
SetupIconFile=1.ico
;WizardImageFile=2.bmp
;WizardSmallImageFile=1.bmp                                                                                                             \

[Languages]
Name: en; MessagesFile: compiler:Default.isl

[Tasks]
Name: desktopicon; Description: {cm:CreateDesktopIcon}; GroupDescription: {cm:AdditionalIcons}; Flags: unchecked
Name: quicklaunchicon; Description: {cm:CreateQuickLaunchIcon}; GroupDescription: {cm:AdditionalIcons}; Flags: unchecked

[Files]
;daftar file MySQL ODBC 5.3
Source: "Connector ODBC 5.3\myodbc5a.dll"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5a.lib"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5S.dll"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5S.lib"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5w.dll"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc5w.lib"; DestDir: {sys}; Flags: onlyifdoesntexist
Source: "Connector ODBC 5.3\myodbc-installer.exe"; DestDir: {sys}; Flags: onlyifdoesntexist


;My Application Runtime
Source: ShirahNabi.exe; DestDir: {app}; Flags: ignoreversion
Source: Update.exe; DestDir: {app}; Flags: ignoreversion
Source: ver.txt; DestDir: {app}; Flags: ignoreversion

[Fonts]
Source: "FontAwesome.otf"; DestDir: "{fonts}"; FontInstall: "FontAwesome"; Flags: onlyifdoesntexist uninsneveruninstall

[Icons]
Name: "{group}\SirahNabi"; Filename: "{app}\ShirahNabi.exe"
Name: "{group}\{cm:UninstallProgram, SirahNabi}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\SirahNabi"; Filename: "{app}\ShirahNabi.exe"; Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\SirahNabi"; Filename: "{app}\ShirahNabi.exe"; Tasks: quicklaunchicon

[Run]

;install driver myodbc
Filename: "{sys}\myodbc-installer.exe"; Parameters: "-d -a -n ""MySQL ODBC 5.3 ANSI Driver"" -t ""DRIVER=myodbc5a.dll;SETUP=myodbc5S.dll"""; StatusMsg: "Tunggu sedang mendaftarkan driver MySQL Connector ODBC 5.3"; Flags: runhidden
Filename: "{sys}\myodbc-installer.exe"; Parameters: "-s -a -c2 -n ""ariefset_sn_rpl"" -t ""DRIVER=MySQL ODBC 5.3 ANSI Driver; SERVER=ariefsetya.com;DATABASE=ariefset_sn_rpl;UID=ariefset_sn_rpl;PWD=siroh;""";StatusMsg: "Sedang membuat data source"; Flags: runhidden


[UninstallDelete] 
Type: files; Name: {sys}\myodbc5a.dll
Type: files; Name: {sys}\myodbc5S.dll
Type: files; Name: {sys}\myodbc5a.lib
Type: files; Name: {sys}\myodbc5S.lib
Type: files; Name: {sys}\myodbc5w.dll
Type: files; Name: {sys}\myodbc5w.lib
Type: files; Name: {sys}\myodbc-installer.exe

Type: files; Name: {app}\SirahNabi.sql

[Registry]
Root: HKCU; Subkey: "Software\SirahNabi"; ValueName: "installDir"; ValueType: String; ValueData: {app}; Flags: uninsdeletevalue