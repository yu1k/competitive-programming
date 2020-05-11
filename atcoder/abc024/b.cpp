#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> a(n);
    int result = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        result += min(a[i] - a[i - 1], t);
    }
    result += t;
    cout << result << endl;
    return 0;
}