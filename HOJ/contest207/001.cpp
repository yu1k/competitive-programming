#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int num = s.length();
    if(num <= 1){
        cout << "safe" << endl;
    }
    else{
        if(s[0] == '1' && s[1] == '1'){
            cout << "unsafe" << endl;
        }
        else{
            if(s[1] == '1' && s[2] == '1'){
                cout << "unsefe" << endl;
            }
            else{
                cout << "safe" << endl;
            }
        }
    }
    return 0;
}