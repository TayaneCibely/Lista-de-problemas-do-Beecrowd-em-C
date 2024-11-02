#include <stdio.h>

void main() {
    int linhas = 3;
    
    for (int i = 1; i <= linhas; i++) {
        for (int j = i; j < linhas; j++) {
            printf("  ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("/   |   \\");
}