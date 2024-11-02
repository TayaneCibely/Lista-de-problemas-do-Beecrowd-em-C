#include <stdio.h>

int main() {
    float vetor[6];
    int i, quant;

    for( i = 0; i< 6; i++){
        scanf("%f", &vetor[i]);

        if(vetor[i] > 0){
            quant++;
        }
    }
    printf("%d valores positivos\n", quant);
    return 0;
}
