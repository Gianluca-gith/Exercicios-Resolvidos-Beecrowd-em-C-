#include <stdio.h>
 
int main() {
 
    int i, x, y, soma=0;
    scanf("%d", &x);
    scanf("%d", &y);
    for(i=y+1; i<x; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
 
    return 0;
}
