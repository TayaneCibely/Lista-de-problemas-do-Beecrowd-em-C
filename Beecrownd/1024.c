#include <stdio.h>
#include <string.h>

int main(){

    int i, j, n, t, s;
    char frase[100], fraseF[100];

    scanf("%d", &n);
    getchar();   
 
    for(i = 0; i < n; i++){
        gets(frase);
        
        t = strlen(frase);
        for(j = 0; j < t; j++){
            if((frase[j] >= 'A') && (frase[j] <= 'Z') || (frase[j] >= 'a') && (frase[j] <= 'z'))
                frase[j] +=3;
            

        }
        s = t - 1;
        for(j = 0; j < t; j++){
            fraseF[j] = frase[s];
            s--;
        }
        fraseF[j]='\0';
        for(j = t/2; j < t; j++)
             fraseF[j] -= 1;
        }
        printf("%s\n", fraseF);
    
    }
}
