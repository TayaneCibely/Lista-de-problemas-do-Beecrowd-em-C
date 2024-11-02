#include <stdio.h>

int main() {
    float vetor[6];
    int i, quant = 0 ;
    float media, soma = 0.0;

    for( i = 0; i < 6; i++){
        scanf("%f", &vetor[i]);

        if(vetor[i] > 0){
            quant++;
            soma = soma + vetor[i];
           
        }
    }

    printf("%d valores positivos\n", quant);    
    if(quant != 0){
        media = soma/quant;
        printf("%.1f\n", media);
    }

    return 0;
}
