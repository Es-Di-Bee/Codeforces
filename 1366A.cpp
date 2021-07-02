#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

ll arr[10];
int tc = 0, n = 0;
ll a, b, ans;

int main() {
    fastio();
	#ifndef ONLINE_JUDGE
        //readfromfile();
    #endif

    cin >> tc;

    while(tc--) {
        ans = 0;
        //cin >> n;
        // arrayinput();
        
        cin >> a >> b;

        if (a > b) {
            swap(a, b);
        }

        if (a >= b/2) {
            ans = (a + b) / 3;
        } else {
            ans = a;
        }

        cout << ans << endl;
    }
}