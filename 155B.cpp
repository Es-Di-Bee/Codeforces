#include<bits/stdc++.h>
using namespace std;
int main() {
    vector< pair<int,int> > v;
    int x;
    int y;
    int cards;
    scanf("%d", &cards);
    for (int i = 0; i < cards; ++i) {
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(), v.end(), greater<>());
    int count = 1;
    int points = 0;
    for (auto x : v) {
        if (count == 0) {
            break;
        }
        --count;
        count += (x.first);
        points += (x.second);
    }
    printf("%d\n", points);
}
