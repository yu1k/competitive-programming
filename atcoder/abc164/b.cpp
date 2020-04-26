#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    int countc = 0;
    int counta = 0;
    for(int i = 0; i < 101; i++){
        c -= b;
        countc++;
        if(c <= 0){
            break;
        }
    }
    for(int i = 0; i < 101; i++){
        a -= d;
        counta++;
        if(a <= 0){
            break;
        }
    }
    if(countc <= counta){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}