#include <bits/stdc++.h>

#define DIM 100008
using namespace std;

long long n, c, t, a[DIM][DIM], lowind, lowest = 10000000, sum = 1, score;
long long sc[] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
string s;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int a[100];
        for(int i = 1; i <= n; ++i){
            if(i==1 || i==2){
                a[i]=i;
            }else{
                a[i]=a[i-1]+i;
            }
        }

        cout << a[n];
    return 0;
}
