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

void printCola(Cola cola){
    if(isEmpty2(cola)){
        printf("error, cola vacía");
        return;
    }else{
        for(int i = cola.primero; i < cola.ultimo + 1; i++){
            printf("elemento %d: %d\n", i+1-cola.primero, cola.lista[i]);
        }
    }
}

void buscarenCola(Cola cola, int valor){
    int found = 0;

    for(int i = 0; i < cola.ultimo + 1; i++){
        if (valor == cola.lista[i])
        {
            found = 1;
            printf("%d está en la posición %d de la cola\n", valor, i+1);
            return;
        }
    }
    if (found == 0)
    {
        printf("no se pudo encontrar\n");
        return;
    }
    
}