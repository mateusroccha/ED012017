#include <stdio.h>
#include <stdlib.h>

int main () {
    list* l = cria_list();

    insereLista(l, 1); insereLista(l, 2);
    insereLista(l, 3);insereLista(l, 4);
    insereLista(l, 5);insereLista(l, 6);
    insereLista(l, 7);insereLista(l, 8);
    insereLista(l, 9);insereLista(l, 10);
    imprime_lista(l);

typedef struct lista list;
typedef struct listano listNo;

struct list {
    listNo* prim;
};

struct listano {
    int val;
    listNo* proxi;
};

list* cria_list () {
    list* l = (list*) malloc(sizeof(list));
    l->prim = NULL;
    return l;
}

void insere_list (list* l, int v) {
    listNo* novo = (listNo*) malloc (sizeof(listNo));
    novo->val = v;
    novo->prox = l->prim;
    l->prim = novo;
}

void imprime_list (list* l) {
    for (listNo* p=l->prim; p!=NULL; p=p->proxi)
        printf("O Valor eh= %d\n", p->val);
}
    return 0;
}
