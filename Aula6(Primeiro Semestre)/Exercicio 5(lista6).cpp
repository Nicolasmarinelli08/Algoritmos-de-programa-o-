#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float num1, num2, resultado;
	int opc=1;
	
	do {
    	printf("\n1 - Soma");
        printf("\n2 - Subtracao");
        printf("\n3 - Multiplicacao");
        printf("\n4 - Divisao");
        printf("\n5 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opc);

	if(opc!=5){
		printf("\nDigite um numero: ");
		scanf("%f",&num1);
		printf("\nDigite mais um numero: ");
		scanf("%f",&num2);
	}
	switch(opc){
	case 1: resultado=num1+num2;	
		printf("\nO valor da soma e:%.2f", resultado);
		break;
	case 2: resultado=num1-num2;	
		printf("\nO valor da Subtracao e:%.2f", resultado);
		break;		
	case 3: resultado=num1*num2;	
		printf("\nO valor da multiplicacao e:%.2f", resultado);
		break;	
	case 4: 	
		if (num2 && num1 !=0){
			resultado= num1/num2;
			printf("\nO valor da divisao e:%.2f", resultado);
		}
		else {	
             printf("Erro: divisao por zero!\n");
     	}
		break;	
	case 5:
		printf("\nSAINDO...");
		break;
	default:
		printf("###ENTRADA INVALIDA###");
	
		}
	} while (opc!=5);
	
	

	
	return 0;
}