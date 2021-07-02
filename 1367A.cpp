#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

int a[100];
int tc = 0, n = 0;

int main() {
    fastio();
	#ifndef ONLINE_JUDGE
        readfromfile();
    #endif

    cin >> tc;
    string str;
    while(tc--) {
        cin >> str;
        // arrayinput();

        string ans = "";
        for (int i = 0; i < str.size()-1; i += 2) {
            ans += str[i];
        }
        ans += str[str.size()-1];
        cout << ans << endl;
    }
}
