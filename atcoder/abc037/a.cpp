#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    int C;
    cin >> A >> B >> C;
    if(A > B){
        cout << C / B << endl;
    }
    else{
        cout << C / A << endl;
    }
}



//別の解法
#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    int C;
    cin >> A >> B >> C;
    cout << C / min(A, B) << endl;
}
