#include <stdio.h>
#define n 1000

int main()
{
    int v[n];
    int i, num, m, p;
    
    scanf("%d", &num);

    m = v[0];
    for(i=0; i<num; i++){
        scanf("%d", &v[i]);
        
        if(v[i] < m){
            m = v[i];
            p = i;
        }
    }
    
    printf("Menor valor: %d\n", m);
    printf("Posicao: %d\n", p);
    
    
    return 0;
}
