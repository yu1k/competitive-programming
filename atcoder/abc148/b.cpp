#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    string t;
    cin >> n;
    cin >> s >> t;
    string result;
    for(int i = 0; i < n; i++){
        result = result + s[i] + t[i];
    }
    cout << result << endl;
}
