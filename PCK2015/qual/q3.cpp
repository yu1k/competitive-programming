#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int d;
    int l;
    cin >> d >> l;
    cout << (d / l) + (d % l) << endl;
}