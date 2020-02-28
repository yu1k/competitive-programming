#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string result = "No";
    int k = n / 2;
    if(n % 2 == 0 && s.substr(0, k) == s.substr(k, k)){
        result = "Yes";
    }
    cout << result << endl;
}