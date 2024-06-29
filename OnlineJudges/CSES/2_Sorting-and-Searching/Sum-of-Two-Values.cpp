#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
using ll = long long;

int main() {
   ll n, x;
   cin >> n >> x;

   vector<pair<int, int>> simpan;
   for (int i = 0; i < n; ++i) {
      ll a;
      cin >> a;
      simpan.pb({a, i+1});
   }

   sort(all(simpan));

   ll l = 0, r = n-1;
   while (l < r) {
      if (simpan[l].fi + simpan[r].fi == x) {
         cout << simpan[r].se << ' ' << simpan[l].se;
         return 0;
      } else if (simpan[l].fi + simpan[r].fi < x) {
         ++l;
      } else if (simpan[l].fi + simpan[r].fi > x) {
         --r;
      }
   }
   cout << "IMPOSSIBLE";
}
