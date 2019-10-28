#include <iostream>

using namespace std;

int main(){
    string s;
    //sを定義
    cin >> s;
    //標準入力

    bool isgood = true;
    if (s[0] == s[1]) isgood = false;
    if (s[1] == s[2]) isgood = false;
    if (s[2] == s[3]) isgood = false;
    //隣り合う文字を比較して判定
    if (isgood){
        cout << "Good" << endl;
    } else {
        cout << "Bad" << endl;
    }
}
