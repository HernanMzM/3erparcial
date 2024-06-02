#include <windows.h>
#define bt1 101
#define bt2 102
#define bt3 103
#define bt4 104
#define bt5 105
#define bt6 106
#define bt7 107
#define bt8 108
#define bt9 109
#define bt10 110
#define bt11 111
#define bt12 112
#define bt13 113
#define bt14 114
#define bt15 115
#define bt16 116

LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
char Nombre[]="Calculadora";
WNDCLASSEX estilo1; 
MSG mensaje;  
HWND ventana; 
HWND button1;
HWND button2,button3,button4,button5,button6,button7,button8,button9,button10,button11;
HWND button12,button13,button14,button15,button16;
int WINAPI WinMain (HINSTANCE hThisInstance,HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow)
{

    estilo1.hInstance = hThisInstance;
    estilo1.lpszClassName = Nombre;
    estilo1.lpfnWndProc = WindowProcedure;
    estilo1.style = CS_DBLCLKS;
    estilo1.cbSize = sizeof (WNDCLASSEX);

    estilo1.hIcon = LoadIcon (NULL, IDI_QUESTION);
    estilo1.hIconSm = LoadIcon (NULL, IDI_INFORMATION);
    estilo1.hCursor = LoadCursor (NULL, IDC_HAND);
    estilo1.lpszMenuName = NULL;   /* Sin Menu */
    estilo1.cbClsExtra = 0;
    estilo1.cbWndExtra = 0;
    estilo1.hbrBackground = (HBRUSH) COLOR_WINDOW; /* Color del fondo de ventana */

    if (!RegisterClassEx(&estilo1)) {
        return 0;
    }

    ventana = CreateWindowEx(
        0,
        Nombre,
        ("Calculadora"),
        WS_OVERLAPPEDWINDOW|WS_BORDER,
        CW_USEDEFAULT, CW_USEDEFAULT, 510, 680,
        NULL, NULL, hThisInstance, NULL);

    ShowWindow(ventana, nCmdShow);
    UpdateWindow(ventana);

    while (GetMessage (&mensaje, NULL, 0, 0))
    {
        TranslateMessage(&mensaje);
        DispatchMessage(&mensaje);
    }
    return mensaje.wParam;
}

LRESULT CALLBACK WindowProcedure (HWND ventana, UINT mensaje, WPARAM wParam, LPARAM lParam)
{
    switch (mensaje)  {
        case WM_CLOSE: 
        DestroyWindow(ventana); 
             break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        case WM_CREATE:
            button1 = CreateWindowEx(0,"button","1",WS_VISIBLE|WS_CHILD|0,0,150,120,120,ventana,(HMENU)bt1,0,0);
            button2 = CreateWindowEx(0,"button","2",WS_VISIBLE|WS_CHILD|0,125,150,120,120,ventana,(HMENU)bt2,0,0);
            button3 = CreateWindowEx(0,"button","3",WS_VISIBLE|WS_CHILD|0,250,150,120,120,ventana,(HMENU)bt3,0,0);
            button4 = CreateWindowEx(0,"button","4",WS_VISIBLE|WS_CHILD|0,0,270,120,120,ventana,(HMENU)bt4,0,0);
            button5 = CreateWindowEx(0,"button","5",WS_VISIBLE|WS_CHILD|0,125,270,120,120,ventana,(HMENU)bt5,0,0);
            button6 = CreateWindowEx(0,"button","6",WS_VISIBLE|WS_CHILD|0,250,270,120,120,ventana,(HMENU)bt6,0,0);
            button7 = CreateWindowEx(0,"button","7",WS_VISIBLE|WS_CHILD|0,0,390,120,120,ventana,(HMENU)bt7,0,0);
            button8 = CreateWindowEx(0,"button","8",WS_VISIBLE|WS_CHILD|0,125,390,120,120,ventana,(HMENU)bt8,0,0);
            button9 = CreateWindowEx(0,"button","9",WS_VISIBLE|WS_CHILD|0,250,390,120,120,ventana,(HMENU)bt9,0,0);
            button10 = CreateWindowEx(0,"button","0",WS_VISIBLE|WS_CHILD|0,125,510,120,120,ventana,(HMENU)bt10,0,0);
            button12 = CreateWindowEx(0,"button","+",WS_VISIBLE|WS_CHILD|0,370,150,120,120,ventana,(HMENU)bt12,0,0);
            button13 = CreateWindowEx(0,"button","-",WS_VISIBLE|WS_CHILD|0,370,270,120,120,ventana,(HMENU)bt13,0,0);
            button14 = CreateWindowEx(0,"button","x",WS_VISIBLE|WS_CHILD|0,370,390,120,120,ventana,(HMENU)bt14,0,0);
            button15 = CreateWindowEx(0,"button","/",WS_VISIBLE|WS_CHILD|0,370,510,120,120,ventana,(HMENU)bt15,0,0);
            button16 = CreateWindowEx(0,"button","=",WS_VISIBLE|WS_CHILD|0,250,510,120,120,ventana,(HMENU)bt16,0,0);
            button11 = CreateWindowEx(0,"button","Salir",WS_VISIBLE|WS_CHILD|0,0,0,80,25,ventana,(HMENU)bt11,0,0);
            break;
        case WM_COMMAND:
            if(wParam==bt11){
                PostQuitMessage(0);}
            break;
        default:  
            return DefWindowProc (ventana, mensaje, wParam, lParam);
    }
    return 0;
}