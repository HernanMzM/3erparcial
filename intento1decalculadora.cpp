#include <windows.h> // Libreria que contiene las funciones de Winapi
#define bt1 101
#define bt2 102
#define bt3 103
/*  Declaracion del procedimiento de windows  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
/*  Declaramos una variable de tipo char para guardar el nombre de nuestra aplicacion  */
char NombreClase[] = "Estilos";
HWND ventana1;
HWND ventana2;           /* Manejador de la ventana*/
HWND button1;
HWND button2;
HWND button3;
MSG mensajecomunica;     /* Mensajes internos que se envian a la aplicacion */
WNDCLASSEX estilo1;      /* Nombre de la clase para los estilos de ventana */
int WINAPI WinMain (HINSTANCE hThisInstance,HINSTANCE hPrevInstance, LPSTR lpszArgument, int nCmdShow)
{
    /* Creamos la estructura de la ventana indicando varias caracteristicas */
    estilo1.hInstance = hThisInstance;
    estilo1.lpszClassName = NombreClase;
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
    /* Registramos la clase de la ventana */
    if (!RegisterClassEx (&estilo1))
        return 0;
    /* Ahora creamos la ventana a partir de la clase anterior */
    ventana1 = CreateWindowEx (

           0,
           NombreClase,         /* Nombre de la clase */
           ("Elementos de Interfaz Grafica"),       /* Titulo de la ventana */
           WS_OVERLAPPEDWINDOW|WS_BORDER, /* Ventana por defecto */
           400,       /* Posicion de la ventana en el eje X (de izquierda a derecha) */
           70,       /* Posicion de la ventana, eje Y (arriba abajo) */
           488,                 /* Ancho de la ventana */
           388,                 /* Alto de la ventana */
           HWND_DESKTOP,
           NULL,                /* Sin menu */
           hThisInstance,
           NULL
           );
    ventana2 = CreateWindowEx (

           0,
           NombreClase,         /* Nombre de la clase */
           ("Ventana emergente"),       /* Titulo de la ventana */
           WS_OVERLAPPEDWINDOW|WS_BORDER, /* Ventana por defecto */
           400,       /* Posicion de la ventana en el eje X (de izquierda a derecha) */
           70,       /* Posicion de la ventana, eje Y (arriba abajo) */
           388,                 /* Ancho de la ventana */
           288,                 /* Alto de la ventana */
           HWND_DESKTOP,
           NULL,                /* Sin menu */
           hThisInstance,
           NULL
           );
    /* Hacemos que la ventana sea visible */
    ShowWindow (ventana1, nCmdShow);
    /* Hacemos que la ventan se ejecute hasta que se obtenga resturn 0 */
    while (GetMessage (&mensajecomunica, NULL, 0, 0))
    {
        /* Traduce mensajes virtual-key */
        TranslateMessage(&mensajecomunica);
        /* Envia mensajes a WindowProcedure */
        DispatchMessage(&mensajecomunica);
    }
    return mensajecomunica.wParam;
}
LRESULT CALLBACK WindowProcedure (HWND otro, UINT mensajecomunica, WPARAM wParam, LPARAM lParam)//tipos de datos
{
    switch (mensajecomunica) /* Manejamos los mensajes */
    {
             break;
        case WM_CLOSE:
            if(otro==ventana2){
                ShowWindow(ventana2,SW_HIDE);
            }else if(otro==ventana1){
            PostQuitMessage(0);
            }
            break;
            break;
        case WM_CREATE://cuando se crea la ventana se ejecuta ese comando
            button1 = CreateWindowEx(0,"button","Ventana",WS_VISIBLE|WS_CHILD|0,10,10,80,40,ventana1,(HMENU)bt1,0,0);
            button2 = CreateWindowEx(0,"button","Salir",WS_VISIBLE|WS_CHILD|0,10,60,80,40,ventana1,(HMENU)bt2,0,0);
            button3 = CreateWindowEx(0,"button","Accion",WS_VISIBLE|WS_CHILD|WS_DISABLED|0,90,10,80,40,ventana1,(HMENU)bt1,0,0);
            break;
        case WM_COMMAND: 
            if(wParam==bt2){
                PostQuitMessage(0);
            }else if(wParam==bt1){
                ShowWindow(ventana2,SW_SHOW);
            }
            break;
        default:  /* Tratamiento por defecto para mensajes que no especificamos */
            return DefWindowProc (otro, mensajecomunica, wParam, lParam);
    }
return 0;
}//me desvie del tema por un tutorial de youtube