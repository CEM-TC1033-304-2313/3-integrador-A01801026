#include "articulo.h"
#include "catalogo.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>


using std::vector;
using std::string;
using std::ifstream;
using std::stringstream;
using std::to_string;
using std::cout;
using std::endl;


void Catalogo :: agregar_articulo(Articulo a)
{
    articulos.push_back(a);
}

int Catalogo :: size_catalogo()
{
    int s;
    s = articulos.size();
    return s;
}

void Catalogo :: busca_objetos()
{
    string linea;
    string id_ind;
    string nombre_ind;
    string precio_ind;
    string stock_ind;

    ifstream archivo;
    archivo.open ("C:/Users/jlrui/OneDrive/Documentos/GitHub/3-integrador-A01801026/inventario.csv");

    while (getline(archivo, linea)) // leer línea a línea
    {
        stringstream token(linea);
        
        getline(token, id_ind, ','); //toma todo antes de la coma
        getline (token, nombre_ind, ',');
        getline(token, precio_ind, ',');
        getline(token, stock_ind, ',');
        agregar_articulo( Articulo(id_ind, nombre_ind, precio_ind, stock_ind));
    }
    archivo.close();
    
}

void Catalogo :: actualizar_stock(int art, int pedido)
{
    int stock; 
    stock = articulos[art].get_stock();
    if (stock > pedido)
    {
        int s = (stock - pedido);
        articulos[art].set_stock(to_string(s));
    }
    
}

void Catalogo :: draw_catalogo()
{
    for (int i = 0; i < (articulos.size()); i++)
    {
        articulos[i].draw_articulo();
    }
}

