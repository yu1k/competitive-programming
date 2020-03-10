#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int l;
    int n;
    cin >> l >> n;
    vector<int> x(l);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    int min_result = 0;
    int max_result = 0;
    for(int i = 0; i < n; i++){
        int min1 = min(l - x[i], x[i]);
        int max1 = max(l - x[i], x[i]);
        min_result = max(min_result, min1);
        max_result = max(max_result, max1);
    }
    cout << min_result << " " << max_result << endl;
}

/** 問題文 **/
/*********************************************************
長さLcmの竿の上をn匹のアリが毎秒1cmのスピードで歩いています。
アリが竿の端に到達すると竿の下に落ちていきます。
また、竿の上は狭くてすれ違えないので、
二匹のアリが出会うと、それぞれ反対を向いて戻っていきます。
各アリについて、現在の竿の左端からの距離x_iはわかりますが、
どちらの方向を向いているのかはわかりません。

すべてのアリが竿から落ちるまでにかかる最小の時間と最大の時間をそれぞれ求めなさい。

制約
1 <= L <= 10^6
1 <= n <= 10^6
0 <= x[i] <= L

『プログラミングコンテストチャレンジブック』(初版)より 
*********************************************************/