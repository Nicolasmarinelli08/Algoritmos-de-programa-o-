#include<stdio.h>
#include<stdlib.h>
int main(){
	int cont=1;
	int num1,max=0,soma=0;
	int opc;
	float media;
	
	while(opc!=2){
		printf("\nDigite um numero:  ",num1);
		scanf("%d",&num1);
		fflush(stdin);
		
		printf("\nDigite 1 para continuar e 2 para sair: ",opc);
		scanf("%d",&opc);
		fflush(stdin);
		
		if(cont==1||num1>max){
			max=num1;//Mostra que sempre que esse if for verdadeiro o max sera num1, pois max e zero e num1 sempre sera maior que zero
		}	
		soma += num1;//A cada num1 colocado ira ficar alocado o valor dele na variavel soma, com isso e possivel armezanar num1 e ir somando o num1 com o outro num1 ja presente em soma
		cont++; //cont vai armazenando a quantidade de vezes que foi escrito um numero, sendo ele o divisor da media no final
		
		
		if(opc==1){
		printf("\nContinuando...");
		}
		else if(opc==2){							
		printf("\nSaindo...");
		}
	}
	media = (float)soma / (cont -1); // cont - 1 porque o último número não deve ser contado na media
	printf("\nMaior numero: %d", max);
	printf("\nMedia aritmetica: %.2f", media);
	printf("\n\n");
	return 0;
		
return 0;
}
