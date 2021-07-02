#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>primes;
ll isPrime[10000000];
#define maxN 10000000

void sieve() {

	isPrime[0] = 1, isPrime[1] = 1;
	for (ll i = 4; i < maxN; i+=2) {
		isPrime[i] =1;
	}
	for (ll i = 3; i*i < maxN; i+=2) {
		if (isPrime[i] == 0) {

			for (ll j = i*i; j < maxN; j+=(i*2)) {
				isPrime[j] = 1;
			}
		}
	}

	for (ll i = 0 ; i < maxN; ++i) {
		if(isPrime[i] == 0) {
			primes.push_back(i);
		}
	}

}

int main() {
    sieve();
    int n;
    cin >> n;
    for (int i = 2; i < n; ++i) {
        bool a = binary_search(primes.begin(), primes.end(), i);
        bool b = binary_search(primes.begin(), primes.end(), n-i);
        if (a && b) {
            cout << i << " " << n-i << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}
