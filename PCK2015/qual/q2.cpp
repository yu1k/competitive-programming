#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> h(2);
    vector<int> k(2);
    for(int i = 0; i < 2; i++){
        cin >> h[i];
    }
    for(int i = 0; i < 2; i++){
        cin >> k[i];
    }
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    int hiroshi = (h[0] * a + h[1] * b + (h[0] / 10) * c +(h[1] / 20) * d);
    int kenjiro = (k[0] * a + k[1] * b + (k[0] / 10) * c +(k[1] / 20) * d);
    if(hiroshi > kenjiro){
        cout << "hiroshi" << endl;
    }
    else if(hiroshi < kenjiro){
        cout << "kenjiro" << endl;
    }
    else{
        cout << "even" << endl;
    }
}