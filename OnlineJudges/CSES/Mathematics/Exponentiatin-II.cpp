#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;

#define nl '\n'
const ll MOD = 1e9 + 7;
 
ll binaryPower(ll a, ll b, ll m) {
   a %= m;
   ll res = 1;
   while (b > 0) {
      if (b & 1) 
         res = res * a % m;
      a = a * a % m;
      b >>= 1;
    }
    return res;
}
 
void solve() {
   ll a, b, c;
   cin >> a >> b >> c;
   ll exp = binaryPower(b, c, MOD-1);
   cout << binaryPower(a, exp, MOD) << nl;
}
 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
 
   while (t--) {
      solve();
   }
}
