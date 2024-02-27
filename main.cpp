#include <iostream>
#include <string>
using namespace std;

#include "ListaSimple.h"
#include "ListaCircular.h"


int main() {
    cout << "Lista Enlazadas Simple." << endl;
    ListaSimple listaSimple;
    listaSimple.insertar(10);
    listaSimple.insertar(20);
    listaSimple.insertar(30);
    listaSimple.mostrar();

    cout << "\nLista Enlazadas Circular." << endl;
    ListaCircular listaCircular;
    listaCircular.mostrar();
    listaCircular.insertar(2);
    listaCircular.insertar(3);
    listaCircular.insertar(5);
    listaCircular.mostrar();
    return 0;
}