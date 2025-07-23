#include <stdio.h>
 
int main() {
 
    int i, valor, aux;
    scanf("%d", &valor);
    if(valor % 2 == 0){
        aux = valor + 1;
    }else{
        aux = valor;
    }
    for(i=0; i<6; i++){
        printf("%d\n", aux);
        aux += 2;
    }
 
    return 0;
}
