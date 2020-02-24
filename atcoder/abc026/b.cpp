#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> r(n);
    for(int i = 0; i < n; i++){
        cin >> r[i];
    }
    sort(r.begin(), r.end(), greater<double>());
    double result = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            result += r[i] * r[i] * M_PI;
        }
        else{
            result -= r[i] * r[i] * M_PI;
        }
    }
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    cout << result << endl;
}