#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define IDC_EDIT_DISPLAY 117
#define IDC_BUTTON_EQUALS 118
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

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);
char displayText[256] = "";
char Nombre[] = "Calculadora";
WNDCLASSEX estilo1;
MSG mensaje;
HFONT hFont;
HWND ventana;
HWND button1;
HWND button2, button3, button4, button5, button6, button7, button8, button9, button10, button11;
HWND button12, button13, button14, button15, button16,editDisplay;
HINSTANCE g_hInstance;

double evaluateExpression(const char* expression) {
    // Aquí puedes implementar una lógica de evaluación de expresiones más completa si lo deseas
    // Esta es una implementación muy básica y no segura
    double result = 0.0;
    char oper = 0;
    double number = 0.0;
    const char* p = expression;
    while (*p) {
        if (*p >= '0' && *p <= '9') {
            number = strtod(p, (char**)&p);
            if (oper) {
                if (oper == '+') result += number;
                else if (oper == '-') result -= number;
                else if (oper == '*') result *= number;
                else if (oper == '/') result /= number;
                oper = 0;
            } else {
                result = number;
            }
        } else if (p == '+' || *p == '-' || *p == '' || *p == '/') {
            oper = *p;
            p++;
        } else {
            p++;
        }
    }
    return result;
}
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow)
{
    g_hInstance = hInstance;
    estilo1.hInstance = hInstance;
    estilo1.lpszClassName = Nombre;
    estilo1.lpfnWndProc = WindowProcedure;
    estilo1.style = CS_DBLCLKS;
    estilo1.cbSize = sizeof(WNDCLASSEX);

    estilo1.hIcon = LoadIcon(NULL, IDI_QUESTION);
    estilo1.hIconSm = LoadIcon(NULL, IDI_INFORMATION);
    estilo1.hCursor = LoadCursor(NULL, IDC_HAND);
    estilo1.lpszMenuName = NULL;   /* Sin Menu */
    estilo1.cbClsExtra = 0;
    estilo1.cbWndExtra = 0;
    estilo1.hbrBackground = (HBRUSH)COLOR_WINDOW; /* Color del fondo de ventana */

    if (!RegisterClassEx(&estilo1)) {
        return 0;
    }

    ventana = CreateWindowEx(
        0,
        Nombre,
        ("Calculadora"),
        WS_OVERLAPPEDWINDOW | WS_BORDER,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        510,
        680,
        NULL,
        NULL,
        hInstance,
        NULL);

    ShowWindow(ventana, nCmdShow);
    UpdateWindow(ventana);

    while (GetMessage(&mensaje, NULL, 0, 0))
    {
        TranslateMessage(&mensaje);
        DispatchMessage(&mensaje);
    }
    return mensaje.wParam;
}

