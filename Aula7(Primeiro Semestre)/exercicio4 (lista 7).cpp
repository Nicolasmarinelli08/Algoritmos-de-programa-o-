#include<stdio.h>
#include<stdlib.h>
int main(){
	int vetor[15];
	
	printf("Coloque os valores");
	
	for(int i=0; i<15; i++){
	scanf("%d",&vetor[i]);
	}	
	for(int i=0; i<15; i++){
	vetor[i]*=2;
	printf("\n%d",vetor[i]);
}
return 0;
}
