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

    if(n >= 1110){ 
        cout << "YES" << '\n';
        return;
    }
    if(n <= 10){ 
        cout << "NO" << '\n';
        return;
    }


    for(int i = 0; i <= 10 && i * 111 <= n; ++i){
        if ( (n - i * 111) % 11 == 0) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';

    return;
    
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
