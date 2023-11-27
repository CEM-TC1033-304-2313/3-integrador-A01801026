#include <iostream>
#include "articulo.h"
#include "catalogo.h"
#include "carrito.h"
#include "tienda.h"
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;



int main ()
{
    Tienda tienda;
    int seleccion_menu = 0;

   
    do
    {
        tienda.display_menu();
        cin >> seleccion_menu;
        if (seleccion_menu == 1)
        {


            int end_while = -1;
            do 
            { 
                cout << "\033[2J\033[1;1H";
                int art;
                int cant;
                tienda.redireccionar_menu(1);
                cout << "Producto a comprar (0  para cancelar): ";
                cin >> art;
                cout << "Cantidad a comprar (0 para cancelar): ";
                cin >> cant;
                end_while = cant;
                tienda.modificar_stocks((art-1), cant);
                cout << "\033[2J\033[1;1H";
            } while (end_while != 0);
            continue;

        }
        if (seleccion_menu == 2)
        {
            string a_menu = "vacio";
            tienda.redireccionar_menu(2);
            while (a_menu != "si")
            {
                cout << "¿Regresar a menu? (Ingresar si): ";
                cin >> a_menu;
                cout << "\033[2J\033[1;1H";
            }
            continue;
        }
        if (seleccion_menu == 3)
        {
            tienda.redireccionar_menu(3);
            break;
        }

    } while ( seleccion_menu != 4 );
}
    




