#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#define PRODUTO 2
int main(){
	int codigo[PRODUTO];
	char nome[PRODUTO][50];
	int preco[PRODUTO];
	int estoque[PRODUTO][3];
	int opcao,codigoBusca,encontrado;
	do{
		printf("\n1 - Cadastrar produtos");
		printf("\n2 - Listar produtos");
		printf("\n3 - Buscar produto pelo codigo");
		printf("\n4 - Alterar quantidade em estoque");	
		printf("\n5 - Sair");
		scanf("%d",&opcao);
		
	switch(opcao){
		case 1: 
			for(int i=0; i<PRODUTO; i++){
				printf("==CADASTRO PRODUTOS==");
				printf("\n Nome:");
				fflush(stdin);
				gets(nome[PRODUTO]);
				printf("\n Codigo:");
				scanf("%d",&codigo[i]);
				printf("\n Preco:");
				scanf("%d",&preco[i]);
				printf("\n Quantidade em estoque:");
				scanf("%d",&estoque[i][0]);
				printf("\n Corredor:");
				scanf("%d",&estoque[i][1]);
				printf("\n Pratileira:");
				scanf("%d",&estoque[2]); 
		}
			break;
		case 2: 
		if(PRODUTO==0){
			printf("\n**Produto nao cadastrado**");
		}
		else{
		for(int i=0; i<PRODUTO; i++){
			printf("\nNome do produto:",nome[i]);
			printf("\nCodigo:",codigo[i]);
			printf("\nPreco:",preco[i]);
			printf("\nQuantidade em estoque:",estoque[i][0]);
			printf("\nCorredor:",estoque[i][1]);
			printf("\nPratileira:",estoque[i][2]);
		}
	}
			break;
		case 3: 
			printf("Digite o codigo:");
			scanf("%d",&codigoBusca);
			encontrado = 0;
			
			for(int i=0; i<PRODUTO;i++){
				if(codigo[i]==codigoBusca){
					printf("\nNome do produto:",nome[i]);
					printf("\nCodigo:",codigo[i]);
					printf("\nPreco:",preco[i]);
					printf("\nQuantidade em estoque:",estoque[i][0]);
					printf("\nCorredor:",estoque[i][1]);
					printf("\nPratileira:",estoque[i][2]);
					encontrado=1;
		}
			if (encontrado == 0) {
				printf("\nProduto nao encontrado.\n");
		}
			break;
	}
		case 4: 
			break;
		
		
	}while(opcao!=5); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	return 0;
	

		}	
		
		
		
		
		
		
		
	
	
	
	
	
	
