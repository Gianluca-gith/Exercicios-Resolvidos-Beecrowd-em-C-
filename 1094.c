#include <stdio.h>
 
int main() {
 
    int i, n, quantia, total=0, totcoelho=0, totsapo=0, totrato=0;
    char tipo;
    float perccoelho=0, percsapo=0, percrato=0; 
    
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %c", &quantia, &tipo);
        total += quantia;
        switch(tipo){
            case 'C': totcoelho += quantia; break;
            case 'S': totsapo += quantia; break;
            case 'R': totrato += quantia; break;
        }
    }
    perccoelho = (totcoelho * 100.0) / total;
    percsapo = (totsapo * 100.0) / total;
    percrato = (totrato * 100.0) / total;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totcoelho);
    printf("Total de ratos: %d\n", totrato);
    printf("Total de sapos: %d\n", totsapo);
    printf("Percentual de coelhos: %.2f %%\n", perccoelho);
    printf("Percentual de ratos: %.2f %%\n", percrato);
    printf("Percentual de sapos: %.2f %%\n", percsapo);
 
    return 0;
}
