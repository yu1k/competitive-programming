#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cout << "error" << endl;
            return 0;
        }
    }
    int result = stoi(s) * 2;
    cout << result << endl;
}