#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a1(n);
    vector<int> a2(n);
    for(int i = 0; i < n; i++){
        cin >> a1[i];
        if(i == 0){
            continue;
        }
        else{
            a1[i] += a1[i - 1];
        }
    }
    for(int i = 0; i < n; i++){
        cin >> a2[i];
    }

    for(int i = 0; i < n - 1; i++){
        a2[n - 2 - i] += a2[n - 1 - i];
    }
    int result = 0;
    for(int i = 0; i < n; i++){
        result = max(result, a1[i] + a2[i]);
    }
    cout << result << endl;
}
