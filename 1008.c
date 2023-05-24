#include <stdio.h>

int main(){
    int n, h;
    float valor;

    scanf("%d %d %f", &n, &h, &valor);

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", (h*valor));

    return 0;
}
