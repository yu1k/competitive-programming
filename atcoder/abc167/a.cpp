#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    int slen = s.length();
    t.erase(slen);
    if(s == t){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}