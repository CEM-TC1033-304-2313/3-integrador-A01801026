#ifndef catalogo_h
#define catalogo_h
#include <vector>
#include "articulo.h"
using std::vector;

class Catalogo
{
    private:
    vector <Articulo> articulos;

    public:
    Catalogo();
    int size_catalogo();
    Articulo get_articulo(int i);
    int in_stock(int art, int cant);
    void agregar_articulo( Articulo a );
    void actualizar_stock(int art, int pedido);
    void draw_catalogo();

};

#endif