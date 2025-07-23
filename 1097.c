#include <stdio.h>
 
int main() {
 
    int i, j=7, cont;
    for(i=1; i<10; i += 2){
       for(cont=0; cont<3; cont++){
            printf("I=%d J=%d\n", i, j);
            j--;
       }
       j += 5;
    }
 
    return 0;
}
