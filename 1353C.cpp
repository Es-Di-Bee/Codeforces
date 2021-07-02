#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

int a[100];
ll tc = 0, n = 0;

int main() {
    fastio();
	#ifndef ONLINE_JUDGE
        readfromfile();
    #endif

    cin >> tc;

    while(tc--) {
        cin >> n;
        // arrayinput();
        ll ans = 0;
        ll times = n;
        for (ll i = n/2; i > 0; --i) {
            ans += ((times * 4) - 4) * i;
            times -= 2;
        }
        cout << ans << endl;
    }
}