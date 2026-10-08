#include<stdio.h>
#include<stdlib.h>
int main(){
	float x;
	//ENTRADA
	printf("o Ano que ela nasceu foi:");
	scanf("\n%f",&x);
	printf("\n Ano dela:%2.f",x);
	//PROCESSAMENTO
	float idade = (2026-x)*365;
	//SAIDA
	printf("\nela tem:\n%.2f dias de vida",idade);
	
	
	return 0;
}