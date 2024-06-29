#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
using ll = long long;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n;
   cin >> n; 

   vector<ll> a(n);
   for (ll i = 0; i < n; ++i) {
      cin >> a[i];
   }

   ll ans = a[0], sum = 0;
   for (int i = 0; i < n; ++i) {
      sum += a[i];
      if (sum > ans) {
         ans = sum;
      } else if (sum < 0) {
         sum = 0;
      }
   }
   cout << ans << nl;
}
