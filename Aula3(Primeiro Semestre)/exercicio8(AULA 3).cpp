#include<stdio.h>
#include<stdlib.h>
int main(){
	float minutos;
	float valor=50;
	
	printf("Minutos utilizados:");
	scanf("%f",&minutos);

	if(minutos>50){
		valor= 50 +(minutos-50)*1.5;
		printf("valor calculado sera: %.2f",valor);		
	}
	else{
	valor=50;
	printf("\n O valor foi de %.2f",valor);
}
	
	return 0;
}
