#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    double f; 
    f = 1.00000 * a / b;
    cout << a / b << " ";
    cout << a % b << " ";
    cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    cout << f << endl;
}