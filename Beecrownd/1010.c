#include <stdio.h>

int main(){
    int cod1, num1, cod2, num2;
    double val1, val2;
    
    scanf("%d %d %lf", &cod1, &num1, &val1);
    scanf("%d %d %lf", &cod2, &num2, &val2);

    printf("VALOR A PAGAR: R$ %.2lf\n", (23num1*val1+num2*val2));

    return 0;
}
