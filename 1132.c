#include <stdio.h>
 
int main() {
 
    int x, y, aux, soma=0, i;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }
    for(i = x; i<=y; i++){
        if (i % 13 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
 
    return 0;
}
