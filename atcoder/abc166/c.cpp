#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> h(100010);
    vector<int> num(100010);
    for(int i = 1; i < n + 1; i++){
        cin >> h[i];
        num[i] = 0;
    }
    vector<int> a(m);
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> a[i];
        cin >> b[i];
        num[a[i]] = max(num[a[i]], h[b[i]]);
        num[b[i]] = max(num[b[i]], h[a[i]]);
    }
    int result = 0;
    for(int i = 1; i < n + 1; i++){
        result += h[i] > num[i];
    }
    cout << result << endl;
    return 0;
}