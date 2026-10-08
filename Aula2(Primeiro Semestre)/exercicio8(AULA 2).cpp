#include<stdio.h>
#include<stdlib.h>
#define Pi 3.1415
int main(){
	float raio;
	//ENTRADA
	printf("Defina o raio da circunferencia:");
	scanf("%f",&raio);
     printf("\n O raio da circunferencia eh: %.2f",raio);
     //PROCESSAMENTO
     float PI= 3.14;
     float perimetro = 2* PI * raio;
     //SAIDA
	printf("\n o valor do perimetro eh: %.2f",perimetro);
	
	
	return 0;
}