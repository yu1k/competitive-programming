#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> w(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        sum = sum + w[i];
    }
    int result = sum;
    int b = 0;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        b = b + w[i];
        result = min(result, abs(b - (sum - b)));
    } 
    cout << result << endl;
}