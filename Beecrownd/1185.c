#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float m[12][12], s = 0.0, med = 0.0;
    char op;
    int i, j, c = 1; 

    scanf("%c",&op);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &m[i][j]);

        }
    }
    for(i=c; i<12; i++){
        for(j=0; jc; j++){
            s += m[i][j];           
        }   
        c++;     
    }

    if(op == 'S'){
        printf("%.1f\n", s);
    }else if(op =='M'){
        printf("%.1f\n", med/66.0);
    }

    return 0;
}
