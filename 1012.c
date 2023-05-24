#include <stdio.h>
#include <math.h>


float area_triangulo(float a, float c){
	float area;
	area = (a*c)/2;
	return area;
}

float area_circulo(float c){
	float area;
	area = 3.14159*pow(c,2);
	return area;
}

float area_trapezio(float a, float b, float c){
	float area;
	area = ((a+b)*c)/2;
	return area;
}

float area_quadrado(float b){
	float area;
	area = pow(b,2);
	return area;
}

float area_retangulo(float a, float b){
	float area;
	area = a*b;
	return area;
}

int main(){
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	
	printf("TRIANGULO: %.3f\n", area_triangulo(x,z));
	printf("CIRCULO: %.3f\n", area_circulo(z));	
	printf("TRAPEZIO: %.3f\n", area_trapezio(x,y,z));	
	printf("QUADRADO: %.3f\n", area_quadrado(y));	
	printf("RETANGULO: %.3f\n", area_retangulo(x,y));	
	
	return 0;
}

