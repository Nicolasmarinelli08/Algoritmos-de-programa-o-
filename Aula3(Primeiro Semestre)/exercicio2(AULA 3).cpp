#include<stdio.h>
#include<stdlib.h>
int main (){
	int num;
	printf("digite um numero");
	scanf("%i",&num);
	
	if(num>=0 && num<=9){
	printf("Numero valido");
	}
		
	else {
		printf("numero invalido");
	}
	
	
	return 0;
}