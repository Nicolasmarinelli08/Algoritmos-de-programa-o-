#include<stdio.h>
#include<stdlib.h>
int main(){
	char letra;
	printf("Digite uma letra:  ");
	scanf("%c",&letra);
switch(letra){
	case 'a': printf("Sua letra e uma vogal!!");
	case 'e': printf("Sua letra e uma vogal!!");
	case 'i': printf("Sua letra e uma vogal!!");
	case 'o': printf("Sua letra e uma vogal!!");
	case 'u': printf("Sua letra e uma vogal!!");
	break;
	default: printf("Sua letra nao e uma vogal!!");
	break;
	
}
	
	
	
	
	return 0;
}