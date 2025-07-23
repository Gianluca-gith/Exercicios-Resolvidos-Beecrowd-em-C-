#include <stdio.h>
 
int main() {
 
    float vet[2], media=0;
    int i;
    do{
        scanf("%f", &vet[0]);
        if(vet[0] < 0 || vet[0] > 10){
            printf("nota invalida\n");
        }
    }while(vet[0] < 0 || vet[0] > 10);
    
    do{
        scanf("%f", &vet[1]);
        if(vet[1] < 0 || vet[1] > 10){
            printf("nota invalida\n");
        }
    }while(vet[1] < 0 || vet[1] > 10);
    
    media = (vet[0] + vet[1]) / 2.0;
    printf("media = %.2f\n", media);
 
    return 0;
}
