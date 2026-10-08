#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	int total;
		printf("\nSelecione um numero de 1 a 10:  ");
		scanf("%d",&num);
	for(int i =0;i<=10;i++){
		total=num*i;
		printf("\n%i",total);
	
}

	
	return 0;
}