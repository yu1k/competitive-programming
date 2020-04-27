#include <iostream>

using namespace std;

int main(){
    int m;
    int f;
    int b;
    cin >> m >> f >> b;
    if((m + f) < b){
        cout << "NA" << endl;
    }
    else if(b < m){
        cout << 0 << endl;
    }
    else{
        cout << b - m << endl;
    }
}