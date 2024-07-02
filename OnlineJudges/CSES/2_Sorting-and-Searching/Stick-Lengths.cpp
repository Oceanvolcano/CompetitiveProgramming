#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'
#define all(x) (x).begin(), (x).end()

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;

   vector<ll> p(n);
   for (int i = 0; i < n; ++i) {
      cin >> p[i];
   }

   sort(all(p));
   ll median = p[n/2];

   ll ans = 0;
   for (int i = 0; i < n; ++i) {
      ans += abs(p[i]-median);
   }

   cout << ans << nl;
}
