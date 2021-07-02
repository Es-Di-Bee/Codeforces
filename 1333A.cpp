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
        int n, m;
        cin >> n >> m;

        for (int r = 1; r <= n; ++r) {
            for (int c = 1; c <= m; ++c) {
                if (r == 1 && c == m) {
                    cout << "W";
                    continue;
                }
                cout << "B";
            }
            cout << endl;
        }
    }
}