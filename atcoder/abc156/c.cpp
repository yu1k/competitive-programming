#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    int result = 1000000000;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < 100; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum = sum + (x[j] - i) * (x[j] - i);
        }
        result = min(result, sum);
    }
    cout << result << endl;
}