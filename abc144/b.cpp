#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = 1; i <= 9; ++i){  //全探索
        for(int j = 1; j <= 9; ++j){
            if(i * j == N){
                cout << "Yes" << endl;
              return 0; //return 0;をしないとWAしました..
            }
        }
    }
  cout << "No" << endl;
  return 0;  //return 0;をしないとWAしました..
}
