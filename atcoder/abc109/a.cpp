#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    cin >> A >> B;
    if(A * B % 2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
