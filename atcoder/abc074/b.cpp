#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    int result = 0;
    for(int i = 0; i < n; i++){
        result += min(x[i], k - x[i]) * 2;
    }
    cout << result << endl;
}