/*Universidade de Brasília
Nome: Mateus Rocha Da Silva
Matrícula: 16/0015031*/


#include <stdio.h>
int main () {

    int tam_vet = lerTam();

    int *ptr_vet = aloc_vetor();

    ler_val (ptr_vet, tam_vet);

    media_imp (ptr_vet, tam_vet);

    free(ptr_vet);

int ler_tam () {
    int tam_vet;

    do {
        printf("Informe o tamanho do vetor:\n");
        scanf("%d", &tam_vet);

        if (tam_vet <= 0 || tam_vet > 20) {
        printf("Tamanho acima do permitido!\n");
        }
    }while (tam_vet <= 0 || tam_vet > 20);
    return tam_vet;
}

int *aloc_vetor () {

    int *ptr_vet = (int*) malloc (20 * sizeof(int));
int main () {

    int tam_vet = lerTam();

    int *ptr_vet = aloc_vetor();

    ler_val (ptr_vet, tam_vet);

    media_imp (ptr_vet, tam_vet);

    free(ptr_vet);
    return  ptr_vet;
}

void ler_val (int *ptr_vet, int tam_vet) {
    for (int i=0; i<tam_vet; i++) {
        printf("Informe o valor [%d]: ", i+1);
        scanf("%d", &ptr_vet[i]);
    }
}

void media_imp(int *ptr_vet, int tam_vet) {
    int soma=0;
    float media;

    for(int i=0; i<tam_vet; i++) {
    soma = soma + ptr_vet[i];
    }
    media = soma / tam_vet;

    printf("Ah media eh: %.2f", media);
}
    return 0;
}
