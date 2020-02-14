/* 解説通りに解いた方法*//*
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int sum = min((a - b), c);
    int result = c - sum;
    cout << result << endl;
}
**************************************/


#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int result = c - (a - b);
    if(result < 0){
        cout << 0 << endl;
    }
    else{
        cout << result << endl;
    }
}