#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int num = 1;
    while(1){
        num = num * 2;
        if(num > n){
            break;
        }
    }
    int result = num / 2;
    cout << result << endl;
    return 0;
}