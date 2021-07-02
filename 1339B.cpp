#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a[100010];

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
        ll n = 0;
        cin >> n;
        
        for (int i = 0 ; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        ll mid = (n-1) / 2;
        cout << a[mid] << " ";

        for (ll r = mid+1, l = mid-1; ; ++r, --l) {
            if (r < n) cout << a[r] << " ";
            if (l >= 0) cout << a[l] << " ";
            if (r >= n && l < 0) break;
        }
        cout << endl;
    }
}
