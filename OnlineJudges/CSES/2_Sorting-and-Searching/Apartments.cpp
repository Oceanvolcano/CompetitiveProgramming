#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define nl '\n'
#define ll long long
#define all(x) (x).begin(), (x).end()

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n, m, k;
   cin >> n >> m >> k;

   vector<ll> a(n);
   for (int i = 0; i < n; ++i) {
      cin >> a[i];
   }
   sort(all(a));

   vector<ll> b(m);
   for (int i = 0; i < m; ++i) {
      cin >> b[i];
   }
   sort(all(b));

   ll cnt = 0, i = 0, j = 0;
   while (i < n && j < m) {
      if (abs(a[i] - b[j]) <= k) {
         ++i;
         ++j;
         ++cnt;
      }
      else if (a[i] - b[j] > k) {
         ++j;
      } else {
         ++i;
      }
   }
   cout << cnt << nl;
}
