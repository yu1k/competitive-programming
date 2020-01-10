//vectorを使ったコード
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i]--;
    }
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    vector<int> c(n - 1);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    int result = 0;
    for(int i = 0; i < n; i++){
        result += b[a[i]];
        if(i > 0 && a[i] == a[i - 1] + 1){
            result += c[a[i - 1]];
        }
    }
    cout << result << endl;
}
