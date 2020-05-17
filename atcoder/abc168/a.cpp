#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string n;
    cin >> n;
    string result = "bon";
    reverse(n.begin(), n.end());
    if(n[0] == '2' || n[0] == '4' || n[0] == '5' || n[0] == '7' || n[0] == '9'){
        result = "hon";
    }
    else if(n[0] == '0' || n[0] == '1' || n[0] == '6' || n[0] == '8'){
        result = "pon";
    }
    cout << result << endl;
    return 0;
}