#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    scanf("%d %d", &n, &k);
    int a[n] = {0};
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= a[k-1] && a[i] != 0) {
            ++count;
        } else {
            break;
        }
    }
    printf("%d", count);
}
