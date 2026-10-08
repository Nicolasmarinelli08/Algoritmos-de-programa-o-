#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1,num2,num3;
	
	printf("Digite um numero:  ");
	scanf("%i",&num1);
	printf("Digite outro numero:  ");
	scanf("%i",&num2);
	printf("E digite o ultimo numero:  ");
	scanf("%i",&num3);
	
	if (num1 > num2 && num1 >num3){
		printf("O numero %i e o maior",num1);
	}
		else if (num2 > num1 && num2 >num3){
		printf("O numero %i e o maior",num2);
		}
		if (num3 > num1 && num3 >num1){
		printf("O numero %i e o maior",num3);
		}
		
		
		
			return 0;
	

}