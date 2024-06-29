#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
using ll = long long;
const ll MOD = 1e9 + 7;

ll binaryPower(ll a, ll b) {
   a %= MOD;
   ll res = 1;
   while (b > 0) {
      if (b & 1) 
         res = res * a % MOD;
      a = a * a % MOD;
      b >>= 1;
    }
    return res;
}

void solve() {
   ll a, b;
   cin >> a >> b;
   cout << binaryPower(a, b) << nl;
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
