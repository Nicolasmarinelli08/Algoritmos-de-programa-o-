#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1;
	
	printf("Digite um numero:   ");
	scanf("%i",&num1);
	
	if (num1>0){	
	printf("Seu numero e positivo");
	}
	else if(num1<0){
		printf("numero negativo");
	}
	else{
		printf("numero nulo");
	}
	
	return 0;
}