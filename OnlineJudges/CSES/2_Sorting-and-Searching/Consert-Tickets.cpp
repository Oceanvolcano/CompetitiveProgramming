#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define all(x) (x).begin(), (x).end()
#define lb lower_bound
using ll = long long;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   ll n, m;
   cin >> n >> m;

   multiset<ll> harga;
   for (ll i = 0; i < n; ++i) {
      ll a; cin >> a;
      harga.insert(a);
   }

   vector<ll> t(m);
   for (ll i = 0; i < m; ++i) {
      cin >> t[i];
      auto it = harga.lb(t[i]+1);
      if (it == harga.begin()) {
         cout << -1 << nl;
      } else {
         --it;
         cout << *it << nl;
         harga.erase(it);
      }
   }
}
