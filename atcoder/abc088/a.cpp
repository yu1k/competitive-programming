#include <iostream>

using namespace std;

int main(){
    int n;
    int a;
    cin >> n;
    cin >> a;
    if(n % 500 <= a){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}