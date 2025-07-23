#include <stdio.h>
 
int main() {
 
    int i, tot=0;
    float numeros[6];
    for (i=0; i<6; i++){
        scanf("%f", &numeros[i]);
        if (numeros[i] > 0){
            tot++;
        }
    }
    printf("%d valores positivos\n", tot);
 
    return 0;
}
