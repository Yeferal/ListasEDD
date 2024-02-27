#include "ListaSimple.h"
#include <iostream>
#include <string>
using namespace std;


ListaSimple::ListaSimple() {
    primero = nullptr;
}

void ListaSimple::insertar(int val) {
    NodoSimple *nuevoNodo = new NodoSimple(val);
    //Verificamos que la lista no este vacia
    if (primero == nullptr){
        primero = nuevoNodo;
        return;
    }
    // Si no esta vacia entonces tenemos que encontrar el ultimo nodo
    NodoSimple *temp = primero;
    while (temp->siguiente != nullptr){
        //Siguiente del temporal
        temp = temp->siguiente;
    }
    temp->siguiente = nuevoNodo;
}

void ListaSimple::mostrar() {
    NodoSimple *temp = primero;
    while (temp != nullptr){
        cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    cout << endl;
}

//Destructor
ListaSimple::~ListaSimple() {
    NodoSimple * temp = primero;
    while (temp != nullptr){
        NodoSimple *nodoSiguiente = temp->siguiente;
        delete temp;
        temp = nodoSiguiente;
    }
}