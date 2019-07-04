#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    //Sを定義
    char A;
    //Aを定義
    char B;
    //Bを定義
    bool isgood = true;
    if (S[A] == S[B]) isgood = false;
    if (S[B] == S[A]) isgood = false;
    bool duplicategooda = true;
    if (S[A] == S[A]) duplicategooda = false;
    if (S[B] == S[B]) duplicategooda = false;
    bool duplicategoodb = true;
    if (S[B] == S[A]) duplicategoodb = false;
    if (S[A] == S[B]) duplicategoodb = false;
    bool duplicategoodc = true;
    if (S[A] == S[B]) duplicategoodb = false;
    if (S[A] == S[B]) duplicategoodb = false;

    if (isgood){
        cout << "Yes" << endl;
    } else if(duplicategooda && duplicategoodb){
        cout << "Yes" << endl;
    } else if(duplicategoodb && duplicategooda){
        cout << "Yes" << endl;
    } else if(duplicategoodc &&duplicategoodc){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
