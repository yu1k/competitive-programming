#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    if(0 <= N && N <= 59){
        cout << "Bad" << endl;
    }
    else if(60 <= N && N <= 89){
        cout << "Good" << endl;
    }
    else if(90 <= N && N <= 99){
        cout << "Great" << endl;
    }
    else if(100 == N){
        cout << "Perfect" << endl;
    }
}
