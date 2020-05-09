#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 1;
    for(int i = 0; i < n; i++){
        if(result <= n){
            result = result * 2;
        }
    }
    result = result / 2;
    cout << result << endl;
}