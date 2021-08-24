// https://onlinejudge.u-aizu.ac.jp/beta/review.html#n_online_judge_2021_pck2019re/5819004
#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int result = 0;
    if(n >= 65 && n <= 90){
        result = 1;
    } else if(n >= 97 && n <= 122){
        result = 2;
    } else{
        result = 0;
    }
    printf("%d\n", result);
    return 0;
}
