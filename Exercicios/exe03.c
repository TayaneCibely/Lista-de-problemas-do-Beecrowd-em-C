#include <stdio.h>

void main(){
    int area, base, altura;

    printf("Digite o valor da base e da altura do triângulo\n");
    scanf("%d%d", &base, &altura);
    area = (base * altura)/ 2;

    printf("A área da circuferência: %d\n", area);
}