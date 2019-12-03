#include <iostream>

using namespace std;

int main(){
    int result;
    string s;
    cin >> s;
    if(s[0] == '1'){
        result++;
    }
    if(s[1] == '1'){
        result++;
    }
    if(s[2] == '1'){
        result++;
    }
    cout << result << endl;
}
