#include <stdio.h>
 
int main() {
 
    int i, totpo=0;
    float vet[6], media=0;
    for(i=0; i<6; i++){
        scanf("%f", &vet[i]);
        if(vet[i] > 0){
            totpo++;
            media += vet[i];
        }
    }
    printf("%d valores positivos\n", totpo);
    printf("%.1f\n", media / totpo);
 
    return 0;
}
