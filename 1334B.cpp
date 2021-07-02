#include<bits/stdc++.h>
using namespace std;
#define ll long long
double a[1000000];
vector<double> v;
vector<double> v2;


void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void print() {

}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while(tc--) {
        ll n, x;
        cin >> n >> x;
        double sum = 0;
        ll ans = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] >= x) {
                sum += a[i]; 
                ++ans;
            } else {
                v.push_back(a[i]);
            }
        }

        sort (v.begin(), v.end());
        int count = ans;

        for (int i = v.size()-1; i >= 0; --i) {
            ++count;
            if ( (sum + v[i]) / count >= x ) {
                ++ans;
                sum += v[i];
            } else break;
        }

        cout << ans << endl;
        
        v.clear();
        v2.clear();
    }
}
