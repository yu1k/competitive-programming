#include <iostream>
 
using namespace std;
 
int main(){
    int X;
    //X
    int A;
    //A
    cin >> X >> A;
    //X,Aの順で標準入力
    if (X < A){
        cout << 0 << endl;
        //XがA未満の場合0と出力する処理
    } else if (A <= X){
        cout << 10 << endl;
        //XがA以上の場合出力する処理
    }
}
