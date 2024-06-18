#include <iostream>
using namespace std;

#define nl '\n'
#define ll long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll ans = 1, cnt = 1;
  string s;
  cin >> s;
  
  int len = s.length();
  for (int i = 0; i < len-1; ++i) {
    if (s[i] == s[i+1]) {
      ++cnt;
      ans = max(ans, cnt);
    } else {
      cnt = 1;
    }
  }
  cout << ans << nl;
}
