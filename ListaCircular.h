

#ifndef LISTASEDD_LISTACIRCULAR_H
#define LISTASEDD_LISTACIRCULAR_H
#include "NodoCircular.h"

class ListaCircular {
private:
    NodoCircular *primero;
public:
    ListaCircular();
    void insertar(int dato);
    void mostrar();
    ~ListaCircular();
};


#endif //LISTAS_LISTACIRCULAR_H
