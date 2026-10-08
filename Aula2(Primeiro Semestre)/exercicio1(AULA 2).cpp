#include<stdio.h>
#include<stdlib.h>
	int main(){
	int x;
	//ENTRADA
		printf("Determine um valor de X");
		scanf("%i",&x);
		printf("X eh igual a:%i",x);
	//PROCESSAMENTO
	float multiplicacao = x * 2;
	//SAIDA
	printf("\n O dobro de x eh %.2f",multiplicacao);
	return 0;
	}