#include <iostream>

using namespace std;

int main(){
    int N;
    //N
    int K;
    //K
    cin >> N >> K;
    //N,Kの順で標準入力
    if(K == 1){
      cout<< 0 <<endl;
      //K == 1 人の場合は、N個を1人に配るしかないので差は0
  } else {
    cout<< N - K <<endl;
    //全員に1個以上配る必要があるが、先に全員に1個ずつ配った上で残りのN − K個を自由に配ることを考えると、答えはN − Kだ
  }
}
