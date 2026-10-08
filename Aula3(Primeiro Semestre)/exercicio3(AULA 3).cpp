#include<stdio.h>
#include<stdlib.h>
int main(){
	float numerador;
	float denominador;
	
	printf("escolha o numerador:  ");
	scanf("%f",&numerador);
	fflush(stdin);
    printf("\n escolha o denominador:  ");
	scanf("%f",&denominador);
	
	float divisao = numerador/denominador;
	if(denominador!=0){
		printf("\n O resultado da conta e %.2f",divisao);
	}
	else{
		printf("Nao existe divisao por zero");
	}
	
	
	
	
	return 0;
}