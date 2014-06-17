
#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "stdafx.h"


using namespace std;

map<string, string> g_options;
LPCWSTR g_mainWinClassName = L"lab3";
LPCWSTR g_viewportWinClassName = L"viewport";




int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow)
{
    Application* app = NULL;

    try
    {
        app = new Application();

        app->Init();
        app->SceneInit();
        app->Run();
    }
    catch (const Error& e)
    {
        cout << e.What();
    }

    if (app) { delete app; }
    return 0;
}
