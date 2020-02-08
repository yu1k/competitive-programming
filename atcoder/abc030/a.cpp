#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    //double takahashi = 1.0 * a * d;
    //double aoki = 1.0 * b * c;
    cin >> a >> b >> c >> d;
    if(d * a < b * c){
        cout << "TAKAHASHI" << endl;
    }
    else if(d * a > b * c){
        cout << "AOKI" << endl;
    }
    else if(d * a == b * c){
        cout << "DRAW" << endl;
    }
}
