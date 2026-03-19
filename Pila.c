#include "Pila.h"
#include <stdio.h> 

Pila crearPila() {
    Pila p;
    p.tope = 0;  
    return p;
}

int isEmpty(Pila p) {
    return p.tope == 0; 
}

void push(Pila *p, int x) {
    if (p->tope < 100) {  
        p->lista[p->tope] = x;
        p->tope++;
    } else {
        printf("Error: La pila est� llena.\n");  
    }
}

int pop(Pila *p) {
    if (isEmpty(*p)) {
        printf("Error: La pila est� vac�a.\n");
        return -1;  
    } else {
        int aux = p->lista[p->tope - 1];
        p->tope--;
        return aux;
    }
}

int top(Pila pila) {
    if (isEmpty(pila)) {
        printf("Error: La pila est� vac�a.\n");
        return -1; 
    } else {
        return pila.lista[pila.tope - 1];
    }
}

