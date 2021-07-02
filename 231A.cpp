#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int result = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int count = 0;
        for (int j = 1; j <= 3; ++j) {
            int a;
            scanf("%d", &a);
            if (a == 1) {
                ++count;
            }
        }
        if (count >= 2) {
            ++result;
        }
    }
    printf("%d", result);
}
