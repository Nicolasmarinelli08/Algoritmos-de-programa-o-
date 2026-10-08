#include<stdio.h>
#include<stdlib.h>
int main(){
	int valor[4],i;
	int cont=0;
	
		printf("Selecione os numeros:  ");
		
	for(i=0; i<4;i++){
		printf("\nNumero %d: ",i);
		scanf("%d",&valor[i]);
			
	if(valor[i]<0){
		cont++;
	}
	}
		printf("Existem %d numeros negativos",cont);




















return 0;
}