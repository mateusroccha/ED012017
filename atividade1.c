/*Universidade de Brasília
Nome: Mateus Rocha Da Silva
Matrícula: 16/0015031*/

#include <stdio.h>


int main(){
	int i;
	float v[10];
	printf("Informe 10 valores:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7], &v[8], &v[9]);

	for(i=0;i<10;i++){
		scanf("%f", &v[i]);
	}
	for (i=0;i<10;++i){
		printf("v[%d] = %f\n",i, v[i]);
	}

	return 0;
}
