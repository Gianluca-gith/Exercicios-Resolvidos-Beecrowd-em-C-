#include <stdio.h>
 
int main() {
 
    int vet[5], i, totpar=0, totim=0, totpo=0, totne=0;
    for(i=0; i<5; i++){
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0){
            totpar++;
        }else{
            totim++;
        }
        if(vet[i] > 0){
            totpo++;
        }else if(vet[i] < 0){
            totne++;
        }
    }
    printf("%d valor(es) par(es)\n", totpar);
    printf("%d valor(es) impar(es)\n", totim);
    printf("%d valor(es) positivo(s)\n", totpo);
    printf("%d valor(es) negativo(s)\n", totne);
 
    return 0;
}
