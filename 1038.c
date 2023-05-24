#include <stdio.h>

int main(){
	int id, qtd;
	float valor;
	
	scanf("%d %d", &id, &qtd);
	
	switch(id){
		case 1:
			valor = qtd*4;
			printf("Total: R$ %.2f\n", valor);
			break;			
		case 2:
			valor = qtd*4.5;
			printf("Total: R$ %.2f\n", valor);
			break;
		case 3:
			valor = qtd*5;
			printf("Total: R$ %.2f\n", valor);
			break;
		case 4:
			valor = qtd*2;
			printf("Total: R$ %.2f\n", valor);
			break;
		case 5:
			valor = qtd*1.50;
			printf("Total: R$ %.2f\n", valor);
			break;			
	}	
	return 0;
}
