#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> c(n);
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    for(int i = 0; i < n; i++){
        a[i] = v[i] - c[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int result = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            break;
        }
        result += a[i];
    }
    cout << result << endl;
}