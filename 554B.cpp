#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int limit;
    if (n&1 == 1) {
        limit = ( (n/2) * (n/2) ) + ( ((n/2)+1) * ((n/2)+1) );
    } else {
        limit = n * (n/2);
    }
    if (k > limit) {
        printf("NO\n");
    } else {
        printf("YES\n");
        int count = 0;
        char a[n][n] = {'0'};
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (count < k) {
                    if(i%2 == 0 && j%2 == 0) {
                        a[i][j] = 'L';
                        ++count;
                    } else if (i%2 == 0 && j%2 != 0){
                        a[i][j] = 'S';
                    } else if (i%2 != 0 && j%2 == 0) {
                        a[i][j] = 'S';
                    } else {
                        a[i][j] = 'L';
                        ++count;
                    }
                } else {
                    a[i][j] = 'S';
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << a[i][j];
            }
            cout << "\n";
        }
    }
}
