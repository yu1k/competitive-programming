#include <iostream>

using namespace std;

int main(){
    int d;
    int n;
    cin >> d >> n;
    int s = 1;
    for(int i = 0; i < d; i++)
    s *= 100;
    {
        if(n <= 99){
            cout << s * n << endl;
        }
        else{
            cout << s * 101 << endl;
        }
    }

}
