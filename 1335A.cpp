#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print() {
    
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while (tc--) {
        ll n= 0;
        cin >> n;
        if (n % 2 == 0) cout << (n/2)-1 << endl;
        else cout << n/2 << endl;
    }
}
