#ifndef PILA_H   
#define PILA_H     

struct Pila {
    int tope;
    int lista[100];
};

typedef struct Pila Pila;

Pila crearPila();
int isEmpty(Pila);
void push(Pila*, int);
int pop(Pila*);
int top(Pila);
void printPila(Pila);
void buscarenPila(Pila, int);

#endif 
