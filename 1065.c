#include <stdio.h>
 
int main() {
 
    int vet[5], i, totpar=0;
    for(i=0; i<5; i++){
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0){
            totpar++;
        }
    }
    printf("%d valores pares\n", totpar);
 
    return 0;
}
