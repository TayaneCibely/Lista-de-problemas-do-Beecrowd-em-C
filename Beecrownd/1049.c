#include <stdio.h>

int main(){
    char car[15], esp[12], al[12];
    scanf("%s %s %s", &car, &esp, &al);

    if (car[0] == 'v' && esp[0] == 'a' && al[0] == 'c')printf("aguia\n");
    if (car[0] == 'v' && esp[0] == 'a' && al[0] == 'o')printf("pomba\n");
    if (car[0] == 'v' && esp[0] == 'm' && al[0] == 'o')printf("homem\n");
    if (car[0] == 'v' && esp[0] == 'm' && al[0] == 'h')printf("vaca\n");
    if (car[0] == 'i' && esp[0] == 'i' && al[2] == 'm')printf("pulga\n");
    if (car[0] == 'i' && esp[0] == 'i' && al[2] == 'r')printf("lagarta\n");
    if (car[0] == 'i' && esp[0] == 'a' && al[0] == 'h')printf("sanguessuga\n");
    if (car[0] == 'i' && esp[0] == 'a' && al[0] == 'o')printf("minhoca\n");
   
   return 0;
}
