#include <stdio.h>

int main(){
    int t[4];
    int n[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &t[i]);
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < 4; i++){
        if(t[i] == 1){
            printf("%d\n", n[i] * 6000);
        }
        if(t[i] == 2){
            printf("%d\n", n[i] * 4000);
        }
        if(t[i] == 3){
            printf("%d\n", n[i] * 3000);
        }
        if(t[i] == 4){
            printf("%d\n", n[i] * 2000);
        }
    }
    return 0;
}