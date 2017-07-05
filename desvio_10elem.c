/*Universidade de Brasília
Nome: Mateus Rocha Da Silva
Matrícula: 16/0015031*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float medias=0,media=0,conj=0,n[10],desv,soma,vari;
    int posicao=0;

    printf("Digite o numero de elementos do conjunto: ");
    scanf("%f",&conj);
    	if (conj<=10)
    	{
        	for(posicao=1;posicao<=conj;posicao++)
        	{
            	printf("Digite o elemento %d do conjunto: ", posicao);
            	scanf("%f", &n[posicao]);
            	medias=medias+n[posicao];
            	media=medias/conj;
         	}
        	for(posicao=1;posicao<=conj;posicao++)
        	{
        	soma+=(n[posicao]-media)*(n[posicao]-media);
        	}
        	vari=soma/conj;
	   	desv=sqrt(vari);
        printf("A media do conjunto eh = %f\n", media);
        printf("A variancia do conjunto eh  = %f\n", vari);
        printf("O desvio padrao eh =  %f\n", desv);
	float elem, desv2;
                printf("Informe o desvio de um elemento do conjunto:\n");
                scanf("%f", &elem);
                desv2=elem-media;
                printf("O desvio do elemento eh = %f\n", desv2);
	}
   	else  printf("O numero dos elementos nao pode ser maior que 10\n ");
return 0;
}
