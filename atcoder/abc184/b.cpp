#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    int x;
    cin >> n >> x;
    string s;
    cin >> s;

    int count = x;
    for(int i = 0; i < n; i++){
        if(s[i] == 'o'){
            count++;
        }
        if(s[i] == 'x'){
            if(count == 0){
                continue;
            }
            count--;
        }
    }
    cout << count << endl;
    return 0;
}