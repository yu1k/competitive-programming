#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> d(k);
    vector<int> a(d);
    vector<int> num(n);
    for(int i = 0; i < k; i++){
        cin >> d[i];
        for(int j = 0; j < d[i]; j++){
            cin >> a[i];
            num[a[i] - 1] = 1;
        }
    }
    int result = 0;
    for(int i = 0; i < n; i++){
        if(num[i] == 0){
            result++;
        }
    }
    cout << result << endl;
    return 0;
}