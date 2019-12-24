#include <iostream>

using namespace std;

int main(){
    string s;
    string t;
    cin >> s >> t;
    int result = 0;
    if(s[0] == t[0]){
        result++;
    }
    if(s[1] == t[1]){
        result++;
    }
    if(s[2] == t[2]){
        result++;
    }
    cout << result << endl;
}
