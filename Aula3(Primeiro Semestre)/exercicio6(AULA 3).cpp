#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1;
	float num2;
	
	printf("selecione o primeiro numero:  ");
	scanf("%f",&num1);
	fflush(stdin);
	printf("\n escolha o segundo numero:  ");
	scanf("%f",&num2);
	
	 if(num1>num2){
	    printf("Maior numero: %.2f \n menor numero: %.2f",num1, num2);}
	    
		if(num1<num2){
	 	printf("Maior numero: %.2f \n Menor numero: %.2f",num2,num1);
	 }

	
	return 0;
}