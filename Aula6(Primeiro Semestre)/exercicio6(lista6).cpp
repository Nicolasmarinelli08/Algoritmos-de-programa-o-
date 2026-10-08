#include<stdio.h>
#include<stdlib.h>
int main(){
	float saldoInicial, valor ,saldoFinal;
	int opt;
	
	do{	
		printf("\nColoque o valor inicial da sua conta:   ");
		scanf("%f",&saldoInicial);
		
		printf("\nSelecione o tipo de operacao que deseja:  ");	
		printf("\n[1]Deposito	");
		printf("\n[2]Retirada");
		printf("\n[3]Sair");
		printf("\n");
		scanf("%d",&opt);
		fflush(stdin);
		
	if (opt == 1 || opt == 2) {
		printf("valor: ");
		scanf("%f", &valor);
	}
		switch(opt){
		case 1: saldoFinal= saldoInicial+valor;
			break;
		case 2: saldoFinal= saldoInicial-valor;
			break;
		case 3: 
			printf("\nSaindo...");
			break;
		default:
			printf("###ENTRADA INVALIDA###");
			break;
		}
			printf("\nSaldo total: %.2f\n",saldoFinal);
	}while(opt!=3);	
		
		 
		if(saldoFinal>0){
			printf("\nCONTA PREFERENCIAL");
			printf("\nSaldo total: %.2f",saldoFinal);
		}
		else if(saldoFinal<0){
			printf("\nCONTA ESTOURADA");
			printf("\nSaldo total: %.2f",saldoFinal);
		}
		else if(saldoFinal=0){
			printf("\nCONTA ZERADA");
			
			printf("\nSaldo total: %.2f",saldoFinal);
		}
		
	
	

	
		
	
	
	
	
	
	
	return 0;
}