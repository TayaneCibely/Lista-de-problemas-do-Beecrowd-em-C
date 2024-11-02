#include <stdio.h>
#include <math.h>

void main(){
    float area, raio;
    float pi = 3.14159;

    printf("Digite o valor do raio da circuferência: ");
    scanf("%f", &raio);
    area = pi * pow(raio, 2);

    printf("A área da circuferência: %f\n", area);
}