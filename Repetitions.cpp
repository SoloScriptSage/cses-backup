#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, num;
ll a, t, c, g;

char ch;
set<long long> ss;
string s;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    c = 1;
    ch = s[0];

    for(int i = 1; i < s.size(); ++i){
        if(s[i] != s[i-1]){
            m = max(m, c);
            c = 0;
        }
        c++;
    }

    cout << max(m, c);

    return 0;
}
