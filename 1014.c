#include <stdio.h>

int main() {
    int distancia;
    double combustivel;
    double consumo;

    scanf("%d\n%lf\n", &distancia, &combustivel);

    consumo = distancia / combustivel;

    printf("%.3lf km/l\n", consumo);

    return 0;
}
