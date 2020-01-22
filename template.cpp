//テンプレート
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

#define ll long long 
#define rep(i, n) for(int i = 0; i < n; i++)

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


//絶対値を取得
#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    cout << abs(a) << endl;
}


//charインクリメントできる
#include <iostream>

using namespace std;

int main(){
    char a;
    cin >> a;
    a++;
    cout << a << endl;
}


//昇順ソート
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


//降順ソート
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a(5);
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    cout << a[0] << endl;
}

//sort();が1行で書ける降順ソート
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a(5);
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    cout << a[0] << endl;
}

//repマクロを使ってみた
#include <iostream>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main(){
    int a;
    cin >> ;
    rep(i, 100){
        cout << a << endl;
    }
}
