
#include "ListaCircular.h"
#include "NodoCircular.h"
#include <iostream>
#include <string>
using namespace std;

ListaCircular::ListaCircular() {
    primero = nullptr;
}

void ListaCircular::insertar(int dato) {
    NodoCircular *nuevoNodo = new NodoCircular(dato);
    if (primero == nullptr){
        primero = nuevoNodo;
        primero->siguiente = primero;
        return;
    }
    NodoCircular *temp = primero;
    while (temp->siguiente != primero){
        temp = temp->siguiente;
    }
    temp->siguiente= nuevoNodo;
    nuevoNodo->siguiente = primero;
}

void ListaCircular::mostrar() {
    if (primero == nullptr){
        cout << "Lista vacía." << endl;
        return;
    }
    NodoCircular *temp = primero;
    do {
        cout << temp->dato << " ";
        temp = temp->siguiente;
    } while (temp != primero);
    cout << endl;
}

ListaCircular::~ListaCircular() {
    if (primero == nullptr){
        return;
    }
    NodoCircular *actual = primero;
    do {
        NodoCircular *siguienteNodo = actual->siguiente;
        delete actual;
        actual = siguienteNodo;
    } while (actual != primero);
}
