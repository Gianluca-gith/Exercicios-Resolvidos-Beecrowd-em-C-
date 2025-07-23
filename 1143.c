#include <stdio.h>
 
int main() {
 
    int n, i, j = 0, aux;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        j++;
        printf("%d %d %d\n", j, j*j, j*j*j);
    }
 
    return 0;
}
