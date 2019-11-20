#include <iostream>

using namespace std;

int main(){
    int S;
    int T;
    cin >> S >> T;
    cout << T - S + 1 << endl;
}


//別の解き方
#include <iostream>

using namespace std;

int main(){
    int S;
    int T;
    cin >> S >> T;
    cout << T - (S - 1) << endl;
}
