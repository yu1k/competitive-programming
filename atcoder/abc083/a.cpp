#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    if((a + b) < (c + d)){
        cout << "Right" << endl;
    }
    else if((c + d) < (a + b)){
        cout << "Left" << endl;
    }
    else if((a + b) == (c + d)){
        cout << "Balanced" << endl;
    }
}
