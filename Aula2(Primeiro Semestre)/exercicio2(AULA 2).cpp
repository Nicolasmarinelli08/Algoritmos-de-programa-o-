#include<stdio.h>
#include<stdlib.h>
	int main(){
		float x,y;
		//ENTRADA
	printf("\n Este programa recebe 2 valores e mostra na tela");
	printf("\n\n Digite o valor para x: ");
	scanf("%f", &x);
	fflush(stdin);
	printf("\n\n Digite o valor para y: ");
	scanf("%f", &y);
	printf("\n x=%.2f e y=%.2f ", x, y);
	 //PROCESSAMENTO
	float media = (x+y)/2;
	//SAIDA
	printf("a media eh %.2f",media);

		
		return 0;
	}
