#include <bits/stdc++.h>

using namespace std;

int main(){
    int A;
    //Aを定義
    int B;
    //Bを定義
    cin >> A >> B;
    if(A % 2 != B % 2){
        cout << "IMPOSSIBLE" << endl;
        //条件を満たす整数が存在しなければ、代わりにIMPOSSIBLEと出力
    } else {
        cout << (A + B) / 2 << endl;
        //A + B して2で割った数字を出力
    }
}
