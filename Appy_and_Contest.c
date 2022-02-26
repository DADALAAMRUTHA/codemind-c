#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	unsigned long long int n, a, b, k, lcm;
	while (t--) {
	    cin >> n >> a >> b >> k;
	    unsigned long long int q = ((a > b) ? b : a), r = ((a > b) ? a : b), i = 0;
	    while (r != 0) i = q % r, q = r, r = i;
	    lcm = (a * b) / q;
	    cout << ((((n / a) + (n / b) - ((n / lcm) * 2)) >= k) ? "Win" : "Lose") << endl;
	}
	return 0;
}
