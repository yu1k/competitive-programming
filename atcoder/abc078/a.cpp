#include <iostream>

using namespace std;

int main(){
    char X;
    char Y;
    cin >> X >> Y;
    if(X < Y){
        cout << "<" << endl;
    }
    else if(X > Y){
        cout << ">" << endl;
    }
    else{
        cout << "=" << endl;
    }
}
