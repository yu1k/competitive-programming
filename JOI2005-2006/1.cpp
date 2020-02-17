#include <iostream>

using namespace std;

int main(){
    int n;
    int a;
    int b;
    int a_result = 0;
    int b_result = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a > b){
            a_result = a_result + a + b;
        }
        else if(a < b){
            b_result = b_result + a + b;
        }
        else{
            a_result = a_result + a;
            b_result = b_result + b;
        }
    }
    cout << a_result << " " << b_result << endl;
}



/*********** 学内コンテストアレンジ版 ********//*
#include <iostream>

using namespace std;

int main(){
    int n;
    int a;
    int b;
    int a_result = 0;
    int b_result = 0;
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            if(a > b){
                a_result += a + b;
            }
            else if(a < b){
                b_result += a + b;
            }
            else{
                a_result += a;
                b_result += b;
            }
        }
        cout << a_result << " " << b_result << endl;
    }
}*/