#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define MAXN 100005
#define INF 500000
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fast ios::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
#define clar(a) memset(a, 0, sizeof(a));
#define usll unordered_set<ll>
#define vll(n) vector<ll> n
#define all(v) v.begin(), v.end()
#define file_st ifstream in("input.txt"); cin.rdbuf(in.rdbuf());
#define file_end in.close();
#define dec(x) printf("%.10f\n", x)
#define uncvec(not_unique, unique) unique_copy(not_unique.begin(), not_unique.end(), back_inserter(unique_items))
#define rep(i,n) for(int i=0;i<n;++i)


void solve() {
    ll n;
    cin >> n;

    char letter='a';
    vector<int> b(n+1, 0);
    string res;

    rep(i,n){
        int ai;
        cin >> ai;

        if(ai==0){
            res+=letter++;
        }else{
            res+=res[b[ai]++];
        }
    }

    cout << res << "\n";
}

int main() {
    fast

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
