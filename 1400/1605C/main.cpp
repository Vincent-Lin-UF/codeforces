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
    string s;
    cin >> s;
    
    int minLen = -1;
    for(int i = 0; i < n; ++i){
        for(int win = 2; win <= 7; ++win){
            if((i + win) > n ) continue;
            int a_cnt = 0;
            int b_cnt = 0;
            int c_cnt = 0;
            for(int j = i; j < i + win; ++j){
                if(s[j] == 'a') a_cnt++;
                else if(s[j] == 'b') b_cnt++;
                else if (s[j] == 'c') c_cnt++;
            }

            if (a_cnt > b_cnt && a_cnt > c_cnt){
                if(minLen == -1 || win < minLen) {
                    minLen = win;
                }
            }
        }
    }
    cout << minLen << '\n';
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
