#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    if((a % 2 == 0 && b % 2 == 0) && (c % 2 == 0 && d % 2 == 0)){

    } else if ((a % 2 != 0 && b % 2 == 0) && (c % 2 != 0 && d % 2 == 0)){
        
    } else {
        cout << -1;
        return 0;
    }
}