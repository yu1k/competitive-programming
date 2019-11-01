#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    cin >> A >> B;
    if(A > B * 2){
        cout << A - (B * 2) << endl;
    }
    else{
        cout << 0 << endl;
    }
}



//こちらで解く方法もある
#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    cin >> A >> B;
    if(A > (B+B)){
        cout << A - (B + B) << endl;
    }
    else{
        cout << "0" << endl;
    }
}
