#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int w;
    int k;
    int d;
    cin >> w >> k >> d;
    if(max(k, w - k) <= d){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
