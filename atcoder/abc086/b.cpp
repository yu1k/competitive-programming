#include <iostream>

using namespace std;

int main(){
    string a;
    string b;
    cin >> a >> b;
    int result = stoi(a + b);
    for(int i = 1; i < 1000; i++){
        if(i * i == result){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
