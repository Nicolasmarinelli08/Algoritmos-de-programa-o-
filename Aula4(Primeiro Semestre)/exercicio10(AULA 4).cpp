#include<stdio.h>
#include<stdlib.h>
int main(){
	int retorno; 
	printf("O retorno do servidor foi de:  ");
	scanf("%i",&retorno);
	
	switch(retorno){
		case 200: printf("O servidor esta ok!!");
		break;
		case 400: printf("Pagina nao encontrada!!");
		break;
		case 500: printf("Erro interno no servidor");
		break;
		case 503: printf("Servico indisponivel");
		break;
		default: printf("sem dados de retorno!!");
		break;
	}
	
	
	
	
	return 0;
}