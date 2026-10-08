#include<stdio.h>
#include<stdlib.h>
int  main(){
	float salario,novosalario;
	
	printf("Coloque o seu salario a frente:  ");
	scanf("%f",&salario);
	
	if(salario<=1000){
		novosalario= salario+(salario*0.05);
		printf("\nSeu salario sofreu uma mudanca de 5%%, agora ele eh %.2f",novosalario);		
}
	else{
		novosalario= salario+(salario*0.07);
		printf("Seu salario foi reajustado em 7%%, sendo o atual:%.2f",novosalario);
		
	}
	
	
	
	return 0;
}