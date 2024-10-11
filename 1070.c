#include <stdio.h>

int main() {
    int numero;
    int quant = 0;
    scanf("%d", &numero);
    
        while(quant < 6){
            if(numero%2==0){
                numero++;
                printf("%d\n", numero);
                numero +=2;
            }else{
                printf("%d\n", numero);
                numero+=2;
            }
            quant++;
        }
    return 0;
}
