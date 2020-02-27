#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int max;
    int min;
    cin >> n;
    vector<int> a(n);
    long long result = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        result += a[i]; //合計
    }
    min = a[0];
    max = a[0];
    for(int i = 0; i < n; i++){
        if(min > a[i]){
            min = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << min << " ";
    cout << max << " ";
    cout << result << endl;
}