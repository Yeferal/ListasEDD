
CPP = g++
TARGET = programa

# all
all: .all-post

.all-post: ListaSimple.o NodoCircular.o ListaCircular.o main.o
	$(CPP) ListaSimple.o NodoCircular.o ListaCircular.o main.o -o $(TARGET)

	
ListaSimple.o: ListaSimple.cpp ListaSimple.h
	$(CPP) -c ListaSimple.cpp

ListaCircular.o: ListaCircular.cpp ListaCircular.h
	$(CPP) -c ListaCircular.cpp

NodoCircular.o: NodoCircular.cpp NodoCircular.h
	$(CPP) -c NodoCircular.cpp

main.o:  
	$(CPP) -c main.cpp


# clean
clean:
	rm -f *.o $(TARGET)
