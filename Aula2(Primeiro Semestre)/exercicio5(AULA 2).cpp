#include<stdio.h>
#include<stdlib.h>
	int main(){
	    int x,y;
	    //ENTRADA
	    printf("O valor de x eh:");
	    scanf("\n%i",&x);
		fflush(stdin);
		printf("\n O valor de y eh:");
		scanf("\n%i",&y);
		//PROCESSAMENTO
		int valor = x/y;
		int valor2 = x%y;
		//SAIDA
		printf("valor dividido eh: %i",valor);
		printf("\nresto da divisao inteira:%i",valor2);
		
return 0;
	}