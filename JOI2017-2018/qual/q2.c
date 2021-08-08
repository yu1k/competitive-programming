#include <stdio.h>

int max(long long x, long long y){
    return x < y ? y : x;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int a[101];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int count = 0; int result = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            count++;
        }
        else{
            result = max(count, result);
            count = 0;
        }
    }
    result = max(count, result);
    printf("%d\n", result + 1);
    return 0;
}