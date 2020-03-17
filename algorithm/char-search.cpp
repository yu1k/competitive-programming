#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int result = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a'){
            result++;
        }
    }
    cout << result << endl;
}