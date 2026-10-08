#include<stdio.h>
#include<stdlib.h>
int main(){
	float nota1;
	float nota2;
	
	printf("\n Coloque a nota da sua primeira prova:  ");
	scanf("%f",&nota1);
	fflush(stdin);
	printf ("\n Coloque a nota da segunda prova:  ");
	scanf("%f",&nota2);
	
	float media= (nota1+nota2)/2;
	if(media>=5){
		printf("APROVADO");
	}	
	else{
		printf("REPROVADO");
	}
	
	
	
	return 0;
}
