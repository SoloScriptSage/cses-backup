#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

ll n;
ll num;
ll ans = 1;

set<ll> s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> num;
        s.insert(num);
    }

    ans = s.size();

    cout << ans;


    return 0;
}
