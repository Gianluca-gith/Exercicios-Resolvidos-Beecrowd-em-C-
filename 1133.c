#include <stdio.h>
 
int main() {
 
    int x, y, aux, i;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }
    for(i = x+1; i<y; i++){
        if (i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }
 
    return 0;
}
