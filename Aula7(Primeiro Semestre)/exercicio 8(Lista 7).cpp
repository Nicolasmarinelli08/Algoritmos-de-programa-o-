#include<stdio.h>
#include<stdlib.h>
int main(){
	int vetor[5];
	int i, soma=0;
	
	printf("\nEscolha o valor do vetor\n ");
	
	for(i=0; i<5; i++){
		scanf("%d", &vetor[i]);
	if(vetor[i]<0){
		printf("NUMERO INVALIDO!!");
	}
}
	
	printf("\nVetor preenchido:\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", vetor[i]);
}
	printf("\nSoma dos numeros impares: ");
	for(i=0; i<5; i++){
		if(vetor[i]%2!=0){
			soma+=vetor[i];
		}
	}
		printf("Soma: %d\n", soma);
	
	
	
	return 0;
}