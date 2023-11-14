#include <iostream>
using namespace std;

int main(){

    int T, x1, y1, r1, x2, y2, r2;

    cin >> T;

    for(int i=0;i<T;i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    }
    cout << x1 << y1 << r1 << x2 << y2 << r2;

    return 0;
}