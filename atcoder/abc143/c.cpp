#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    int result = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i + 1]){
            continue;
        }
        else{
            result++;
        }
    }
    cout << result << endl;
}