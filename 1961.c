#include <stdio.h>

int main(){
    int p, n, i, d, c=0;
    int pulo[n];

    scanf("%d", &p);
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", & pulo[i]);
    }

    for(i=1; i<n; i++)
    {
        if(pulo[i] > pulo[i-1]){
            d = (pulo[i]- pulo[i-1]);
        }else{
            d = (pulo[i-1]-pulo[i]);
        }
        if(d<=p){
            c++;        
        }
    }
    if(c== n-1){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }

    return 0;
}
