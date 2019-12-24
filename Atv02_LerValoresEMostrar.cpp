#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");

	int A[6], i, a=1, b=1;
	
	for(i=0; i<6; i++){
	printf("Entre com o valor %d:  ", a);
	scanf("%d", &A[i]);
	a++;
	}
	printf("\nValor: ");
	for(i=0; i<6; i++){
	printf("\nPosição %d: [%d]", b, A[i]);
	b++;
	}

}
