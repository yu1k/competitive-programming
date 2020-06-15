#include <iostream>
#include <string>

using namespace std;

int main(){
    int x;
    int y;
    cin >> x >> y;
    string result = "No";
    for(int i = 0; i <= x; i++){
        int a = x - i;
        if(i * 2 + a * 4 == y){
            result = "Yes";
            break;
        }
    }
    cout << result << endl;
    return 0;
}