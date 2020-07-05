#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    string a;
    int ca = 0;
    int cb = 0;
    int cc = 0;
    int cd = 0;
    string ac = "AC";
    string wa = "WA";
    string tle = "TLE";
    string re = "RE";
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == ac){
            ca++;
        }
        else if(a == wa){
            cb++;
        }
        else if(a == tle){
            cc++;
        }
        else if(a == re){
            cd++;
        }
    }

    cout << "AC" << " " << "x" << " " << ca << endl;
    cout << "WA" << " " << "x" << " " << cb << endl;
    cout << "TLE" << " " << "x" << " " << cc << endl;
    cout << "RE" << " " << "x" << " " << cd << endl;
    return 0;
}