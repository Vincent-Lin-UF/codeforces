#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
typedef vector<int> vi;
typedef pair<int, int> pii;

void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a) cin >> x;

    sort(all(a));
    for (auto x : a) cout << x << " ";
    cout << '\n';
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
