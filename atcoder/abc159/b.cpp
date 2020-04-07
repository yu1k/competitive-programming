#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string result = "Yes";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != s[s.length() - 1 - i]){
            result = "No";
        }
    }
    for(int i = 0; i < (s.length() - 1) / 2; i++){
        if(s[i] != s[(s.length() - 1) / 2 - 1 - i]){
            result = "No";
        }
    }
    for(int i = (s.length() + 3) / 2 - 1; i < s.length(); i++){
        if(s[i] != s[s.length() - 1 - i]){
            result = "No";
        }
    }
    cout << result << endl;
}
