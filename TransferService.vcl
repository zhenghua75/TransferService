<html>
<body>
<pre>
<h1>Build Log</h1>
<h3>
--------------------Configuration: TransferService - Win32 (WCE ARMV4) Release--------------------
</h3>
<h3>Command Lines</h3>
Creating command line "rc.exe /l 0x409 /fo"ARMV4Rel/TransferService.res" /d UNDER_CE=400 /d _WIN32_WCE=400 /d "NDEBUG" /d "UNICODE" /d "_UNICODE" /d "WCE_PLATFORM_STANDARDSDK" /d "ARM" /d "_ARM_" /d "ARMV4" /d "_AFXDLL" /r "C:\Program Files\Microsoft eMbedded C++ 4.0\Common\EVC\MyProjects\TransferService\TransferService.rc"" 
Creating temporary file "C:\DOCUME~1\ADMINI~1\LOCALS~1\Temp\RSP16.tmp" with contents
[
/nologo /W3 /D "ARM" /D "_ARM_" /D "ARMV4" /D UNDER_CE=400 /D _WIN32_WCE=400 /D "WCE_PLATFORM_STANDARDSDK" /D "UNICODE" /D "_UNICODE" /D "NDEBUG" /D "_AFXDLL" /Fp"ARMV4Rel/TransferService.pch" /Yu"stdafx.h" /Fo"ARMV4Rel/" /O2 /MC /c 
"C:\Program Files\Microsoft eMbedded C++ 4.0\Common\EVC\MyProjects\TransferService\TransferService.cpp"
"C:\Program Files\Microsoft eMbedded C++ 4.0\Common\EVC\MyProjects\TransferService\TransferServiceDlg.cpp"
]
Creating command line "clarm.exe @C:\DOCUME~1\ADMINI~1\LOCALS~1\Temp\RSP16.tmp" 
Creating temporary file "C:\DOCUME~1\ADMINI~1\LOCALS~1\Temp\RSP17.tmp" with contents
[
/nologo /base:"0x00010000" /stack:0x10000,0x1000 /entry:"wWinMainCRTStartup" /incremental:no /pdb:"ARMV4Rel/TransferService.pdb" /out:"ARMV4Rel/TransferService.exe" /subsystem:windowsce,4.00 /align:"4096" /MACHINE:ARM 
".\ARMV4Rel\StdAfx.obj"
".\ARMV4Rel\TransferService.obj"
".\ARMV4Rel\TransferServiceDlg.obj"
".\ARMV4Rel\TransferService.res"
]
Creating command line "link.exe @C:\DOCUME~1\ADMINI~1\LOCALS~1\Temp\RSP17.tmp"
<h3>Output Window</h3>
Compiling resources...
Compiling...
TransferService.cpp
TransferServiceDlg.cpp
Generating Code...
Linking...




<h3>Results</h3>
TransferService.exe - 0 error(s), 0 warning(s)
</pre>
</body>
</html>
