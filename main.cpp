#include <iostream>
#include <string>
#include <vector>
#include "articulo.h"
#include "catalogo.h"
#include "carrito.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

using std:: to_string;


int main ()
{
    Catalogo catalogo;
    catalogo.busca_objetos();

    catalogo.draw_catalogo();

    Carrito carrito_de_compras;
    
    Articulo cosa1 ("00", "cosa1", "13.5", "40");

    Articulo cosa2 ("01", "cosa2", "15.3", "80");

    Articulo cosa3 ("02", "cosa3", "300", "20");

    carrito_de_compras.al_carrito(cosa1, 18);
    carrito_de_compras.al_carrito(cosa2, 40);
    carrito_de_compras.al_carrito(cosa3, 19);
    carrito_de_compras.al_carrito(cosa3, 1);

    carrito_de_compras.draw_carrito();

    carrito_de_compras.finalizar_compra();
    

}
