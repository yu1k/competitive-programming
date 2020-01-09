#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d = 1;
    int e = 1;
    int f = 1;
    cin >> a >> b >> c;
    if(a < b){
        d++;
    }
    if(a < c){
        d++;
    }
    if(b < a){
        e++;
    }
    if(b < c){
        e++;
    }
    if(c < a){
        f++;
    }
    if(c < b){
        f++;
    }
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
}


//別の書き方
#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d = 1;
    int e = 1;
    int f = 1;
    cin >> a >> b >> c;
    if(a < b) d++;
    if(a < c) d++;
    if(b < a) e++;
    if(b < c) e++;
    if(c < a) f++;
    if(c < b) f++;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
}
