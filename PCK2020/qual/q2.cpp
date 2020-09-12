#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
​
using namespace std;
​
int main(){
    int w;
    int m;
    int s;
    cin >> w >> m >> s;
    int result = 0;
    if(s <= m && m <= (w - s)){
        result = 1;
    }
    if(m <= s && (w - s) <= m){
        result = 2;
    }
    if(s <= m && (w - s) <= m){
        result = 3 ;
    }
    cout << result << endl;
    return 0;
}