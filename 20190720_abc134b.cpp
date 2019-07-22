#include <iostream>

using namespace std;

int main(){
    int N;
    //N本の木を定義
    int D;
    //Dを定義
    cin >> N >> D;
    //N,Dの順で標準入力
        cout << (N + D * 2) / (D * 2 +1) << endl;
        //N + 2D / 2D +1を計算して出力
}
