#include<stdio.h>
#include<stdlib.h>
int main(){
	float base, altura;
	//ENTRADA
	printf("Insira o valor da base:");
	scanf("%f",&base);
	fflush(stdin);
	printf("\n Insira o valor da altura:");
	scanf("%f",&altura);
	//PROCESSAMENTO
	float area= (base*altura)/2;
	
	//SAIDA
	printf("A area do triangulo eh: %.2f",area);
	
	return 0;
}