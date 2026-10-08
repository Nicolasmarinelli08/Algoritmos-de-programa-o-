#include<stdio.h>
#include<stdlib.h>
int main(){
	//Declarar vetor
	int vetor[5]={4,7,3,9,11};
	
	//Pegar elemento do vetor
	printf("%d ",vetor[1]);//Segundo Elemento do vetor
	
	//Atribuir valor para um elemento do vetor
	vetor[1]=100; //2 elemento do vetor =100
	printf("%d ",vetor[1]);
	
	//Usando for
	for(int i=0; i<5; i++){
		printf("%d ",vetor[i]);
	}
	//
	for(int i=0;i<5;i++){
		printf("\nDigite um numero");
		scanf("%d",vetor[i]);
	}
	
	
	return 0;
}