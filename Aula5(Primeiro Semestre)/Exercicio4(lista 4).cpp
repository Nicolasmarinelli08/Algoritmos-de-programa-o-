#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1;
	int num2;
	int i;
		printf("Coloque o UM numero:  ");
		scanf("%i",&num1);
		printf("Coloque o OUTRO numero:  ");
		scanf("%i",&num2);
		
	if(num1<num2){
		for(i=num1 +1; i<=num2; i++){
			printf("\n%d",i);
		}
	}
	else{;
		for(i=num2 +1; i<=num1; i++){
			printf("\n%d",i);
		}
	}
	
	
	return 0;
}