#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
using ll = long long;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n, q;
   cin >> n >> q;

   vector<ll> x(n);
   for (ll i = 0; i < n; ++i) {
      cin >> x[i];
   }

   vector<ll> pref(n, 0);
   for (int i = 0; i < n; ++i) {
      pref[i+1] = pref[i] + x[i];
   }

   for (ll i = 0; i < q; ++i) {
      ll a, b;
      cin >> a >> b;
      cout << pref[b] - pref[a-1] << nl;
   }
}
