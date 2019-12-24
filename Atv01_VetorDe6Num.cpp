#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){

	setlocale(LC_ALL, "portuguese");

	int i, vetor[6] = {1, 0, 5, -2, -5, 7};
	
	printf("\tVetor:");
	for(i=0; i<6; i++){
		printf("\t%d", vetor[i]);
	}
	
	printf("\n\n\tSoma: %d", vetor[0]+vetor[1]+vetor[5]);
	vetor[4] = 100;
	printf("\n\tPosição 4 = %d\n\n", vetor[4]);
	
	printf("\tVetor Modificado:");
	for(i=0; i<6; i++){
		printf("\t%d", vetor[i]);
	}
}
