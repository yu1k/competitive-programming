#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ramen = 700;
    int egg = 100;
    int roasted = 100;
    int green_onions = 100;
    int result = 700;

    if(s[0] == 'o') result = result + egg;
    if(s[1] == 'o') result = result + roasted;
    if(s[2] == 'o') result = result + green_onions;
    cout << result << endl;
}