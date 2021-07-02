#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n] = {0};
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n, greater<int>());
	int sum = 0;
	for (int i : a) {
		sum += i;
	}
	int limit = sum / 2;
	int ans = 0;
	int total = 0;
	for (int i : a) {
		total += i;
		++ans;
		if (total > limit) break;
	}
	cout << ans << endl;
}
