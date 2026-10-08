#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1;
	float num2;
	printf("Selecione um numero:  ");
	scanf("%f",&num1);
	fflush(stdin);
	printf("\n selecione um segundo numero:  ");
	scanf("%f",&num2);
	if(num1>num2){
		printf(" O maior numero e %f",num1);
	}
	else{
		printf("o maior numero e %f",num2);
	}
	
	
	
	
	return 0;
}