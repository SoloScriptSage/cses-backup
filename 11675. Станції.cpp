#include <bits/stdc++.h>

#define ll long long
#define DIM 100009

using namespace std;

string a[DIM], b[DIM];
ll n, m, c, ans, L,R, num;
ll S[DIM], T[DIM];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < m; ++i)
        cin >> b[i];

    for(int i = 0; i < m; ++i)
    {
        for(int j = c; j < n; ++j)
        {
            if(b[i] == a[j])
            {
                cout << "Yes" << endl;
                c = j+1;
                break;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