LRESULT CALLBACK WindowProcedure(HWND ventana, UINT mensaje, WPARAM wParam, LPARAM lParam) {
    switch (mensaje) {
    case WM_CREATE:
        editDisplay = CreateWindowEx(0, "EDIT", NULL, WS_CHILD | WS_VISIBLE | WS_BORDER | ES_RIGHT, 10, 10, 470, 100, ventana, (HMENU)IDC_EDIT_DISPLAY, g_hInstance, NULL);

        button1 = CreateWindowEx(0, "button", "1", WS_VISIBLE | WS_CHILD, 0, 150, 120, 120, ventana, (HMENU)bt1, g_hInstance, 0);
        SendMessage(button1, WM_SETFONT, (WPARAM)hFont, TRUE);
        button2 = CreateWindowEx(0, "button", "2", WS_VISIBLE | WS_CHILD, 125, 150, 120, 120, ventana, (HMENU)bt2, g_hInstance, 0);
        SendMessage(button2, WM_SETFONT, (WPARAM)hFont, TRUE);
        button3 = CreateWindowEx(0, "button", "3", WS_VISIBLE | WS_CHILD, 250, 150, 120, 120, ventana, (HMENU)bt3, g_hInstance, 0);
        SendMessage(button3, WM_SETFONT, (WPARAM)hFont, TRUE);
        button4 = CreateWindowEx(0, "button", "4", WS_VISIBLE | WS_CHILD, 0, 270, 120, 120, ventana, (HMENU)bt4, g_hInstance, 0);
        SendMessage(button4, WM_SETFONT, (WPARAM)hFont, TRUE);
        button5 = CreateWindowEx(0, "button", "5", WS_VISIBLE | WS_CHILD, 125, 270, 120, 120, ventana, (HMENU)bt5, g_hInstance, 0);
        SendMessage(button5, WM_SETFONT, (WPARAM)hFont, TRUE);
        button6 = CreateWindowEx(0, "button", "6", WS_VISIBLE | WS_CHILD, 250, 270, 120, 120, ventana, (HMENU)bt6, g_hInstance, 0);
        SendMessage(button6, WM_SETFONT, (WPARAM)hFont, TRUE);
        button7 = CreateWindowEx(0, "button", "7", WS_VISIBLE | WS_CHILD, 0, 390, 120, 120, ventana, (HMENU)bt7, g_hInstance, 0);
        SendMessage(button7, WM_SETFONT, (WPARAM)hFont, TRUE);
        button8 = CreateWindowEx(0, "button", "8", WS_VISIBLE | WS_CHILD, 125, 390, 120, 120, ventana, (HMENU)bt8, g_hInstance, 0);
        SendMessage(button8, WM_SETFONT, (WPARAM)hFont, TRUE);
        button9 = CreateWindowEx(0, "button", "9", WS_VISIBLE | WS_CHILD, 250, 390, 120, 120, ventana, (HMENU)bt9, g_hInstance, 0);
        SendMessage(button9, WM_SETFONT, (WPARAM)hFont, TRUE);
        button10 = CreateWindowEx(0, "button", "0", WS_VISIBLE | WS_CHILD, 125, 510, 120, 120, ventana, (HMENU)bt10, g_hInstance, 0);
        SendMessage(button10, WM_SETFONT, (WPARAM)hFont, TRUE);
        button12 = CreateWindowEx(0, "button", "+", WS_VISIBLE | WS_CHILD, 370, 150, 120, 120, ventana, (HMENU)bt12, g_hInstance, 0);
        SendMessage(button12, WM_SETFONT, (WPARAM)hFont, TRUE);
        button13 = CreateWindowEx(0, "button", "-", WS_VISIBLE | WS_CHILD, 370, 270, 120, 120, ventana, (HMENU)bt13, g_hInstance, 0);
        SendMessage(button13, WM_SETFONT, (WPARAM)hFont, TRUE);
        button14 = CreateWindowEx(0, "button", "x", WS_VISIBLE | WS_CHILD, 370, 390, 120, 120, ventana, (HMENU)bt14, g_hInstance, 0);
        SendMessage(button14, WM_SETFONT, (WPARAM)hFont, TRUE);
        button15 = CreateWindowEx(0, "button", "/", WS_VISIBLE | WS_CHILD, 370, 510, 120, 120, ventana, (HMENU)bt15, g_hInstance, 0);
        SendMessage(button15, WM_SETFONT, (WPARAM)hFont, TRUE);
        button16 = CreateWindowEx(0, "button", "=", WS_VISIBLE | WS_CHILD, 250, 510, 120, 120, ventana, (HMENU)bt16, g_hInstance, 0);
        SendMessage(button16, WM_SETFONT, (WPARAM)hFont, TRUE);
        break;
    case WM_COMMAND:
        switch (LOWORD(wParam)) {
        case bt10:
            strcat(displayText, "0");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt1:
            strcat(displayText, "1");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt2:
            strcat(displayText, "2");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt3:
            strcat(displayText, "3");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt4:
            strcat(displayText, "4");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt5:
            strcat(displayText, "5");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt6:
            strcat(displayText, "6");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt7:
            strcat(displayText, "7");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt8:
            strcat(displayText, "8");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt9:
            strcat(displayText, "9");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt12:
            strcat(displayText, "+");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt13:
            strcat(displayText, "-");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt14:
            strcat(displayText, "*");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        case bt15:
            strcat(displayText, "/");
            SetWindowText(GetDlgItem(ventana, IDC_EDIT_DISPLAY), displayText);
            break;
        }
        if (wParam == bt11) {
            PostQuitMessage(0);
        }
        break;
    case WM_CLOSE:
        DestroyWindow(ventana);
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(ventana, mensaje, wParam, lParam);
    }
    return 0;
}