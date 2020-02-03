#include <iostream>

using namespace std;

int main(){
    int result;
    int book;
    cin >> result; //総額
    for(int i = 0; i < 9; i++){
        cin >> book;
        result = result - book;
    }
    cout << result << endl;
}