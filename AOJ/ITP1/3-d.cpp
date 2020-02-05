#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int result = 0;
    for(int i = a; i <= b; i++){
        if(c % i == 0){
            result++;
        }
    }
    cout << result << endl;
}