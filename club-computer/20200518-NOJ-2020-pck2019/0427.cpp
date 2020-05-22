#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int result = (x.back() - x[0] + 1) / 2;
    cout << result << endl;
    return 0;
}