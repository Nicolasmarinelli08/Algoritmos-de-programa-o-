#include<stdio.h>
#include<stdlib.h>
int main(){
	int vetor[8];
	int i;
	printf("Selecione 8 numeros:  ");
	
	for( i=0; i<8;i++){
		scanf("%d",&vetor[i]);
}
	while(i<8){
		printf("\nSelecione um vetor que quer ver:  ");
		scanf("\n%d", &i);
		printf("\nO numero no vetor e %d\n", vetor[i]);
		system("\npause");
		i++;
	}
	
	return 0;
}