#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    int slen = s.length();
    int tlen = t.length();
    int count = 0;
    for(int i = i; i < slen; i++){
        if(s[i] != t[i]){
            count++;
        }
        else{
            continue;
        }
    }
    cout << count << endl;
    return 0;
}