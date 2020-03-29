#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end(), greater<int>());
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
    }
    int result = sum - (p[0] / 2);
    cout << result << endl;
}