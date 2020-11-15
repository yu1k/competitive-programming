#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    vector<double> sx(1000001);
    vector<double> sy(1000001);
    vector<double> gx(1000001);
    vector<double> gy(1000001);
    for(int i = 0; i < 1; i++){
        cin >> sx[i] >> sy[i] >> gx[i] >> gy[i];
    }
    double result = 0;
    for(int i = 0; i < 1; i++){
        result = (((sx[i] * gy[i]) + (gx[i] * sy[i])) / (sy[i] + gy[i]));
    }
    printf("%.10f\n", result);
    return 0;
}