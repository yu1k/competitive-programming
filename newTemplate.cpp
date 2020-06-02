#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <queue>
#include <deque>
#include <map>
#include <set>

#include <cassert>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

typedef long long ll;

#define rep(i, n) for(int i = 0; i < n; i++)
#define str(i, s) for(int i = 0; i < s.length(); i++)
#define pb push_back
#define ab 123456789
#define ba 987654321

#define easy(x) (x).begin(), (x).end()
#define udeasysort(x) (x).begin(), (x).end()

//定数
const int mod = 1000000007;
const int INF = 1001001001;
const double PI = 3.141592653589;

long long gcd(long long a, long long b){
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return a / gcd(a, b) * b;
}

int solve(){
    cout << "Hello, Wold!" << endl;
}

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    std::cout << std::fixed << std::setprecision(20);
    solve();
    return 0;
}