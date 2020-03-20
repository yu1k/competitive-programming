#include <iostream>

using namespace std;

bool is_prime(int x) {
    if(x < 2){
        return false;
    }
    else{
        for(int i = 2; i * i <= x; i++){
            if (x % i == 0) {
            return false;
            }
        }
        return true;
    }
}

int main(){
    int x;
    cin >> x;

    int prime = x;
    for(int i = 0; i < 100003; i++){
        if(!is_prime(prime)){
            prime++;
        }
    }
    cout << prime << endl;
}