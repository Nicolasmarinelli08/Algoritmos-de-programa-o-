#include<stdio.h>
#include<stdlib.h>
int main(){
	int vetor[10];
	
	printf("Coloque os valores");
	
	for(int i=0; i<10; i++){
	scanf("%d",&vetor[i]);
}
	for(int i=9; i>=0; i--){
	printf("\n%d",vetor[i]);
	
}
	return 0;
}