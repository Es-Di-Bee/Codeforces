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
    while(tc--) {
        int x, n, m;
        cin >> x >> n >> m;
        // cout << x << endl;
        while (x > 0 && (n > 0 || m > 0)) {
            if ((n == 0 || x < 21) && m > 0) {
                x -= 10;
                --m;
            } else if (n > 0) {
                x = (x/2) + 10;
                --n;
            }
        }

        if (x > 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}