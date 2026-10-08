#include<stdio.h>

int main(){
	//ENTRADA
	float total=0;//variavel ACUMULADORA
	float num;
	float media=0;
	//PROCESSAMENTO
	for(int i=0; i<3; i++){
		printf("\n Digite um numero:  ",i);
		scanf("%f",&num);
		
		total+=num;
	}
	media = total/3;
	//SAIDA
	printf("\nMEDIA %.f",media);
	return 0;
}