#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

int a[100];
int tc = 0, n = 0, k  = 0;

int main() {
    fastio();
	#ifndef ONLINE_JUDGE
        readfromfile();
    #endif

    cin >> tc;

    while(tc--) {
        cin >> n >> k;
        // arrayinput();

        string str;
        cin >> str;

        vector<int> v;
        int ans = 0;  
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1') v.push_back(i);
        }

        if (v.empty()) {
            ans = n / (k + 1);
            if (n % (k+1) != 0) ++ans;
            cout << ans << '\n';
            continue;
        }

        ans = v[0] / (k+1);
        
        for (int i = 0; i < v.size()-1; ++i) {
            int x = v[i+1] - v[i] - 1 - k;
            ans += (x / (k+1));
        }
        // debug(ans);
        int x = n - v.back() - 1;
        ans += (x / (k+1));

        cout << ans << '\n';
    }
}
