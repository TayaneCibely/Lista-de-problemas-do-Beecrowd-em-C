#include <stdio.h>

int main(){
    double  n1, n2, m;

    scanf("%lf %lf", &n1, &n2);

    m = (n1*3.5 + n2*7.5)/11;

    printf("MEDIA = %.5lf\n", m);
    
    return 0;
}
