#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define DIM 10000008
ll n, m, num,c;
set<long long> s;
ll a[DIM];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    for(int i = 1; i < n; ++i)
    {
        if(a[i]<a[i-1]){
            c += a[i-1] - a[i];
            a[i] += a[i-1] - a[i];
        }
    }

    cout << c;

    return 0;
}
