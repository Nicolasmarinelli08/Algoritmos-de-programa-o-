#include <stdio.h>
#include<stdlib.h>
int main(){
	int opt;
    printf("Menu:\n[1]Entrar \n[2]Login \n[3]Sair");
    printf("\n\n\n");
	scanf("\n %i",&opt);
	switch(opt){
		case 1: printf("Carregando...");
		break;
		case 2: printf("Faça o login:"); 
		break;
		case 3: printf("Saindo da pagina...");
		break;
		
	}
	
	
	
	
	return 0;
}