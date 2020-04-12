#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    for(long long i = 0; i < n + 1; i++){
        if(i % 15 == 0){
            continue;
        }
        else if(i % 3 == 0){
            continue;
        }
        else if(i % 5 == 0){
            continue;
        }
        else{
            sum += i;
        }
    }
    cout << sum << endl;
}
