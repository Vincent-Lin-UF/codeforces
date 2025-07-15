#include <bits/stdc++.h>
using namespace std;

#define ll long long 
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
    ll l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);

    for(auto &x : a) cin >> x;

    sort(all(a));

    ll ans = 0;
    for(int i = 0; i < n; ++i) {
        ll min_j = l - a[i];
        ll max_j = r - a[i];

        auto lo = lower_bound(a.begin() + i + 1, a.end(), min_j);
        auto hi = upper_bound(a.begin() + i + 1, a.end(), max_j);

        ans += (hi - lo);
    }

    cout << ans << '\n';
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
