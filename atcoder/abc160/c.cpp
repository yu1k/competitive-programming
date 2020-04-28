#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int k;
    int n;
    cin >> k >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int len = k - (a[n - 1] - a[0]);
    for(int i = 0; i < n - 1; i++){
        len = max(len, a[i + 1] - a[i]);
    }
    int result = k - len;
    cout << result << endl;
}