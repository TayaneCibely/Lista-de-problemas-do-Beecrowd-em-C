#include <stdio.h>

int main(){
	double time;
	
	scanf("%lf", &time);
	
	if(time >= 0 && time<=25){
		printf("Intervalo [0,25]\n");
	}
	else if(time > 25 && time <=50){
		printf("Intervalo (25,50]\n");
	}
	else if(time > 50 && time <=75){
		printf("Intervalo (50,75]\n");
	}	
	else if(time > 75 && time <=100){
		printf("Intervalo (75,100]\n");
	}
	else{
		printf("Fora de intervalo\n");
	}	
	return 0;
}
