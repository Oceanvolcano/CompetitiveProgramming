#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define all(x) (x).begin(), (x).end()
using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n, x;
	cin >> n >> x;

   vector<int> p(n);
	for (int i = 0; i < n; ++i) cin >> p[i];
	sort(all(p));

   vector<bool> naik(n, false);
   ll ans = 0;
	ll l = 0, r = n - 1;
	while (l < r) {
		if (p[l] + p[r] > x) {
			--r;
		} else { 
			++ans;
			naik[l] = naik[r] = true;
			++l; --r; 
		}
	}
	for (int i = 0; i < n; ++i) {
		ans += naik[i] == false;
	}
	cout << ans;
}