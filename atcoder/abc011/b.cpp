#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(i == 0){
            if(s[i] >= 97){
                s[i] -= 97 - 65;
            }
        }
        else{
            if(s[i] <= 90){
                s[i] += 97 - 65;
            }
        }
    }
    cout << s << endl;
}
