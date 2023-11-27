#ifndef carrito_h
#define carrito_h

#include "articulo.h"
#include "catalogo.h"
#include <vector>
#include <array>

using std:: vector;
using std::array;

class Carrito
{
    
    private:
    vector <Articulo> art_carrito;
    vector <int> cantidad_art;
    float precio_final = 0;
    
    public:
    void al_carrito( Articulo art, int cant);
    float calcular_precios(int i);
    float precio_total();
    void draw_carrito();

};


#endif