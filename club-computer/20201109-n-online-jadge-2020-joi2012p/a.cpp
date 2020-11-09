//https://onlinejudge.u-aizu.ac.jp/beta/room.html#n_online_judge_2020_joi2012p

#include <stdio.h>

int max(int x, int y){
    if(x > y){
        return x; 
    }
    else{
        return y;
    }
    return 0;
}

int main(void){
    int l; int a; int b; int c; int d;
    scanf("%d", &l);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int japanese = ((a + c - 1) / c);
    int math = ((b + d - 1) / d);
    int result = (l - max(japanese, math));
    printf("%d\n", result);
    return 0;
}