#include <iostream>

using namespace std;

template<class T>
int swap(int a, int b){
    T t = move(a);
    a = move(b);
    b = move(t);
    return 0;
}

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if(a > b){
        swap(a, b);
    }
    if(b > c){
        swap(b, c);
    }
    if(a > b){
        swap(a, b);
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}