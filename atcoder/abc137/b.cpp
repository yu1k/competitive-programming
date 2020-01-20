#include <iostream>

using namespace std;

int main(){
    int k;
    int x;
    cin >> k >> x;
    for(int i = x - k + 1; i < x + k; i++){
        if(i < x + k - 1){
            cout << i << " " << endl;
        }
        else{
            cout << i << endl;
        }
    }
}
