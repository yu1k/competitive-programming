#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int result = 0;
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[s.size() - i -1]) result++;
        }
        cout << result << endl;
}
