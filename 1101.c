#include <stdio.h>
 
int main() {
 
    int v1, v2, aux, soma=0, i;
    
    do{
        scanf("%d %d", &v1, &v2);
        if(v1 == 0 || v1 < 0 || v2 == 0 || v2 < 0){
            return 0;
        }else{
            soma=0;
            if(v1 > v2){
                aux = v1;
                v1 = v2;
                v2 = aux;
            }
            for(i=v1; i<= v2; i++){
                printf("%d ", i);
                soma += i;
                if(i == v2){
                    printf("Sum=%d\n", soma);
                }
            }        
        }
        
    }while(1);    
 
    return 0;
}
