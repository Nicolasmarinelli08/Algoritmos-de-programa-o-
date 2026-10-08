#include<stdio.h>
#include<stdlib.h>
int main(){
	int valor[50];
	int i, num=2;
	
	for(i=0; i<50; i++){
		valor[i]=num;
		num+=2;
}
	printf("Numeros pares de 1 a 100:\n");
	for(i=0; i<50; i++){
		printf("%d ", valor[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}