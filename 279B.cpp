#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n = 0, totalTime = 0;
    scanf("%lld %lld", &n, &totalTime);
    ll a[n] = {0};
    ll ans = 0;
    ll currentTime = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
    }
    for (int l = 0, r = 0; r < n; ++r) {
        currentTime += a[r];
        while (currentTime > totalTime) {
            currentTime -= a[l++];
        }
        if (r-l+1 > ans) {
            ans = r-l+1;
        }
    }
    printf("%lld\n", ans);
}
