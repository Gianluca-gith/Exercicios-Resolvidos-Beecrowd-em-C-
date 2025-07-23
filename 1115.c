#include <stdio.h>
 
int main() {
 
    int x, y;
    do{
        scanf("%d %d", &x, &y);
        if(x != 0 && y != 0){
            if(x > 0 && y > 0){
                printf("primeiro\n");
            }else{
                if(x < 0 && y > 0){
                    printf("segundo\n");
                }else{
                    if(x < 0 && y < 0){
                        printf("terceiro\n");
                    }else{
                        if(x > 0 && y <0){
                            printf("quarto\n");
                        }
                    }
                }
            }
        }else{
            return 0;
        }
    }while(1);
 
    return 0;
}
