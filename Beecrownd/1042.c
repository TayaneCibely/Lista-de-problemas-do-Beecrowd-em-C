#include <stdio.h>

void bubbleSort(int v[], int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(v[j]> v[j+1]){
				int temp = v[j];
				v[j]= v[j+1];
				v[j+1]= temp;
			}
		}
	}
}

int main(){
	int vetor[3], i;
	int vet[3];
	
	for(i=0; i<3; i++){
		scanf("%d", &vetor[i]);
		vet[i]= vetor[i];
	}
	
	bubbleSort(vetor,3);
	
	for(i=0; i<3; i++){
		printf("%d\n", vetor[i]);
	}
	
	printf("\n");
	
	for(i=0; i<3; i++){
		printf("%d\n", vet[i]);
	}
	return 0;
}
