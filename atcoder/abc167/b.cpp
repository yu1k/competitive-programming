#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int k;
    cin >> a >> b >> c >> k;
    int result = 0;
    if(k < a){
        result = k;
    }
    else if(a <= k && b >= k){
        result = a;
    }
    else{
        result = a - (k - a - b);
    }
    cout << result << endl;
    return 0;
}