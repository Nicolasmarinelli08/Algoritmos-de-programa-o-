#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1,num2,num3;
	printf("Determine o primeiro numero: ");
	scanf("%i",&num1);
	 	
	printf("Determine o segundo numero: ");
	scanf("%i",&num2);
	
	printf("Determine o terceiro numero: ");
	scanf("%i",&num3);
	
	if (num1!=num2 && num1!=num3 && num2!=num1 &&num2!=num3 && num3!=num1 && num3!=num2){
		printf("\nOs seu numeros sao %i, %i e %i",num1,num2,num3);
	}
		else if(num1==num2){
			printf("O numero %i e %i estao iguais", num1, num2);
		}
			else if(num1==num3){
			printf("O numero %i e %i estao iguais", num1, num3);
		
		}
			else{
			printf("O numero %i e %i estao iguais", num2, num3);
		
		}
		
		
			
		
	return 0;
}