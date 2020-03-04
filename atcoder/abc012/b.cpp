#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int h;
    int m;
    int s;
    h = n / 3600;
    m = (n / 60) % 60;
    s = n % 60; 
    if(h < 10){
        cout << 0 << h << ":";
    }
    else{
        cout << h << ":";
    }
    if(m < 10){
        cout << 0 << m << ":";
    }
    else{
        cout << m << ":";
    }
    if(s < 10){
        cout << 0 << s <<endl;
    }
    else{
        cout << s <<endl;
    }
}