#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int k;
    cin >> k;
    int a;
    int b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(i % k == 0){
            cout << "OK" << endl;
            return 0;
        }
        else if(i == b){
            cout << "NG" << endl;
            return 0;
        }
    }
}