#ifndef tienda_h
#define tiena_h

#include "carrito.h"
#include "catalogo.h"

class Tienda
{
    private:
    Catalogo catalogo;
    Carrito Carrito_de_compras;

    public:
    void display_menu();
    void redireccionar_menu(int i);
    void modificar_stocks (int art, int cant);
    void actualizar_tienda(int art, int cant);
    void finalizar_compra();
};

#endif