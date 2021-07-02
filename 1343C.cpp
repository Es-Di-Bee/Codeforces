#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//ll a[200050];
//vector<ll> v;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print() {
    
}

int main() {
    fastIO();
	
	ll a[200050] = {};
	vector<ll> v;

    int tc = 0;
    cin >> tc;

    while (tc--) {
       
        ll n;
        cin >> n;
        ll sum = 0;
        cin >> a[0];
        v.push_back(a[0]);
        sum += v.back();

        for (int i = 1; i < n; ++i) {
            cin >> a[i];

            if (v.back() < 0) {
                if (a[i] < 0) {
                    if (a[i] > v.back()) {
                        sum -= v.back();
                        v.pop_back(); 
                        v.push_back(a[i]);
                        sum += v.back();
                    }
                } else {
                    v.push_back(a[i]);
                    sum += v.back();
                }
            } else {
                if (a[i] > 0) {
                    if (a[i] > v.back()) {
                        sum -= v.back();
                        v.pop_back(); 
                        v.push_back(a[i]);
                        sum += v.back();
                    }
                } else {
                    v.push_back(a[i]);
                    sum += v.back();
                }
            }

        }

        cout << sum << endl;

        
        //memset(a, 0, sizeof(a));
        //v.clear();
    }

}
