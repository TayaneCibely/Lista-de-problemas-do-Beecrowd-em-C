#include <stdio.h>

void main(){
    int ano, mes, dia;
    char traco;
    printf("Digite uma data no formato aaaa-mm-dd\n");
    scanf("%d%c%d%c%d", &ano, &traco, &mes, &traco, &dia);

    printf("A data digitada foi: %d/%d/%d", dia, mes, ano);
}