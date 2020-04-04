#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> n(5);
    for(int i = 0; i < 5; i++){
        cin >> n[i];
    }
    int total = 0;
    for(int i = 0; i < 5; i++){
        if(n[i] < 40){
            total += 40; //40点以下は一律40点としてカウント
        }
        else{
            total += n[i];
        }
    }
    cout << total / 5 << endl;
}
