
#include<stdlib.h>
int main(){
	int num;
	
	
	printf("digite um numero");
	scanf("%i",&num);
	if(num>0){
		
		printf("\n e positivo");

		if(num% 2==0){
		printf("\n ##PAR##");
		}
		else {
			printf("\n ##IMPAR##");
		}
	}



	
	
	
	return 0;
}