#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    long long result = 0;
    vector<long long> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(h.begin(), h.end(), greater<int>());
    for(int i = k; i < n; i++){
        if(n <= k){
            cout << 0 << endl;
            return 0;
        }
        else{
            result += h[i];
        }
    }
    cout << result << endl;
}