#include <stdio.h>
 
int main() {
 
    int valor, horas, min, segs;
    scanf("%d", &valor);
    horas = valor / 3600; 
    min = (valor % 3600) / 60;
    segs = ((valor % 3600) % 60) % 60;

    printf("%d:%d:%d\n", horas, min, segs);


    return 0;
}
