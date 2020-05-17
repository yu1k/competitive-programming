#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main(){
    int k;
    string s;
    cin >> k;
    cin >> s;
    int slen = s.length();
    if(k < slen){
        s.erase(k);
        cout << s << "..." << endl;
        return 0;
    }
    cout << s << endl;
    return 0;
}