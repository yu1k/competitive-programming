#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    for(int i = 0; i < 1010; i++){
        double result1 = i * 0.08;
        double result2 = i * 0.1;
        if(floor(result1) == a && floor(result2) == b){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}