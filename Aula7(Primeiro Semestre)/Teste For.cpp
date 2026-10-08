#include<stdio.h>
#include<stdlib.h>
int main(){

int i;
float vetor[3];

for(i=0; i<3; i++ ){
	printf("Coloque o valor no vetor[%d] ",i );
	scanf("%f",  &vetor[i]);
}
for(i=0; i<3; i++){
	printf("\nO valor do indice [%d]= %.2f",i, vetor[i]);
}





return 0;
}