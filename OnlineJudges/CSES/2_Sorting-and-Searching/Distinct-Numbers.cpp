#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n;
   cin >> n;

   vector<int> a(n);
   for (int i = 0; i < n; ++i) {
      cin >> a[i];
   }

   map<int, int> distinct;
   for (int i = 0; i < n; ++i) {
    distinct[a[i]]++;
   }
   cout << distinct.size() << nl;
}
