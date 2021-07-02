#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int max = 0;
    int total = 0;
    while(n--) {
        int a, b;
        scanf("%d %d", &a, &b);
        total = total-a+b;
        if (total > max) {
            max = total;
        }
    }
    printf("%d\n", max);
}
