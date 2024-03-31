#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    while(true)
    {
        cout << n << " ";
        if(n==1)
            break;
        if(n%2==0)
            n /= 2;
        else n = n*3 + 1;
    }
    return 0;
}
