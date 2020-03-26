#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int xa;
    int ya;
    int xb;
    int yb;
    int xc;
    int yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    double a = xb - xa;
    double b = yb - ya;
    double c = xc - xa;
    double d = yc - ya;
    double result = abs(a * d - b * c) / 2;
    printf("%.1f\n", result);
}