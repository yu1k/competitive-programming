#include <stdio.h>

int main(){
    int a[7];
    int b[7];
    for(int i = 0; i < 7; i++){
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < 7; i++){
        printf("%d\n", a[i] - b[i]);
    }
    return 0;
}