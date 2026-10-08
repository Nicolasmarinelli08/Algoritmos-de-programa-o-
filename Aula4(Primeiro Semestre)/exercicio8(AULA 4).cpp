#include<stdio.h>
#include<stdlib.h>
int main(){
	int valor;
	//ENTRADA
	printf("selecione um valor: ");
	scanf("%i",&valor);
	
	if(valor<=100){
		float desconto1= valor*0.05;
		printf("\nO valor do desconto sera de 5%% resultando em: %.2f",desconto1);
	}
		else if(valor>=100.01 && valor<500){
			float desconto2= valor*0.10;
	printf("\nO valor do desconto sera de 10%% resultando em: %.2f",desconto2);
}
		 else if (valor>=500){
	 float desconto3= valor*0.15;
	printf("o valor do seu desconto sera de 15%% resultando em: %.2f",desconto3);
}
	else{
		printf("Formato errado");
	}
	
	return 0;
	
	
}