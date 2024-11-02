#include <stdio.h>
#include <math.h> 

int main() {
   double x, y, z;
   scanf("%lf %lf %lf", &x, &y, &z);
  
    if(x >= (y+z) || y >= (x+z) || z >= (x+y)){
         printf("NAO FORMA TRIANGULO\n");
    }else if(pow(x,2) == (pow(y,2) + pow(z,2)) || pow(y,2) == (pow(x,2) + pow(z,2)) || pow(z,2) == (pow(x,2) + pow(y,2))){
         printf("TRIANGULO RETANGULO\n");
    }else if(pow(x,2) > (pow(y,2) + pow(z,2)) || pow(y,2) > (pow(x,2) + pow(z,2)) || pow(z,2) > (pow(x,2) + pow(y,2))){
         printf("TRIANGULO OBTUSANGULO\n");
    }else if(pow(x,2) < (pow(y,2) + pow(z,2)) || pow(y,2) < (pow(x,2) + pow(z,2)) || pow(z,2) < (pow(x,2) + pow(y,2))){
         printf("TRIANGULO ACUTANGULO\n");
    }

    if(x == y && x == z){
         printf("TRIANGULO EQUILATERO\n");
    }
    if((x == y && x != z)  || (x == z && x != y) || (y == z && y != x)){
         printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
