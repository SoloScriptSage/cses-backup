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

    if(n == 2 || n == 3)
        cout << "NO SOLUTION";
    else{
        for(int i = 1; i <= n; i++)
            if(i%2==0) cout << i << " ";
        for(int i = 1; i <= n; i++)
            if(i%2!=0) cout << i << " ";
    }

    return 0;
}
