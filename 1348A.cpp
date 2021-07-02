#include<bits/stdc++.h>
#define readfromfile freopen("input.txt", "r", stdin);
#define writetofile  freopen("output.txt", "w", stdout);
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

int a[100];
int tc = 0; ll n = 0;

int main() {
    fastio;
	// readfromfile;

    cin >> tc;

    while(tc--) {
        cin >> n;
        // arrayinput;
        // debug("OK");
        ll sum1 = 0;
        int loop = n / 2;
        for (int i = 1; i < loop; ++i) {
            sum1 += ((ll) (pow(2, i)));
        }
        sum1 += ((ll) (pow(2, n)));
        ll sum2 = 0;
        for (int i = loop; i < n; ++i) {
            sum2 += ((ll) (pow(2, i)));
        }

        cout << abs(sum2-sum1) << "\n";
    }
}