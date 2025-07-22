#include <stdio.h>
 
int main() {
 
    int n, h;
    float v;
    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%f", &v);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", h * v);
    
    return 0;
}
