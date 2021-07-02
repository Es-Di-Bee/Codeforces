#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc = 0;
    scanf("%d", &tc);
    while (tc--) {
        int n = 0;
        scanf("%d", &n);
        vector<int>v;
        for (int i = 0; i < n; ++i) {
            int x = 0;
            scanf("%d", &x);
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        int count = 0;
        for (int i = 0; i < v.size(); ++i) {
            int x = v[i];
            for (int j = i+1; j < v.size(); ++j) {
                if (v[j] - x > 1) {
                    x = v[j];
                    v.erase(v.begin()+j);
                    --j;
                }
            }
            v.erase(v.begin()+i);
            ++count;
            --i;
        }
        printf("%d\n", count);
    }
}
