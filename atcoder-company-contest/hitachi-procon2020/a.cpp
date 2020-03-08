#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string hitachi = "";
    string result = "No";
    for(int i = 0; i < 5; i++){
        hitachi += "hi";
        if(hitachi == s){
            result = "Yes";
        }
    }
    cout << result << endl;
}