#include <stdio.h>
 
int main() {
    int hora_inicial, hora_final;
    scanf("%d %d", &hora_inicial, &hora_final);
  
    if(hora_inicial==hora_final || hora_inicial >= hora_final){
        printf("O JOGO DUROU %d HORA(S)\n", 24- hora_inicial + hora_final);
    } else{
        printf("O JOGO DUROU %d HORA(S)\n", hora_final - hora_inicial);
    }    
   
    return 0;
}
