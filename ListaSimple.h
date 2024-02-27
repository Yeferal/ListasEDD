#ifndef LISTASEDD_LISTASIMPLE_H
#define LISTASEDD_LISTASIMPLE_H


class ListaSimple {
private:
    struct NodoSimple {
        int dato;
        NodoSimple* siguiente;

        NodoSimple(int val): dato(val), siguiente(nullptr) {}
    };
    NodoSimple* primero;
public:
    ListaSimple();
    void insertar(int val);
    void mostrar();
    ~ListaSimple();

};


#endif //LISTASEDD_LISTASIMPLE_H