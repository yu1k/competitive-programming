#include <iostream>

using namespace std;

int main(){
    int n;
    int d;
    int x;
    cin >> n;
    cin >> d >> x;
    int a;
  	int result = x;
    for(int i = 0; i < n; i++){
        cin >> a;
        result += d / a;
        if(d % a != 0){
            result += 1;
        }
    }
    cout << result << endl;
}
