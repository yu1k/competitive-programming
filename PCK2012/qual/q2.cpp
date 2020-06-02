#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> b(3);
    for(int i = 0; i < 3; i++){
        cin >> b[i];
    }
    string result;
    for(int i = 0; i < 3; i++){
        if(b[0] == 1 && b[1] == 0 && b[2] == 0){
            result = "Close";
            break;
        }
        if(b[0] == 0 && b[1] == 1 && b[2] == 0){
            result = "Close";
            break;
        }
        if(b[0] == 1 && b[1] == 1 && b[2] == 0){
            result = "Open";
            break;
        }
        if(b[0] == 0 && b[1] == 0 && b[2] == 1){
            result = "Open";
            break;
        }
        if(b[0] == 0 && b[1] == 0 && b[2] == 0){
            result = "Close";
            break;
        }
    }
    cout << result << endl;
    return 0;
}