#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while(tc--) {
        ll a = 0, b = 0;
        cin >> a >> b;
        if (a < b) {
            cout << b-a << endl;
            continue;
        }
        if (a % b == 0) {
            cout << 0 << endl;
            continue;
        } 
        cout << b-(a%b) << endl;
    }
}
