#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 0; i < 1010; i++){
        double result1 = i * 0.08;
        double result2 = i * 0.1;
        if(floor(result1) == a && floor(result2) == b){
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}