#include <iostream>

using namespace std;

int main(){
    int h;
    int n;
    cin >> h >> n;
    int result = 0;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        result = result + a;
    }
    if(result >= h){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
