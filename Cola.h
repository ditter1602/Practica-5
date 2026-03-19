#ifndef COLA_H   
#define COLA_H   

struct Cola {
    int primero;
    int ultimo;
    int lista[100];
};

typedef struct Cola Cola;

Cola crearCola();
int isEmpty2(Cola);
void encolar(Cola*, int);
int desencolar(Cola*);
int first(Cola);
void printCola(Cola);
void buscarenCola(Cola,int);

#endif 
 