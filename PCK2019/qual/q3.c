// 問題3 - 2の累乗
// https://onlinejudge.u-aizu.ac.jp/beta/review.html#n_online_judge_2021_pck2019re/5819040
#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int p = 2;
    for(int i = 0; i < 1000001; i++){
        if(p > n){
            p = p / 2;
            break;
        }
        p = p * 2;
    }
    printf("%d\n", p);
    return 0;
}
