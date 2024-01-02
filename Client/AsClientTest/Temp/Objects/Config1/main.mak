SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files\TortoiseHg\;C:\Program Files\Microsoft VS Code\bin;C:\Program Files\MATLAB\R2021a\bin;C:\Program Files\Python39\Scripts\;C:\Program Files\Python39\;C:\Program Files\Azure Data Studio\bin;C:\Program Files (x86)\Pulse Secure\VC142.CRT\X64\;C:\Program Files (x86)\Pulse Secure\VC142.CRT\X86\;C:\Program Files\dotnet\;C:\Program Files (x86)\Common Files\Pulse Secure\TNC Client Plugin\;C:\Program Files (x86)\Pico Technology\PicoScope6\;C:\Program Files\Git\cmd;C:\Program Files\Docker\Docker\resources\bin;C:\Program Files\nodejs\;C:\Users\andersenm\AppData\Local\Microsoft\WindowsApps;C:\Users\andersenm\AppData\Local\GitHubDesktop\bin;C:\Program Files\Azure Data Studio\bin;C:\Users\andersenm\AppData\Roaming\Python\Python39\Scripts;C:\Program Files (x86)\HTML Help Workshop;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Users\andersenm\AppData\Local\Microsoft\WinGet\Links;C:\Users\andersenm\AppData\Roaming\npm;C:\Users\andersenm\AppData\Local\Microsoft\WindowsApps;C:\Users\andersenm\AppData\Local\GitHubDesktop\bin;C:\Program Files\Azure Data Studio\bin;C:\Users\andersenm\AppData\Roaming\Python\Python39\Scripts;C:\Program Files (x86)\HTML Help Workshop;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Users\andersenm\AppData\Local\Microsoft\WinGet\Links;C:\Users\andersenm\AppData\Roaming\npm;C:\BrAutomation\AS412\Bin-en\4.12;C:\BrAutomation\AS412\Bin-en\4.11;C:\BrAutomation\AS412\Bin-en\4.10;C:\BrAutomation\AS412\Bin-en\4.9;C:\BrAutomation\AS412\Bin-en\4.8;C:\BrAutomation\AS412\Bin-en\4.7;C:\BrAutomation\AS412\Bin-en\4.6;C:\BrAutomation\AS412\Bin-en\4.5;C:\BrAutomation\AS412\Bin-en\4.4;C:\BrAutomation\AS412\Bin-en\4.3;C:\BrAutomation\AS412\Bin-en\4.2;C:\BrAutomation\AS412\Bin-en\4.1;C:\BrAutomation\AS412\Bin-en\4.0;C:\BrAutomation\AS412\Bin-en
export AS_BUILD_MODE := BuildAndTransfer
export AS_VERSION := 4.12.4.107 SP
export AS_WORKINGVERSION := 4.12
export AS_COMPANY_NAME :=  
export AS_USER_NAME := andersenm
export AS_PATH := C:/BrAutomation/AS412
export AS_BIN_PATH := C:/BrAutomation/AS412/Bin-en
export AS_PROJECT_PATH := C:/projects/brdk_OPCUA_Python/Client/AsClientTest
export AS_PROJECT_NAME := opcuaServerTest
export AS_SYSTEM_PATH := C:/BrAutomation/AS/System
export AS_VC_PATH := C:/BrAutomation/AS412/AS/VC
export AS_TEMP_PATH := C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Temp
export AS_CONFIGURATION := Config1
export AS_BINARIES_PATH := C:/projects/brdk_OPCUA_Python/Client/AsClientTest/Binaries
export AS_GNU_INST_PATH := C:/BrAutomation/AS412/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH := C:/BrAutomation/AS412/AS/GnuInst/V4.1.2/4.9/bin
export AS_GNU_INST_PATH_SUB_MAKE := C:/BrAutomation/AS412/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH_SUB_MAKE := C:/BrAutomation/AS412/AS/GnuInst/V4.1.2/4.9/bin
export AS_INSTALL_PATH := C:/BrAutomation/AS412
export WIN32_AS_PATH := "C:\BrAutomation\AS412"
export WIN32_AS_BIN_PATH := "C:\BrAutomation\AS412\Bin-en"
export WIN32_AS_PROJECT_PATH := "C:\projects\brdk_OPCUA_Python\Client\AsClientTest"
export WIN32_AS_SYSTEM_PATH := "C:\BrAutomation\AS\System"
export WIN32_AS_VC_PATH := "C:\BrAutomation\AS412\AS\VC"
export WIN32_AS_TEMP_PATH := "C:\projects\brdk_OPCUA_Python\Client\AsClientTest\Temp"
export WIN32_AS_BINARIES_PATH := "C:\projects\brdk_OPCUA_Python\Client\AsClientTest\Binaries"
export WIN32_AS_GNU_INST_PATH := "C:\BrAutomation\AS412\AS\GnuInst\V4.1.2"
export WIN32_AS_GNU_BIN_PATH := "C:\BrAutomation\AS412\AS\GnuInst\V4.1.2\bin"
export WIN32_AS_INSTALL_PATH := "C:\BrAutomation\AS412"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/4.9/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/opcuaServerTest.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'BuildAndTransfer'   

