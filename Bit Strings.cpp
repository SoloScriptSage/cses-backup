#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MOD 1000000007

ll n;
ll ans = ;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        ans *= 2;
        ans %= MOD;
    }

    cout << ans;


    return 0;
}
