#include <stdio.h>

int main() {
    int vetor[5];
    int i, par = 0 ;

    for( i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);

        if(vetor[i]%2 == 0){
            par++;
        }
    }

    printf("%d valores pares\n", par);    
    return 0;
}
