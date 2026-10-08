#include<stdio.h>
#include<stdlib.h>
#define quantidade 10
int main(){
	
	int cadastro[quantidade];
	int codigo[quantidade];
	int idade[quantidade];
	int i, cod,achou=0;
	float salario[quantidade];
	int opt = 0;
	
	for(i=0;i<10;i++){
		printf("\n###CADASTRO DE USUARIOS###");
		printf("\n[1] - Cadastrar pessoas");
		printf("\n[2] - Listar todas as pessoas");
		printf("\n[3] - Buscar pessoa pelo codigo");
	    printf("\n[4] - Sair");
		printf("\n\n");
		scanf("%d",&opt);
		switch(opt){
			case 1: 
			printf("\n[%d]Insira seu codigo de cadastro: ",i);
			scanf("%d",&codigo[i]);	
			fflush(stdin);	
			printf("\n[%d]Insira sua idade ",i);
			scanf("%d",&idade[i]);
			fflush(stdin);
			printf("\n[%d]Insira seu salario: ",i);
			scanf("%f",&salario[i]);
			
			break;
			
			case 2: 
			for(i=0;i<10;i++){
				printf("\nPessoa: [%d]",i);
				printf("\nCodigo %d!",codigo[i]);
				printf("\nIdade %d",idade[i]);
				printf("\nSalario %.2f",salario[i]);
			}
			break;
			
			case 3: 
			for(i=0;i<10;i++){
				printf("\nEnsira o codigo para buscar:  ");
				scanf("%d",&cod);
					if(codigo[i]==cod){
						printf("\nCodigo %d",codigo[i]);
						printf("\nIdade %d",idade[i]);
						printf("\nSalario %.2f",salario[i]);
						achou	=1;
				}
					else if(achou==0){
						printf("CODIGO INVALIDO!!");
					}
			}
			
			break;
			case 4: printf("Saindo...");
			break;
		
			default: printf("Numero invalido!!");	
		}
			
	}
	
	return 0;
}