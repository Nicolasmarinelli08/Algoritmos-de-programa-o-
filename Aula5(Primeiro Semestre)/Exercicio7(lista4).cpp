#include<stdio.h>
#include<stdlib.h>
int main(){
	float teoria,lab;
	float final;
	
	for(int i=0; i<30;i++){
		printf("\nMEDIA DA TEORIA: ");
		scanf("%f",&teoria);
		printf("\nMEDIA DO LABORATORIO:  ");
		scanf("%f",&lab);
		final=(teoria*0.6)+(lab*0.4);
		printf("\nMEDIA FINAL FOI DE %.2f",final);
		
	if(final>=7){
		printf("\nVOCE FOI BEM!");
	}
	else if(final>=5&&final<7){
		printf("\nVOCE FOI RAZOAVEL!");
	}
	else if(final<5)	
		printf("\nVOCE FOI MAL!");
		
		printf("\n");
		
}
	
	1
	
	return 0;
}