// problem link
// https://codeforces.com/contest/1971/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int max, min;

        if(a >= b){
            min = b;
            max = a;

        }else{
            min = a;
            max = b;
        }

        cout << min << " " << max << endl;
    }
}
