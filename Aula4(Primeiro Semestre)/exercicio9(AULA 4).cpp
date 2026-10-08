#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>	
int main(){
	char letra;
	
	printf("Digite uma letra:  ");
	scanf("%c",&letra);
	letra = tolower(letra);
	
switch(letra){
	case 'a': printf("A letra %c e uma vogal!!",letra);
	break;
	case 'e': printf("A letra %c e uma vogal!!",letra);
	break;
	case 'i': printf("A letra %c e uma vogal!!",letra);
	break;
	case 'o': printf("A letra %c e uma vogal!!",letra);
	break;
	case 'u': printf("A letra %c e uma vogal!!",letra);
	break;
	default: printf("A letra nao e uma vogal!!");
	break;
	
}
return 0;
}