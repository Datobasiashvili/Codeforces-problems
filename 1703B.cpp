#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> x_set, y_set;
    
    while(n--){
        int x, y;
        cin >> x >> y;
        x_set.insert(x);
        y_set.insert(y);
    }
    
    cout << min(x_set.size(), y_set.size()) << endl;
}

 