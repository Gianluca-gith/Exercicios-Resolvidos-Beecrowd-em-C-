#include <stdio.h>
#include <string.h>
 
int main() {
 
    char nome[20];
    double sal, total;
    scanf("%s", nome);
    scanf("%lf", &sal);
    scanf("%lf", &total);
    printf("TOTAL = R$ %.2lf\n", sal + (total * 0.15));
 
    return 0;
}
