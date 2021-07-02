#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<ll> v;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void store() {
    ll sum = 1;
    for (int i = 1; i < 61; ++i) {
        sum += pow(2,i);
        v.push_back(sum);
    }
}

void print() {
    
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    store();

    while (tc--) {
        ll n;
        cin >> n;

        for (ll x : v) {
            if (n % x == 0) {
                cout << n / x << endl;
                break;
            }
        }
    }

    // for (ll x : v) cout << x << endl;
}
