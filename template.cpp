//テンプレート
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

}


//文字列の長さを測る
string s;
int a = strlen(s);


//大きいものを出力
cout << max({a, b, c}) << endl;

//小さいものを出力
cout << min({a, b, c}) << endl;


//入力された3つの数字の中央値を出力するコード/ソートのテンプレート
//https://atcoder.jp/contests/abc019/tasks/abc019_1
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> S(3);
    for(int i = 0; i < 3; i++){
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    cout << S[1] << endl;
}
