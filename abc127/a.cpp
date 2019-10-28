#include <iostream>
 
using namespace std;
 
int main(){
    int A;
    //高橋くんの年齢
    int B;
    //観覧車の料金
    cin >> A >> B;
    if (A >= 13){
        cout << B << endl;
        //年齢が13歳以上の場合の結果を出力する処理
    } else if (A >= 6 && A <= 12){
        cout << B / 2 << endl;
        //年齢が6歳以上かつ12歳以下の場合の結果を出力する処理 
    } else if (0 <= 5){
        cout << 0 << endl;
        //年齢が5歳以下の場合の結果を出力する処理
    }
}
