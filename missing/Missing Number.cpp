#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, num;
set<long long> s;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1; i < n; ++i){
        cin >> num;
        s.insert(num);
    }

    for(int i=1; i <= n; ++i){
        if(s.count(i)==0){
            cout << i;
            break;
        }
    }
    return 0;
}
