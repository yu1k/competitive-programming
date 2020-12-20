#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int h;
    int w;
    cin >> h >> w;
    
    int hw = (h * w);
    vector<int> a(hw);
    int n = 10000;
    for(int i = 0; i < hw; i++){
        cin >> a[i];
        if(a[i] < n){
            n = a[i];
        }
    }
    
    int result = 0;
    for(int i = 0; i < (h * w); i++){
        result += (a[i] - n);
    }
    cout << result << endl;
    return 0;
}