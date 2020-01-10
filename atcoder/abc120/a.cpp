#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int result = min(b / a, c);
    cout << result << endl;
}

//別の解き方
#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if((a  * c) < b){
        cout << c << endl;
    }
    else{
        cout << b / a << endl;
    }
}
