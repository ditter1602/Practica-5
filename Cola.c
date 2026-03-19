#include "Cola.h"
#include <stdio.h>

Cola crearCola() {
    Cola c;
    c.primero = 0; 
    c.ultimo = -1; 
    return c;
}

int isEmpty2(Cola c) {
    return c.primero > c.ultimo;
}

void encolar(Cola *c, int x) {
    if (c->ultimo < 99) { 
        c->ultimo++;
        c->lista[c->ultimo] = x;
    } else {
        printf("Error: La estructura está completa. \n");
    }
}

int desencolar(Cola *c) {
    if (isEmpty2(*c)) {
        printf("Error: La cola está vacía.\n");
        return -1; 
    } else {
        int aux = c->lista[c->primero];
        c->primero++;
        if (isEmpty2(*c)) {
            *c = crearCola();
        }
        return aux;
    }
}

int first(Cola c) {
    if (!isEmpty2(c)) {
        return c.lista[c.primero];
    } else {
        printf("Error: La cola está vacía.\n");
        return -1;
    }
}
