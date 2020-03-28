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
    }

    sort(a.begin(), a.end(), greater<int>());
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << a[1] << endl;
}