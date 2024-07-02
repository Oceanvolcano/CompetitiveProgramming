#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
#define nl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin >> n;
 
   vector<pair<ll, ll>> pelanggan(n);
   for (int i = 0; i < n; ++i) {
      ll a, b;
      cin >> a >> b;
      pelanggan.pb({a, 1});
      pelanggan.pb({b, -1});
   }
 
   sort(all(pelanggan));
 
   int mx = 0, masih = 0;
   for (pair<ll, ll>& i : pelanggan) {
      masih += i.second;
      mx = max(mx, masih);
   }
 
   cout << mx << nl;
}
