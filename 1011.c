#include <stdio.h>
#include <math.h>

int main(){
	double pi = 3.14159;
	double raio;
	double area;
	
	scanf("%lf", &raio);
	
	area = (4.0/3)*pi*pow(raio,3);
	
	printf("VOLUME = %.3lf\n", area);
}
