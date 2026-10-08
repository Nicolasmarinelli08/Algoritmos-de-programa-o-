#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	for(int i=0;i<10;i++){
		printf("\nselecione um numero:  ");
		scanf("%d",&num);
		if(num>0){
		printf("Numero POSITIVO!!");
		}
		else if(num<0){
			printf("numero NEGATIVO");
		}
		else{
		printf("Numero NULO");
		}
		
	}
	
	
	
	
	return 0;
}