#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    int result = 0;
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            result += d[i] * d[j];
        }
    }
    cout << result << endl;
}
