#include<stdio.h>
#include<stdlib.h>
int main(){
	int vetor[12];
	
	printf("Selecione os numeros:  ");
	for(int i=0; i<2; i++){
		scanf("%d",&vetor[i]);
	}
	for(int i=0;i<2; i++){
		if(vetor[i]>0)
		printf("\n%d", vetor[i]);
	}
	
	
	
	
	return 0;	
}