#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += p[i];
    }
    cout << sum << endl;
    return 0;
}