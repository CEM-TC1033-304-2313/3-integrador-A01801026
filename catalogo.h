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
    int size_catalogo();
    void busca_objetos ();
    void agregar_articulo( Articulo a );
    void actualizar_stock(int art, int pedido);
    void draw_catalogo();

};

#endif