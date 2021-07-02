#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[] = {1,3,9,27,81,243,729,2187,6561,19683,59049};
    int tc = 0;
    scanf("%d", &tc);
    while (tc--) {
        int n = 0;
        scanf("%d", &n);
        int pos = (lower_bound(a, a+11, n)-a);
        if(a[pos] == n) {
            printf("%d\n", n);
        } else {
            --pos;
            int sum = 0;
            for (int i = 0; i <= pos; ++i) {
                sum += a[i];
            }
            if (sum < n) {
                printf("%d\n", a[++pos]);
                continue;
            } else if (sum == n) {
                printf("%d\n", n);
                continue;
            } else {
                ++pos;
                int sum = 0;
                vector<int>v;
                for (int i = 0; i < pow(2,pos); ++i) {
                    sum = 0;
                    for (int j = 0; j < pos; ++j) {
                        if ( (i & (1 << j)) > 0) {
                            sum += a[j];
                        }
                    }
                    v.push_back(sum);
                }
                sort(v.begin(), v.end());
                for (; n > -1; ++n) {
                    if(binary_search(v.begin(), v.end(), n)) {
                        printf("%d\n", n);
                        break;
                    }
                }
            }
        }
    }
}
