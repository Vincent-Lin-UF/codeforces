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
    vector<int> a(n);
    map<int, long long> freq;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        int val = a[i] - (i+1);
        freq[val]++;
    }

    long long ans = 0;
    for (auto& [key, count] : freq) {
        ans += count * (count - 1) / 2;
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
