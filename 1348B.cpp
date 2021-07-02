#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

int a[1000];
int tc = 0, n = 0, k = 0;

int main() {
    fastio();
	// readfromfile();

    cin >> tc;

    while(tc--) {
        cin >> n >> k;
        bool noAns = false;
        vector<int> v;

        arrayinput();

        for (int i = 0; i < n; ++i) {
            int x = a[i];
            if (v.size() == 0 || find(v.begin(), v.end(), x) == v.end()) v.push_back(x);
            if (v.size() > k) {
                noAns = true;
                break;
            }
        }
        
        while(v.size() < k) v.push_back(1);
        // for (int i : v) cout << i << endl;
        
        if (noAns) cout << -1 << "\n";
        else {
            cout << v.size()*n << "\n";
            for (int i = 0 ; i < n; ++i) {
                for (int j = 0; j < v.size(); ++j) {
                    cout << v[j] << " ";
                }
            }
            cout << "\n";
        }
    }
}