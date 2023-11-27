#include <iostream>
#include "carrito.h"
#include "catalogo.h"
#include "articulo.h"
#include <string>
#include <array>

using std::to_string;
using std::cout;
using std:: endl;


void Carrito :: al_carrito(Articulo art, int cant)
{
    int contador = 0;
    for (int i = 0; i < (art_carrito.size()); i++ )
    {
        if (art.get_id() == art_carrito[i].get_id())
        {
            cantidad_art[i] = cantidad_art[i] + cant;
            
            contador = 1;
        }
    }

    if (contador == 0)
    {
        art_carrito.push_back(art);
        cantidad_art.push_back(cant);
    }   
}

float Carrito :: calcular_precios( int i )
{
    float precio;
    precio = (art_carrito[i].get_precio()) * cantidad_art[i];
    return precio; 
}

float Carrito :: precio_total()
{
    for (int i = 0; i < (art_carrito.size()); i ++)
    {
        precio_final = precio_final + calcular_precios(i);
    }
    return precio_final;
}


void Carrito :: draw_carrito()
{
    for (int i = 0; i < (art_carrito.size()); i++)
    {
        cout << art_carrito[i].get_nombre() << " - - - " << cantidad_art[i] << " piezas - - - " << calcular_precios(i) << "$ "<< endl;
    }
}


