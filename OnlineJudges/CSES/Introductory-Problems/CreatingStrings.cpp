#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define nl '\n'
#define all(x) (x).begin(), (x).end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  sort(all(s));

  vector<string> ans;
  do {
    ans.pb(s);
  } while (next_permutation(all(s)));

  cout << ans.size() << nl;
  for (auto& i : ans) {
    cout << i << nl;
  }
}