#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    int result = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A' || s[i] == 'T' || s[i] == 'C' || s[i] == 'G'){
            count++;
        }
        else{
            result = max(count, result);
            count = 0;
        }
    }
    cout << max(result, count) << endl;
}