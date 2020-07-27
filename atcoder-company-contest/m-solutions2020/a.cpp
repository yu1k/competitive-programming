#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int x;
    cin >> x;
    string result = "";
    if(x >= 400 && x <= 599){
        result = "8";
    }
    if(x >= 600 && x <= 799){
        result = "7";
    }
    if(x >= 800 && x <= 999){
        result = "6";
    }
    if(x >= 1000 && x <= 1199){
        result = "5";
    }
    if(x >= 1200 && x <= 1399){
        result = "4";
    }
    if(x >= 1400 && x <= 1599){
        result = "3";
    }
    if(x >= 1600 && x <= 1799){
        result = "2";
    }
    if(x >= 1800 && x <= 1999){
        result = "1";
    }
    cout << result << endl;
    return 0;
}
