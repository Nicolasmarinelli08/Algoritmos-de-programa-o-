#include<stdio.h>
#include<stdlib.h>
int main(){
float n1, n2, resultado;
	int opcao;
	
	
	printf("Determine o primeiro numero: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Determine o segundo numero: ");
	scanf("%f",&n2);
    printf("\nEscolha uma operacao:  ");
    printf("\n1--ADICAO[+]");
	printf("\n2--SUBTRACAO[-]");
	printf("\n3--MULTIPLICACAO[*]");
	printf("\n4--DIVISAO[/]");
    printf("\n5--Sair:= ");
	scanf("%i",&opcao);
	
	switch(opcao){
	scanf("%i",&opcao);
    case 1: resultado= n1+n2;
	printf("Resultado: \n%.2f",resultado);
		break;
	case 2: resultado=n1-n2;
	printf("Resultado: \n%.2f",resultado);
		break;
	case 3: resultado= n1*n2;
	printf("Resultado: \n%.2f",resultado);
		break;
	
	case 4: resultado=n1/n2;
	if(n1 !=0 && n2!=0){
		printf("Resultado: \n%.2f",resultado);
	}
	else{
		printf("operacao nao pode ser realizada, nao existe divisao por 0!!");
	}
		break;
	default: printf("Operador invalido");
		break;
}

return 0;
}