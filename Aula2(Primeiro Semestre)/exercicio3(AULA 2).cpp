#include<stdio.h>
#include<stdlib.h>
int main(){
	float x;
	//ENTRADA
	printf("\no valor em metro eh:");
	scanf("%f",&x);
	//PROCESSAMENTO
	printf("\n%.2f",x);
	float centimetros = x*100;
	//SAIDA
	printf("\nEm centimetros eh %.2f",centimetros);
				
		return 0;
}