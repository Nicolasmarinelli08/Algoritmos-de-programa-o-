#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2,num3;
	float p1 =0.50;
	float p2 =0.30;
	float p3 =0.20;
	//ENTRADA
	printf("Coloque sua nota na avaliacao UM:  ");
	scanf("%f",&num1);
	printf("Coloque sua nota na avaliacao DOIS:  ");
	scanf("%f",&num2);	
	printf("Coloque sua nota na avaliacao TRES:  ");
	scanf("%f",&num3);
	//PROCESSAMENTO
	float media = (num1*p1 + num2*p2 + num3*p3) / (p1 + p2 + p3);
	printf("\nSua Media ponderada foi de: %.2f",media);
	
	if(media>=7){
		printf("\nParabens vc foi Aprovado!!");
	}
	else if(media>=5 && media<7){
		printf("\nVoce esta de recuperacao!!");
	}
	else {
	printf("\nVoce foi REPROVADO!!!!!");
	}
	
	
	
	
	
	return 0;
}