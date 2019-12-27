#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int result = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+'){
            result++;
        }
        else{
            result--;
        }
    }
    cout << result << endl;
}
