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
    cin >> a >> b;
    swap(a, b);
    cout << a << endl;
    return 0;
}