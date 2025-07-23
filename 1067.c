#include <stdio.h>
 
int main() {
 
    int i, valor;
    scanf("%d", &valor);
    for(i=1; i<=valor; i += 2){
        printf("%d\n", i);
    }
 
    return 0;
}
