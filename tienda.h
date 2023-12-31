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
    Tienda ();
    void display_menu();
    void activar_tienda();
    void menu_opt1();
    void menu_opt2();
    void menu_opt3();
    void modificar_stocks (int art, int cant);
    void actualizar_tienda(int art, int cant);
    void finalizar_compra();
};

#endif