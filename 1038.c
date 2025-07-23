#include <stdio.h>
 
int main() {
 
    int item, quant;
    float preco;
    scanf("%d %d", &item, &quant);
    if (item == 1){
        preco = quant * 4.0;
    }else{
        if(item == 2){
            preco = quant * 4.5;
        }else{
            if(item == 3){
                preco = quant * 5.0;
            }else{
                if(item == 4){
                    preco = quant * 2;
                }else{
                    if(item == 5){
                        preco = quant * 1.5;
                    }
                }
            }
        }
    }
    printf("Total: R$ %.2f\n", preco);
 
    return 0;
}
