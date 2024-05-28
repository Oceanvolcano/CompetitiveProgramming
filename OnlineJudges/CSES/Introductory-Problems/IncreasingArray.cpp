#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n;
   cin >> n;

   vector<ll> a(n);
   for (int i = 0; i < n; ++i) {
      cin >> a[i];
   }

   ll cnt = 0;
   for (int i = 1; i < n; ++i) {
      if (a[i] < a[i-1]) {
         cnt += a[i-1]-a[i];
         a[i] += a[i-1]-a[i];
      }
   }
   cout << cnt << nl;
}