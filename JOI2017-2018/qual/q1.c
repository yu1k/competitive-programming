#include <stdio.h>

int min(long long x, long long y){
    return x < y ? x : y;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int a; int b; int c; int d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int result = min(((n + a  - 1) / a * b), ((n + c - 1) / c * d));
    printf("%d\n", result);
    return 0;
}