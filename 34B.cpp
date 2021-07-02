#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int>v;
    for (int i = 1; i <= n; ++i) {
        int x;
        scanf("%d", &x);
        if (x < 0) {
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end());
    int sum = 0, count = 1;
    for (int i = 0; i < v.size(); ++i, ++count) {
        if(count > m) {
            break;
        }
        sum = sum + (v[i] * (-1));
    }
    printf("%d\n", sum);
}
