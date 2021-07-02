#include <bits/stdc++.h>
using namespace std;
int main() {
    double m, n, a;
    scanf("%lf %lf %lf", &m, &n, &a);
    double result = ceil(m/a) * ceil(n/a);
    printf("%.0lf\n", result);

}
