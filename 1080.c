#include <stdio.h>
 
int main() {
 
    int vet[100], i, maior=0, posicao=0;
    
    for (i=0; i<100; i++){
		scanf ("%d", &vet[i]);
	}
    
    for (i=0; i<100; i++){
		if (maior < vet[i]){
			maior = vet[i];
			posicao = i+1;
		}	
	}
	
	printf("%d\n%d\n", maior, posicao);
 
    return 0;
}
