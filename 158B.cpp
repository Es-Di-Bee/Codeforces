#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int oneC = 0;
    int twoC = 0;
    int threeC = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if (x == 4) {
            ++count;
            continue;
        }
        if (x == 1) {
            oneC++;
        } else if (x == 2) {
            twoC++;
        } else {
            threeC++;
        }
    }
    if (twoC % 2 == 0) {
        count += (twoC/2);
        twoC = 0;
    } else {
        count += (twoC/2);
        twoC = 1;
    }
    if (threeC < oneC) {
        count += threeC;
        oneC -= threeC;
        threeC = 0;
    } else {
        count += oneC;
        threeC -= oneC;
        oneC = 0;
    }
    if (twoC == 1) {
        ++count;
        if(oneC == 1) {
            --oneC;
        } else if (oneC > 1){
            oneC -= 2;
        }
    }
    twoC = 0;
    count += threeC;
    count += (oneC/4);
    if (oneC %4 == 0) {
        oneC = 0;
    }
    else {
        ++count;
    }
    printf("%d\n", count);
}
