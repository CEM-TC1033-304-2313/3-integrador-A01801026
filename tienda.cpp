#include <iostream>

#include "carrito.h"
#include "catalogo.h"
#include "tienda.h"


using std::cout;
using std::cin;
using std::endl;


Tienda :: Tienda()
{
    activar_tienda();
}

void Tienda :: display_menu()
{
    cout << "- - - - - - MENU PRINCIPAL - - - - - - " << endl << endl;
    cout << " 1) Seleccionar Productos" << endl << endl;
    cout << " 2) Ver Carrito de Compras" << endl << endl;
    cout << " 3) Terminar Compra " << endl << endl;
    cout << " 4) Salir " << endl << endl;
    cout << "Selecciona alguna opción: ";
}

void Tienda :: activar_tienda()
{
    int seleccion_menu = 0;
    do
    {
        display_menu();
        cin >> seleccion_menu;

        if (seleccion_menu == 1)
        {
            menu_opt1();
            continue;

        }

        if (seleccion_menu == 2)
        {
            menu_opt2();
            continue;
        
        }

        if (seleccion_menu == 3)
        {
            menu_opt3();
            break;
        }

    } while ( seleccion_menu != 4 );
}


void Tienda :: menu_opt1()
{
    int end_while = -1;
    do 
    {
        cout << " - - - - - - Seleccionar Producto - - - - - - " << endl << endl;
        catalogo.draw_catalogo();
        cout << endl; 
        int art;
        int cant;
        cout << "Producto a comprar (0 para cancelar): ";
        cin >> art; 
        cout << "Cantidad a comprar (0 para cancelar): ";
        cin >> cant;
        end_while = cant;
        cout << "\033[2J\033[1;1H";
        modificar_stocks((art-1), cant);
        if ((art == 0) || (cant == 0))
        {
            end_while = 0 ;
        }
    } while (end_while != 0);
}


void Tienda :: menu_opt2()
{
    cout << "\033[2J\033[1;1H";
    string a_menu = "vacio";
    cout << " - - - - Carrito de Compras - - - - " << endl << endl;
    Carrito_de_compras.draw_carrito();

    while (a_menu != "si")
    {
        cout << "¿Regresar a menu? (Ingresar si): ";
        cin >> a_menu;
    }
    cout << "\033[2J\033[1;1H";
}


void Tienda :: menu_opt3()
{
    finalizar_compra();
}

void Tienda :: modificar_stocks(int art, int cant)
{
    if (cant != 0)
    {
        if (catalogo.in_stock( art, cant) == 0)
        {
            actualizar_tienda(art, cant);
        }
        else 
        {
            cout << " | No hay suficiente stock, escoga otros valores | " << endl << endl;
        }    
    }
   
}

void Tienda :: actualizar_tienda(int art, int cant)
{
    catalogo.actualizar_stock(art, cant);
    Carrito_de_compras.al_carrito(catalogo.get_articulo(art), cant);
}


void Tienda :: finalizar_compra()
{
    cout << endl << endl << "El Total de su compra es: " << Carrito_de_compras.precio_total() << " $" << endl << endl;
    cout << "Muchas gracias por su preferencia en La Tienda Joaquín" << endl << endl << endl;
}


    