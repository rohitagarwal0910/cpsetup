#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define vec vector
#define vi vector<int>
#define vlli vector<long long int>
#define vvlli vector<vector<long long int>>
#define pb push_back
#define fin for (int i = 0; i < n; i++)
#define fiv for (int i = 0; i < v.size(); i++)
#define fis for (int i = 0; i < s.size(); i++)
#define vs v.size()
const int pmod = 1000000007;

lli mod(lli a) {
    return (a % pmod + pmod) % pmod;
}

lli modp(lli a, lli b) {
    return ((a % pmod) * (b % pmod)) % pmod;
}

lli mods(lli a, lli b) {
    return ((a % pmod) + (b % pmod)) % pmod;
}

lli modd(lli a, lli b) {
    return ((a % pmod) - (b % pmod)) % pmod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    for (int t = 1; t<=T; t++) {
        cout << "Case #" << t << ": ";
    }
    return 0;
}