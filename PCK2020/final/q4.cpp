#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> str(n);
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }

    char min_char = "z";
    for(int i = 0; i < n; i++){
        min_char = min(min_char, str[i]);
    }

    int len = 0;
    int result = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == min_char){
            len++;
            result = max(result, len);
        }
        else{
            len = 0;
        }
    }

    for(int i = 0; i < result + 1; i++){
        cout << min_char;
    }
    cout << "" << endl;
    return 0;
}