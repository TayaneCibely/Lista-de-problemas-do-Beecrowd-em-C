#include <stdio.h>

int main(){
	int tempo, velocidade;
	float litros, distancia;
	
	scanf("%d", &tempo);
	scanf("%d", &velocidade);
	
	distancia = velocidade*tempo;
	litros = distancia/12;
	
	printf("%.3f\n", litros);	
	
	return 0;
}
