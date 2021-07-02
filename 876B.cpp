#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

// ll a[1000010];
ll tc = 0, n = 0, k , m;
vector<int> v[1000010];

int main() {
    fastio();
	#ifndef ONLINE_JUDGE
        readfromfile();
    #endif

    cin >> n >> k >> m;
        
    ll x;
    for (ll i = 0; i < n; ++i) {
        cin >> x;
        v[x % m].push_back(x);
    }
    for (ll i = 0; i < m; ++i) {
        if (v[i].size() >= k) {
            cout << "Yes" << "\n";
            for (ll q = 0; q < k; ++q) {
                cout << v[i][q] << " ";
            }
            cout << endl;
            return 0;
        }
        
    }
    cout << "No" << endl;
}