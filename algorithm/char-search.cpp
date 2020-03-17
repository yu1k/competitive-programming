/***   探索   ***
文字列の中から特定の文字があった場合, 
その文字が何個あったかをカウントして出力するプログラム*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int result = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a'){
            result++;
        }
    }
    cout << result << endl;
}