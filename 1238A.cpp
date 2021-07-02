#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        long long x=0, y=0;
        scanf("%lld %lld", &x, &y);
        long long limit = x-y;
        if (limit == 1) {
        	printf("no\n");
        } else {
        	printf("yes\n");
        }
    }
}
