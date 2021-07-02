#include<bits/stdc++.h>
#define readfromfile freopen("input.txt", "r", stdin)
#define writetofile  freopen("output.txt", "w", stdout)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput for (int i = 0; i < n; ++i) cin >> a[i];
#define ll long long 
using namespace std;
 
int t, n, a, b, q, r, value, ar[40001], br[40001];
 
long long L, R;
 
void precal() {
	value = 0;
	r = (a * b) / __gcd(a, b);

	for (int i = 0; i < r; i++) {
		ar[i] = (i % a) % b;
		br[i] = (i % b) % a;
		if (ar[i] != br[i]) {
			value++;
		}
	}
}
 
long long findAns(long long x) {
	if (x <= 0)return 0;
	long long rem, ans = 0;
	ans = (x / r) * value;
	rem = x % r;

	for (int i = 0; i <= rem; i++) {
		if (ar[i] != br[i])ans++;
	}
 
	return ans;
}
 
int main() {
    // freopen("input.txt", "r", stdin);

	scanf("%d", &t);

	while (t--) {
		scanf("%d %d %d", &a, &b, &q);
		precal();

		for (int i = 0; i < q; i++) {
		    scanf("%lld %lld", &L, &R);
			printf("%lld ", findAns(R) - findAns(L - 1));
		}
		printf("\n");
	}
}