//一個目の解法(そのまま計算する方法)
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << "0.5000000000" << endl;
    }
    else{
        cout << (n + 1) / (2.0000000000 * n) << endl;
    }
}

//二個目の解法(doubleで変換して処理する方法)
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << (double)n / 2 / n << endl;
    }
    else{
        cout << (double)(n + 1) / 2 / n << endl;
    }
}
