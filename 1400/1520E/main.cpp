#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;

void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vi a;
    a.reserve(n);
    for(int i = 0; i < n; ++i){
        if (s[i] == '*') a.push_back(i);
    }

    int k = a.size();
    if (k <= 1) {cout << 0 << '\n'; return;}

    vector<ll> b(k);
    for(int i = 0; i < k; ++i){
        b[i] = (ll)a[i] - i;
    }

    ll med = b[k/2];

    ll moves = 0;
    for (ll x : b) {
        moves += llabs(x - med);
    }

    cout << moves << '\n';
    return;
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
