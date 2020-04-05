#include <iostream>

using namespace std;

int main(){
    int s;
    int l;
    int r;
    cin >> s >> l >> r;
    int result = s;
    if(s < l){
        result = l;
    }
    else if(r < s){
        result = r;
    }
    cout << result << endl;
}
