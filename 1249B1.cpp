#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc = 0;
    scanf("%d", &tc);
    while(tc--) {
        int n = 0;
        scanf("%d", &n);
        int a[n] = {0};
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        for (int i = 0 ; i < n; ++i) {
            int count = 1;
            int j = a[i];
            while(a[j-1] != i+1) {
                ++count;
                j = a[j-1];
            }
            if (a[i] != i+1) ++count;
            printf("%d ", count);
        }
        printf("\n");
    }
}
