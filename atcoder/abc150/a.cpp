#include <iostream>

using namespace std;

int main(){
    int k;
    int x;
    cin >> k >> x;
    if(x <= (500 * k)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
