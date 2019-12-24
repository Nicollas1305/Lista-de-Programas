#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<math.h>

main(){
	
	float np1[15], np2[15], media[15];
	char nome[15][30],nome2[15][30], situacao[15][10];
	int x,z=1;
	 
	for(x=0;x<15;x++){
		printf("\nInforme nome do aluno %d: ",x+1);
	 	gets(nome[x]);
	 	printf("Informe nota %d do aluno %s: ",z,nome[x]);
	 	scanf("%f",&np1[x]);
	 	gets(nome2[x]);
	 	z++;
	 	printf("Informe nota %d do aluno %s: ",z,nome[x]);
	 	scanf("%f",&np2[x]);
	 	gets(nome2[x]);
	 	z=1;
	 }
	 for(x=0;x<15;x++){
	 	media[x]=(np1[x]+np2[x])/2;
	 	if(media[x]>7)
	 	strcpy(situacao[x],"Aprovado");
	 	else
	 	strcpy(situacao[x],"Reprovado");
	}
	printf("*****************************************");
	printf("\n\nNome\tNota1\tNota2\tMedia\tSituacao");
	printf("\n***************************************");
	
	for(x=0;x<15;x++){
	 	printf("\n%s\t%3.2f\t%3.2f\t%3.2f\t%s",nome[x],np1[x],np2[x],media[x],situacao[x]);
	}
	 
	 printf("\n*************************************");
	 printf("\n\n");
	 system("pause");
	 return(0);
} 
