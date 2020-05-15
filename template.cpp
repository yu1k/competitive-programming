//テンプレート
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>

#define mod 1000000007
#define ab 123456789
#define ba 987654321
#define ll long long 
#define rep(i, n) for(int i = 0; i < n; i++)
#define str(i, s) for(int i = 0; i < s.length(); i++)

using namespace std;

int main(){
    cout << "Hello World!" << endl;
}

//入力数が指定されてない入力
while(cin >> n){ ... }

//出力
cout << "Hello, World" << endl;
//小数点第一位まで出力
printf("%.1f\n", a); //doubleで入力

//競プロで使う変数名の意味
sum == summation; //総和

//文字列の長さを測って出力
string s;
int a = s.length();
cout << a << endl;

//size(), charなどの配列のサイズを取得するとき.
cout << c.size() << endl;

//文字列の長さを取得するとき.
cout << s.length() << endl;

//配列で受け取った文字，a[i]を文字コードに変換.
string s = to_string(a[i]);

//s[0]が大文字か判定．小文字:0, 大文字:0以外を返す．
isupper(s[0]);

//大きいものを出力
cout << max({a, b, c}) << endl;

//小さいものを出力
cout << min({a, b, c}) << endl;

//小数点以下を切り捨てる.この関数を使う場合はcmathをincludeする.
cout << ceil(a) << endl;

//絶対値を取得して出力, この関数を使うときは cmath をincludeする.
cout << abs(a) << endl;

//a以下で最大の整数値を得る, 
cout << floor(a) << endl;

//aのb乗を求める, この関数を使うときはcmathをincludeする.
cout << pow(a, b) << endl;

//複素数値の平方根を得る, aの平方根を出力. この関数を使うときはcmathをincludeする.
cout << sqrt(a) << endl;

//文字. stringをincludeして使う
//文字列sを数に変換.
cout << stoi(s) << endl;

//stringで受け取った文字を大文字に変換..aをAに変換する.
a[0] = a[0] + 'A' - 'a';

//1番目の部分文字列を取得
cout << s.substr(1) << endl;

//1番目から2番目の部分文字列を取得
cout << s.substr(1, 2) << endl;

//三項演算子, aとbが等しかったらYes.等しくなかったらNo.
cout << (a == b?"Yes":"No") << endl;

//文字列の末尾に's'を付け足す
s1.push_back('s');

//ソートの方法を見やすくまとめた.
//昇順ソート
sort(s.begin(), s.end());

//降順ソート(reverse関数を用いた方法)
sort(s.begin(), s.end());
reverse(s.begin(), s.end());

//降順ソート(greaterクラスを用いて一行に収める方法)
sort(s.begin(), s.end(), greater<int>());

//M_PI. 円周率, πを使える. このライブラリを使うときは cmath をincludeする.
cout << r * r * M_PI << endl;

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

//降順ソートが1行で書ける降順ソート
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
    cin >> a;
    rep(i, 100){
        cout << a << endl;
    }
}
