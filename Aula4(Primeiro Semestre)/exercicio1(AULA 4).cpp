#include<stdio.h>
#include<stdlib.h>
int main(){
 int mes;
 printf("Digite o mes do seu aniversario:  ");
 scanf("%i",&mes);
 switch(mes){
 	case 1: printf("O mes e janeiro");
	break;
	case 2: printf(" o mes e fevereiro");
	break;
	case 3: printf("o mes e março");
	break;
 	case 4: printf("o mes e abril");
 	break;
 	case 5: printf("o mes e maio");
 	break;
 	case 6: printf("o mes e junho");
 	break;
 	case 7: printf("o mes e julho");
 	break;
	case 8:printf("o mes e agosto");
	break;
	case 9: printf("o mes e setembro");
	break;
	case 10: printf("o mes e outubro");
	break;
	case 11: printf("o mes e novembro");
	break;
	case 12: printf("o mes e dezembro");
	break;
	default: printf("\nOperador invalido\n\n");
break; 
 }

	return 0;
}
