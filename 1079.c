#include <stdio.h>
 
int main() {
 
    int n, i;
    float t=0, v1=0, v2=0, v3=0, media=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%f %f %f", &v1, &v2, &v3);
        media = ((v1*2) + (v2*3) + (v3*5)) / 10;
        printf("%.1f\n", media);
    }
 
    return 0;
}
