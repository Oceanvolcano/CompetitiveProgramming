#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
#define nl '\n'
 
void solve() {
   ll n, k;
   cin >> n >> k;
   
   ll temp = (k-1)/(n-1);
   cout << k+temp << nl;
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

//Formula = floor((k-1)/(n-1)) + k
//https://codeforces.com/problemset/problem/1352/C
//Tags = Number Theory, Binary Search
