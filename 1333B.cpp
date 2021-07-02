#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a[1000000];
ll b[1000000];

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print() {
    
}

bool findGreater (int i) {
    for (ll j = i-1; j >= 0; --j) {
        if (a[j] == 1) return true;
    }
    return false;
}

bool findSmaller (int i) {
    for (ll j = i-1; j >= 0; --j) {
        if (a[j] == -1) return true;
    }
    return false;
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while(tc--) {
        int n = 0;
        cin >> n;

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; ++i) {
            cin >> b[i];
        }
        bool flag = true;

        for (ll i = n-1; i >= 0; --i) {
            if (a[i] != b[i]) {
                if (b[i] > a[i]) {
                    bool found = findGreater(i);
                    if (found == false) {
                        flag = false;
                        break;
                    } 
                } else {
                    bool found = findSmaller(i);
                    if (found == false) {
                        flag = false;
                        break;
                    }
                }
            }
            if (i == 0) {
                cout << "YES" << endl;
            }
        }

        if (flag == false) cout << "NO" << endl;
    }
}