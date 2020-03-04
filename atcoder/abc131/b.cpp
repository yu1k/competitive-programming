#include <iostream>

using namespace std;

int main(){
    int n;
    int a;
    cin >> n >> a;
    int l =  a;
    int all = a + n - 1;
    int ate;
    if(all < 0){
        ate = all;
    }
    else if(l > 0){
        ate = l;
    }
    else{
        ate = 0;
    }
    int result = (all + l) * (all - l + 1) / 2 - ate;
    cout << result << endl;
}
