#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int tmp = 0;
    for(int i = 0; i < n; i++){
        tmp++;
    }
    if(tmp % 2 == 0){
        cout << "White" << endl;
    }
    else{
        cout << "Black" << endl;
    }
    return 0;
}