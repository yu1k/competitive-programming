#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> l(n);
    int result = 0;
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    sort(l.begin(), l.end(), greater<int>());
    for(int i = 0; i < k; i++){
        result = result + l[i];
    }
    cout << result << endl;
}