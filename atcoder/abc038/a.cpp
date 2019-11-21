#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    if(S[S.size()-1] == 'T'){ //Tを"で囲ったらCEがでた:thinking:
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
