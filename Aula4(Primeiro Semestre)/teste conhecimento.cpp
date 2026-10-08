#include<stdio.h>
#include<stdlib.h>
int main(){
	int nota1, nota2;
	
	printf("Coloque sua primeira nota:  ");
	scanf("%i",&nota1);
	printf("\nColoque sua Segunda nota:  ");
	scanf("%i",&nota2);
	
	float media=nota1+nota2;
	if(media==6 || media>6){
		printf("\nAPROVADO ");
		}
	else {
		printf("\nREPROVADO ");
}
	
	return 0;
}