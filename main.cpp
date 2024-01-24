#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  auto p = vll(8);
  for (auto i = 0; i < 8; ++i) {
    cin >> p[i].first;
    p[i].second = i + 1;
  }

  sort(p.begin(), p.end(), greater());

  auto ans = 0LL;
  auto v = vl{};
  for (auto i = 0; i < 5; ++i) {
    ans += p[i].first;
    v.push_back(p[i].second);
  }

  sort(v.begin(), v.end());

  cout << ans << '\n';
  for (const auto& x : v) {
    cout << x << ' ';
  }

  return 0;
}