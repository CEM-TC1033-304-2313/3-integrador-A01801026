#include <iostream>

#include "carrito.h"
#include "catalogo.h"
#include "tienda.h"


using std::cout;
using std::cin;
using std::endl;


void Tienda :: display_menu()
{
    cout << "- - - - - - MENU PRINCIPAL - - - - - - " << endl << endl;
    cout << " 1) Seleccionar Productos" << endl << endl;
    cout << " 2) Ver Carrito de Compras" << endl << endl;
    cout << " 3) Terminar Compra " << endl << endl;
    cout << " 4) Salir " << endl << endl;
    cout << "Selecciona alguna opción: ";
}

void Tienda :: redireccionar_menu(int i)
{
    if (i == 1)
    {
        cout << " - - - - - - Seleccionar Producto - - - - - - " << endl << endl;
        catalogo.draw_catalogo();
        cout << endl;
    }
    
    if ( i == 2)
    {
        cout << " - - - - Carrito de Compras - - - - " << endl;
        Carrito_de_compras.draw_carrito();
    }
    
    if (i == 3)
    {
        finalizar_compra();
    }
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
            cout << "No hay suficiente stock, escoga otros valores" << endl;
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
    cout << endl << "El Total de su compra es: " << Carrito_de_compras.precio_total() << " $" << endl <<endl;
    cout << "Muchas gracias por su preferencia en La Tienda Joaquín" << endl;
}
