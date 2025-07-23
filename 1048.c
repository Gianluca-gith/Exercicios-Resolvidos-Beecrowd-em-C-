#include <stdio.h>
#define pi 3.14159

int main(){

    float salario, reajuste, perc;
    scanf ("%f", &salario);
    if (salario >= 0 && salario <= 400){
        perc = 15;
        reajuste = salario * perc / 100;
        salario += reajuste;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %\n", perc);
    }else{
        if(salario > 400 && salario <= 800){
            perc = 12;
            reajuste = salario * perc / 100;
            salario += reajuste;
            printf("Novo salario: %.2f\n", salario);
            printf("Reajuste ganho: %.2f\n", reajuste);
            printf("Em percentual: %.0f %\n", perc);
        }else{
            if(salario > 800 && salario <= 1200){
                perc = 10;
                reajuste = salario * perc / 100;
                salario += reajuste;
                printf("Novo salario: %.2f\n", salario);
                printf("Reajuste ganho: %.2f\n", reajuste);
                printf("Em percentual: %.0f %\n", perc);
            }else{
                if(salario > 1200 && salario <= 2000){
                    perc = 7;
                    reajuste = salario * perc / 100;
                    salario += reajuste;
                    printf("Novo salario: %.2f\n", salario);
                    printf("Reajuste ganho: %.2f\n", reajuste);
                    printf("Em percentual: %.0f %\n", perc);
                }else{
                    if(salario > 2000){
                        perc = 4;
                        reajuste = salario * perc / 100;
                        salario += reajuste;
                        printf("Novo salario: %.2f\n", salario);
                        printf("Reajuste ganho: %.2f\n", reajuste);
                        printf("Em percentual: %.0f %\n", perc);
                    }
                }
            }
        }
    }

    return 0;
}
