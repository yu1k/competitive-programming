#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    int d;
    cin >> n >> d;
    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    double root = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        root = sqrt(pow(x[i], 2) + pow(y[i], 2)); 
        if(root <= d){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
