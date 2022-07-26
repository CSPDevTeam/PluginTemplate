// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include <plugin.h>


#ifdef _DEBUG
#pragma comment(lib,"../SDK/Lib/CSPBot2.0_d.lib")
#else
#pragma comment(lib,"../SDK/Lib/CSPBot2.0.lib")
#endif

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

void PluginInit();

extern "C" {
    // Do something after all the plugins loaded
    _declspec(dllexport) void onPostInit() {
        std::ios::sync_with_stdio(false);
        PluginInit();
    }
}

