#include <stdio.h>

int main(int argc, char *argv[]){
    int a[7];
    int b[7];
    for(int i = 0; i < 7; i++){
        scanf("%d%d", &a[i], &b[i]);
    }
  
    for(int i = 0; i < 7; i++){
        printf("%d\n", a[i] - b[i]);
    }
    return 0;
}
