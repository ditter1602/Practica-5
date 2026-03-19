#include <stdio.h>
#include "Pila.h"
#include "Cola.h"



void printMenuPila(Pila p){
    int op;
    printf("elige una opción [1-4]\n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. buscar\n");
    printf("4. mostrar pila\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        int v;
        printf("que valor vas a meter?\n");
        scanf("%d", &v);
        push(&p, v);
        break;
    case 2:
        printf("pop = %d\n", pop(&p));
        break;
    case 3:
        int valor;
        printf("que valor quieres buscar?\n");
        break;
    case 4:
        /* code */
        break;
    default:
        break;
    }
}

void printMenuCola(Cola c){
    int op;
    printf("elige una opción [1-4]\n");
    printf("1. encolar\n");
    printf("2. desencolar\n");
    printf("3. buscar\n");
    printf("4. mostrar cola\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    default:
        break;
    }
}

int main(){
    int op;
    Pila pila = crearPila();
    Cola cola = crearCola();
    printf("\nelige una opcion [1 o 2]\n");
    printf("1. pila\n");
    printf("2. cola\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printMenuPila(pila);
        break;
    case 2:
        printMenuCola(cola);
        break;
    default:
        break;
    }
}
