#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

int main(){
    int s;
    int w;
    cin >> s >> w;
    if(w >= s){
        cout << "unsafe" << endl;
    }
    else{
        cout << "safe" << endl;
    }
}