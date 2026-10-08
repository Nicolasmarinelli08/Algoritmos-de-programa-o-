#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	int dobro=0;
	for(int i=0; i<10; i++){
		printf("\nColoque um numero:");
		scanf("%d",&num);
		dobro= num*2;
		printf("O DOBRO E: %i ", dobro);
	}
	return 0;
}