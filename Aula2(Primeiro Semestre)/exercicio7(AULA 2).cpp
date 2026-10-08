#include<stdio.h>
#include<stdlib.h>
int main(){
	float x;
	//ENTRADA
	printf("Valor em Fahrenheit ");
	scanf("%f",&x);
	printf("\n Valor de Fahrenheit: %.2f",x);
	printf("\n \n \n");
	printf("\n Clique em qualquer tecla para ver a conversao para Celcius");
	printf("\n \n \n");
	system("pause");
	//PROCESSAMENTO
	float celcius = (x-32)/18;
	   		
	//SAIDA
	printf("\nValor convertido de F para C: %.2f",celcius);
	
	return 0;
}