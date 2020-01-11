#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int result = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C'){
            result++;
        }
    }
    cout << result << endl;
}
