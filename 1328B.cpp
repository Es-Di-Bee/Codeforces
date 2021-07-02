#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print(int n, int b1, int b2) {
    for (int i = 0; i < n; ++i) {
        if (i == b1 || i == b2) cout << 'b';
        else cout << 'a';
    }
    cout << endl;
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while(tc--) {
        int n = 0; 
        ll k = 0;
        cin >> n >> k;
        int b1 = n-2;
        int b2 = n-1;
        if (k == 1) {
            print(n, b1, b2);
            continue;
        }
        ll count = 2;
        ll sum = 3;
        while(k > sum) {
            --b1;
            ++count;
            sum += count;
        }
        --b1;
        if (k == sum) b2 = b1+1;
        else b2 = b1 + (sum-k) + 1;
        print(n, b1, b2);
    }
}
