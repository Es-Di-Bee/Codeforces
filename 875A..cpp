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

    // cin >> tc;

    // while(tc--) {
        cin >> n;
        // arrayinput();

        
    // }

    ll digits = log10(n) + 1;
    vector<ll> v;
    for (ll i = n-(9*digits); i <= n; ++i) {
        ll num = i;
        ll sum = num;
        while(num != 0) {
            sum += (num%10);
            num /= 10;
        }
        if (sum == n) v.push_back(i);
    }

    cout << v.size() << "\n";
    for (int i : v) cout << i << " ";
    cout << "\n";
}
