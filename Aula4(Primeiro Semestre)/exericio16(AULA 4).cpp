#include<stdio.h>
#include<stdlib.h>
int main(){
	int i1, i2;
	int num1;
	
	printf("Determine um intervalo de tempo: ");
	scanf("%i",&i1,&i2);
		fflush(stdin);
	printf("\n Determine um numero:  ");
	scanf("%i",&num1);
	 
	 if(num1 <= i1){
	 	if(num1 <=i2)
	 	printf("Seu numero esta no intervalo de temepo permitido!!");
	 }
		else {
		printf("Seu numero esta fora do intervalo de tempo permitido");
	}
	
	
	
	return 0;
}