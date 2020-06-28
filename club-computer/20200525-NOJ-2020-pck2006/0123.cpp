#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    double l;
    double r;
    while(cin >> l >> r){
        if(l < 35.50 && r < 71.00){
            cout << "AAA" << endl;;
        }
        else if(l < 37.50 && r < 77.00){
            cout << "AA" << endl;
        }
        else if(l < 40.00 && r < 83.00){
            cout << "A" << endl;
        }
        else if(l < 43.00 && r < 89.00){
            cout << "B" << endl;
        }
        else if(l < 50.00 && r < 105.00){
            cout << "C" << endl;
        }
        else if(l < 55.00 && r < 116.00){
            cout << "D" << endl;
        }
        else if(l < 70.00 && r < 148.00){
            cout << "E" << endl;
        }
        else{
            cout << "NA" << endl;
        }
    }
    return 0;
}