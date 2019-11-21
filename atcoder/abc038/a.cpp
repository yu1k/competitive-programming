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


//別の解法
//.back()を使って実装.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string S;
    cin >> S;
    if(S.back() == 'T'){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
