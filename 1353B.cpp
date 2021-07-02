#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

int a[100];
int b[100];
int tc = 0, n = 0;

int main() {
    fastio();
	#ifndef ONLINE_JUDGE
        readfromfile();
    #endif

    cin >> tc;

    while(tc--) {
        cin >> n;
        int k;
        cin >> k;

        arrayinput();

        // b array input
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        //sorting
        sort(a, a+n); sort(b, b+n);

        ll add = 0;

        for (int i = 0; i < n; ++i) {
            if (k > 0) {
                if (a[i] < b[n-1-i]) {
                    a[i] = b[n-1-i];
                    --k;
                }
            } 
            add += a[i];
        }

        cout << add << endl;
    }
}