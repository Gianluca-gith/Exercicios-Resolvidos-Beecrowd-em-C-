#include <stdio.h>
 
int main() {
 
    int n, i, j = -1, aux;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        j = j + 2;
        printf("%d ", j);
        j++;
        printf("%d ", j);
        j++;
        printf("%d ", j);
        printf("PUM\n");
    }
 
    return 0;
}
