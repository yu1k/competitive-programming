#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int result = (((n * 2) + 2) / 3);
    if(n == 1){
        cout << 2 << endl;
    }
    else{
        cout << result << endl;
    }
    return 0;
}