#include <stdio.h>
 
int main() {
 
    int horas, velocidade;
    float litros;
    scanf("%d", &horas);
    scanf("%d", &velocidade);
    litros = (velocidade * horas) / 12.0;
    printf("%.3f\n", litros);
 
    return 0;
}
