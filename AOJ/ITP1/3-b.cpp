#include <iostream>

using namespace std;

int main(){
    int x;
    int i = 0;
    while(1){
    cin >> x;
    if(x == 0) break;
    i++;
    cout << "Case" << " " << i << ":" << " " << x << endl;
    }
}