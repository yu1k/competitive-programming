#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 0;
    if(n >= 65 && n <= 90){ 
        result = 1;
    }
    if(n >= 97 && n <= 122){
        result = 2;
    }
    cout << result << endl;
    return 0;
}