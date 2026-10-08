#include<stdio.h>
#include<stdlib.h>
int main(){
	int idade;
	//ENTRADA
	printf("selecione sua idade: ");
	scanf("%i",&idade);
	printf("\nSua idade eh:%i ", idade);
	
	if(idade>=0 && idade<12){
		printf("\nVoce e uma CRIANCA");
	}
	else if(idade>=13 && idade<=17){
	printf("\nVoce e um ADOLESCENTE");
}
	else if(idade>=18 && idade<=59){
		printf("\nVoce e um ADULTO");
	}
	 else 
	printf("\nVoce e um IDOSO");
	
	return 0;
	
	
}