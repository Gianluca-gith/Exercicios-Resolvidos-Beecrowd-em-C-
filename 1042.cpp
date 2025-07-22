#include <stdio.h>
 
int main() {
 
    int a, b, c, aux, i, l1, l2, l3;
    scanf("%d %d %d", &a, &b, &c);
    l1 = a;
    l2 = b; 
    l3 = c;
    for(i=0; i<2; i++){
        if(a>b){
            aux = b;
            b = a;
            a = aux;
        }
        if(b>c){
            aux = c;
            c = b;
            b = aux;
        }
    }
    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n%d\n%d\n%d\n", l1, l2, l3);
    
    return 0;
}
