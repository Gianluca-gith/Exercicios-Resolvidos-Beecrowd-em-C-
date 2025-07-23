#include <stdio.h>
 
int main() {
 
    int n, x, y, i;
    float res;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            res = (float)x / (float)y;
            printf("%.1f\n", res);
        }
    }
 
    return 0;
}
