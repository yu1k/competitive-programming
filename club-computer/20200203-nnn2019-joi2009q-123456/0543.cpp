#include <iostream>

using namespace std;

int main(){
    int result;
    int book;
    for(int i = 0; i < 5; i++){
    cin >> result; //総額
    for(int i = 0; i < 9; i++){
        cin >> book;
        result = result - book;
    }
    cout << result << endl;
    }
}