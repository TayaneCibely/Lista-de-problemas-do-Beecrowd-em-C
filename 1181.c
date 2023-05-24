#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float m[12][12], s = 0.0, med = 0.0, elem;
    char op;
    int i, j, l; 

    scanf("%d %c", &l, &op);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f", &elem);
            m[i][j] = elem;
        }
    }
    
    if(op == 'S'){
        i = l;
        while(i==l){
            for(j=0; j<12; j++){
                s += m[i][j];           
            }   
         i++;     
        }
      printf("%.1f\n", s);
    }else{
        if(op =='M'){
            i = l;
            while(i==l){
                for(j=0; j<12; j++){
                    med += m[i][j];          
                }   
             i++;
            }
         printf("%.1f\n", med/12);
        }
    }
    
    return 0;
}
