#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int y[n];
    int b[n];
    int p[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
        scanf("%d", &b[i]);
        scanf("%d", &p[i]);
    }
    for(int i = 0; i < n; i++){
        int l = (x[i] * b[i]);
        int r = (y[i] * p[i]);
        if(5 <= b[i] && 2 <= p[i]){
            printf("%d\n", ((l + r) * 4) / 5);
        }
        else{
            if(b[i] < 5){
                b[i] = 5;
            }
            if(p[i] < 2){
                p[i] = 2;
            }
            int num = (x[i] * b[i]) + (y[i] * p[i]);
            if((l + r) > ((num * 4) / 5)){
                printf("%d\n", (num * 4) / 5);
            }
            else{
                printf("%d\n", l + r);
            }
        }
    }
    return 0;
}