#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){

	setlocale(LC_ALL, "portuguese");

	int A[5], i, v=1, maior=0, menor=1000, med;
	
	for(i=0; i<5; i++){
		printf("Entre com o valor %d:  ", v);
		scanf("%d", &A[i]);	
		v++;	
	}
	for(i=0; i<5; i++){
		if(menor>A[i]){
			menor = A[i];
		}
		if(maior<A[i]){
			maior = A[i];
		}
	}
	printf("\nVetor: ");
	for(i=0; i<5; i++){
		printf("[%d] ", A[i]);
	}
	med = (A[0]+A[1]+A[2]+A[3]+A[4])/5;
	
	printf("\n\nO menor valor é:  %d", menor);
	printf("\nO maior valor é:  %d", maior);
	
	printf("\n\nMédia:  %d", med);
	
}
	
