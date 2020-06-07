#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a(6);
    vector<int> b(6);
    vector<int> c(6);
    for(int i = 0; i < 6; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 6; i++){
        cin >> b[i];
    }
    for(int i = 0; i < 6; i++){
        cin >> c[i];
    }
    int ah = 0;
    int am = 0;
    int as = 0;
    int bh = 0;
    int bm = 0;
    int bs = 0;
    int ch = 0;
    int cm = 0;
    int cs = 0;
    for(int i = 0; i < 1; i++){
        ah = a[3] - a[0];
        am = a[4] - a[1];
        as = a[5] - a[2];
        if(as < 0){
            am--;
            as += 60;
        }
        if(am < 0){
            ah--;
            am += 60;
        }
        cout << ah << " " << am << " " << as << endl;
    }
    for(int i = 0; i < 1; i++){
        bh = b[3] - b[0];
        bm = b[4] - b[1];
        bs = b[5] - b[2];
        if(bs < 0){
            bm--;
            bs += 60;
        }
        if(bm < 0){
            bh--;
            bm += 60;
        }
        cout << bh << " " << bm << " " << bs << endl;
    }
    for(int i = 0; i < 1; i++){
        ch = c[3] - c[0];
        cm = c[4] - c[1];
        cs = c[5] - c[2];
        if(cs < 0){
            cm--;
            cs += 60;
        }
        if(cm < 0){
            ch--;
            cm += 60;
        }
        cout << ch << " " << cm << " " << cs << endl;
    }
    return 0;
}