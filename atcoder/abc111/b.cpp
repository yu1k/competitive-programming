#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 0;
    for(int i = 0; i < 9; i++){
        if(n > i * 111){
            result = i + 1;
        }
    }
    cout << result * 111 << endl;
}