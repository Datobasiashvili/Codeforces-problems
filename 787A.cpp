#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int num = 100;
    unordered_set<int> ricks_times;

    for (int i = 0; i < num; i++){
        ricks_times.insert(b+i*a);
    }    

    for (int i = 0; i < num; i++){
        int mortys_times = d+i*c;

        if (ricks_times.count(mortys_times)){
            cout << mortys_times << endl;
            return 0;
        }
    }
    cout << -1;
    return 0;
}