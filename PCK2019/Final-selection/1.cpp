#include <iostream>

using namespace std;

int main() {
    double a;
    double t;
    double r;
    cin >> a >> t >> r;
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    cout << 360 /　a * t / (360 / r) << endl;
}
