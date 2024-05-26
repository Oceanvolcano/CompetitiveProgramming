#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
   ll n, a;
   cin >> n;

   ll sum = 0;
   for (int i = 0; i < n-1; ++i) {
      cin >> a;
      sum += a;
   }
   cout << (n*(n+1)/2) - sum << nl;
}