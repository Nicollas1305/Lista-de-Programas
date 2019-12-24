#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){

	setlocale(LC_ALL, "portuguese");

	int A[6], i, b, v=1, aux;
	
	for(i=0; i<6; i++){
		printf("Entre com o valor  %d:  ", v);
		scanf("%d", &A[i]);
		while(A[i] % 2 == 0){
			printf("\nÉ necessário que o número seja par... DIGITE NOVAMENTE: ");
			scanf("%d",&A[i]);
		}
		v++;	
	}
	printf("\nValor: ");
	for(b=5; b>=0; b--){
		printf("[%d] ", A[b]);
	}
	
}
