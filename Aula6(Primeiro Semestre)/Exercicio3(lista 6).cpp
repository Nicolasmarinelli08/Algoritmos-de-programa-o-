#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1,num2;
	float media;
	
	do{
		
		printf("\nColoque a nota UM:  ",num1);
		scanf("%f",&num1);
		fflush(stdin);
		
		if(num1<0 || num1>10){
			printf("###VALOR INVALIDO###");	
		}
	} while (num1<0 || num1>10);
	
	do{
		printf("\nColoque a nota DOIS:  ",num2);
		scanf("%f",&num2);
		fflush(stdin);
		
	if(num2<0 || num2>10){
		printf("###VALOR INVALIDO###");
		}
	}while (num2<0 || num2>10);
		
	media=(num1+num2)/2;
	printf("SUA MEDIA FOI %.2f",media);
	
	return 0;
}