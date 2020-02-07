#include <iostream>

using namespace std;

int main(){
    double r;
    cin >> r;
    cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    cout << r * r * 3.141592653589 << " ";
    cout << 2 * r * 3.141592653589 << endl;
}