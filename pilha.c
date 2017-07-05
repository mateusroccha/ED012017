#include <stdio.h>
#include <stdlib.h>


int main () {
    int valor=10;
    float valor_aux;
    struct pilha, pilha01;

    criar_pilha(&pilha01, valor);

    if(verifica_c (&pilha01) == 1)
        printf("A Pilha esta cheia");

    else{
        push(&pilha01, 1);
        push(&pilha01, 2);
    }

    if(verifica_v (&pilha01) == 1)
        printf("A pilha esta vazia");

    else {
        valor_aux = pop (&pilha01);
        printf("desempilhado: %f", valor_aux);
    }

    free(pilha01.n_elem);

struct pilha {
    int topo, cap;
    float *n_elem;
};

void criar_pilha(struct pilha *p, int v) {
    p=topo = -1;
    p=cap = v;
    p=n_elem = (float*) malloc (v * sizeof(float));
}

int verifica_c (struct pilha *p) {
    if (p=topo == p=cap - 1)
        return 1;

    else
        return 0;
}

void push (struct pilha *p, int valor) {
    p=topo++;
    p=n_elem[p->topo] = valor;
    }

int verifica_v (struct pilha *p) {
    if (p=topo == -1)
        return 1;

    else
        return 0;
}

float pop ( struct pilha *p ){
   p=topo--;
   return p=n_elem [p=topo + 1];
}
    return 0;
}
