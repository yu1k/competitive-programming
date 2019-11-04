//このコードだとACできなかった
/*
#include <iostream>

using namespace std;

int main(){
    char X = "ABCDE";
    cin >> X;
    for(int i = 0; i < 4; i++){
        if(X[0] == X){
            cout << i + 1 << endl;
        }
    }
} */

//こっちを提出してみる
#include <iostream>

using namespace std;

int main(){
    char X;
    cin >> X;
    cout << X - 'A' + 1 << endl;
}
