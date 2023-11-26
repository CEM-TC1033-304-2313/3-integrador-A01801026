#include <iostream>
#include <string>
#include "articulo.h"
using std::string;
using std::stof; // a float
using std:: stoi; // a int
using std::cout;
using std::endl;



Articulo :: Articulo(string i, string n,  string p, string s)
{
    set_id(i);
    set_nombre(n);
    set_precio(p);
    set_stock(s);
}

void Articulo::set_id(string i)
{
    id = i;
}


void Articulo :: set_nombre (string n)
{
    nombre = n;
}

void Articulo :: set_precio(string p)
{
    precio = stof(p);
}

void Articulo :: set_stock (string s)
{
    stock = stoi(s);
}

string Articulo :: get_id()
{
    return id;
}
string Articulo :: get_nombre ()
{
    return nombre;
}

float Articulo :: get_precio ()
{
    return precio;
}

int Articulo :: get_stock ()
{
    return stock;
}

void Articulo :: draw_articulo()
{
    cout << id << " : " << nombre << " - - - " << precio << "$ - - - " << stock << endl;
}


