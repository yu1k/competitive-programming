#include <iostream>
#include <string>

using namespace std;

int main(){
    string A;
    string B;
    cin >> A;
    cin >> B;
    if(A.size() > B.size()){
        cout << A << endl;
    }
    else if(A.size() < B.size()){
        cout << B << endl;
    }

}
