#include<stdio.h>
#include<stdlib.h>
int main(){
	int valor;
	
	printf("selecione um valor: ");
	scanf("%i",&valor);
	
	if(valor%3==0 && valor%5==0){
		printf("Voce tem um numero multiplo de tres e de cinco!!!!!");
}
	
		else if(valor%5==0){
		printf("Voce tem um numero multiplo de cinco!!");
	}
		else if(valor%3==0){
		printf("Voce tem um numero multiplo de tres!!");
	}
	else{
	printf("%i nao e multiplo nem de 3 nem de 5");
}
	
	return 0;
}