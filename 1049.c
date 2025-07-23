#include <stdio.h>
#include <string.h>
 
int main() {
    char nome1[20], nome2[20], nome3[20];
    scanf("%s", nome1);
    scanf("%s", nome2);
    scanf("%s", nome3);
    
    if(strcmp(nome1, "vertebrado") == 0){
        if(strcmp(nome2, "ave") == 0){
            if(strcmp(nome3, "carnivoro") == 0){
                printf("aguia\n");
            }
            if(strcmp(nome3, "onivoro") == 0){
                printf("pomba\n");
            }
        }
        if(strcmp(nome2, "mamifero") == 0){
            if(strcmp(nome3, "herbivoro") == 0){
                printf("vaca\n");
            }
            if(strcmp(nome3, "onivoro") == 0){
                printf("homem\n");
            }
        }
    }
    if(strcmp(nome1, "invertebrado") == 0){
        if(strcmp(nome2, "inseto") == 0){
            if(strcmp(nome3, "hematofago") == 0){
                printf("pulga\n");
            }
            if(strcmp(nome3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        if(strcmp(nome2, "anelideo") == 0){
            if(strcmp(nome3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            if(strcmp(nome3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}
