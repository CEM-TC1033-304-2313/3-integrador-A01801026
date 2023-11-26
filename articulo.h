#ifndef articulo_h
#define articulo_h
#include <string>
using std :: string;


class Articulo
{
    private:
    string id;
    string nombre;
    float precio;
    int stock;

    public:
    Articulo(string i, string n, string p, string s);
    void set_id (string i);
    void set_nombre (string n);
    void set_precio (string p);
    void set_stock (string s);
    
    string get_id();
    string get_nombre ();
    float get_precio ();
    int get_stock ();

    void draw_articulo();
};

#endif
