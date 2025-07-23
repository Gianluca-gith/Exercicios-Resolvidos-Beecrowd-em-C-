#include <stdio.h>
 
int main() {
 
    int v1, v2;
    do{
        scanf("%d %d", &v1, &v2);
        if(v1 > v2){
            printf("Decrescente\n");
        }else{
            if(v1 < v2){
                printf("Crescente\n");
            }else{
              return 0;  
            }
        }
    }while(1);
 
    return 0;
}
