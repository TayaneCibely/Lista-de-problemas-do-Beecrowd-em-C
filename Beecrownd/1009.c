#include <stdio.h>

int main(){
	char nome[20];
	double salario;
	double venda;
	double total;
	
	scanf("%s", &nome);
	scanf("%lf", &salario);
	scanf("%lf", &venda);
	
	total = salario + (venda*0.15);
	
	printf("TOTAL = R$ %.2lf\n", total);
}
