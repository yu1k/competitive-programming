#include <iostream>

using namespace std;

int main(){
    int N;
    //旅行者の人数N人を定義
    int A;
    //電車を使う場合の一人当たりの料金A円を定義
    int B;
    //タクシーを使う場合の料金B円を定義
    cin >> N >> A >> B;
    //N,A,Bの順で標準入力
    if(N * A < B){
        cout << N * A << endl;
        //N * AよりBの料金の方が高い場合N * Aを出力
    } else if(N * A > B){
        cout << B << endl;
        //BよりN * Aの料金の方が高い場合Bを出力
    } else if(N * A == B){
        cout << B << endl;
        //N * Aの料金とBの料金が同じの時はBを出力
    }
}
