#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float peso, altura;
	
	printf("Determine o seu peso:  ");
	scanf("%f",&peso);
		fflush(stdin);
	printf("\nDetermine sua altura:  ");
	scanf("%f",&altura);
	
	float imc = peso/pow(altura,altura);
	if(imc<=18.4){
		printf("Magro, seu IMC eh de %.2f",imc);
	}
    else if(imc>=18.5 && imc<25.0){
    	printf("Peso saudavel o IMC eh %.2f",imc);
	}
		else if(imc>=25.0 && imc<30.0){
		printf("Sobrepeso, o IMC eh %.2f",imc);
	}
		else if(imc>=30.0 && imc<35.0){
		printf("obesidade grau 1, o IMC eh %.2f",imc);
	}
		else if(imc>=35.0 && imc<40.0){
		printf("Obesidade grau 2,severa!!, O IMC eh %.2f",imc);
	}
	else{
	printf("Obesidade grau 3, Morbida!!, O IMC eh %.2f",imc);
	}
	
	
	
	
	return 0;                                           
}