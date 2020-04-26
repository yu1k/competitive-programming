#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    int result = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != s[i + 1]){
            result++;
        }
    }
    cout << result << endl;
}