#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> t(4);
    vector<int> n(4);
    for(int i = 0; i < 4; i++){
        cin >> t[i] >> n[i];
    }
    for(int i = 0; i < 4; i++){
        if(t[i] == 1){
            cout << n[i] * 6000 << endl;
        }
        if(t[i] == 2){
            cout << n[i] * 4000 << endl;
        }
        if(t[i] == 3){
            cout << n[i] * 3000 << endl;
        }
        if(t[i] == 4){
            cout << n[i] * 2000 << endl;
        }
    }
    return 0;
}