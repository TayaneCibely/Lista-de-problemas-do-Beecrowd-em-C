#include <stdio.h>
 
int main() {
    int idade, a, r, m, d;
    scanf("%d", &idade);
    
    a = idade/365;
    r = idade%365;
    m = r/30;
    d = r%30;
    
    printf("%d ano(s)\n", a);    
    printf("%d mes(es)\n", m); 
    printf("%d dia(s)\n", d); 

    return 0;
}
