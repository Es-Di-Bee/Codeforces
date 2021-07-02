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
        // readfromfile();
    #endif

    cin >> tc;

    while(tc--) {
        cin >> n;
        arrayinput();

        int ew = 0, ow = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) ++ew;
                else ow++;
            }
        }
        // cout << wrong << endl;
        if (ew != ow) cout << -1 << endl;
        else cout << ow << endl;
    }
}
