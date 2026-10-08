#include<stdio.h>
#include<stdlib.h>
int main(){
	int opcao;
	printf("Escolha uma opcao de 1 a 7");
	printf("\n[1]");
	printf("\n[2]");
	printf("\n[3]");
	printf("\n[4]");
	printf("\n[5]");
	printf("\n[6]");
	printf("\n[7]");
	printf("\n");
	scanf("%i",&opcao);
	
	switch(opcao){
	case 1: printf("SEGUNDA-FEIRA");
		break;
	case 2:printf("TERCA-FEIRA");
		break;
	case 3:printf("QUARTA-FEIRA");
		break;
	case 4:printf("QUINTA-FEIRA");
		break;
	case 5:printf("SEXTA-FEIRA");
		break;
	case 6: printf("SABADO");
		break;	
	case 7:  printf("DOMINGO");
		break;
	 default: printf("Numero INVALIDO");
	 	break;
}
	
	
	
	
	
	
	
	return 0;
}