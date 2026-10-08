#include<stdio.h>
#include<stdlib.h>
int main(){
	int vetor[5];
	int negativo[5];
	int neg=0, cont=0;
	
	for(int i=0; i<5;i++){
	printf("Insira numeros:  ");
	scanf("%d",&vetor[i]);
		if(vetor[i]<0){
			negativo[cont]=vetor[i];
			cont++;
		}
}
	for(int i=0; i<cont; i++){
		printf("Numeros Negativos: %d",negativo[i]);
	}
	
	
	
	
	
return 0;
}