#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        s[i] = 'A' + (s[i] - 'A' + n) % 26;
    }
    cout << s << endl;
}