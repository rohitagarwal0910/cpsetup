/// Name: B. modulo
/// Guarantee: const long long int MOD
const long long int MOD = 1000000007;
// const long long int MOD = 998244353;

long long int mod(long long int a, long long int m=MOD) {return (a % m + m) % m;} // will return -1 % 4 = 3
long long int modSum(long long int a, long long int b, long long int m=MOD) {return ((a % m) + (b % m)) % m;}
long long int modDiff(long long int a, long long int b, long long int m=MOD) {return ((a % m) - (b % m)) % m;}
long long int modProd(long long int a, long long int b, long long int m=MOD) {return ((a % m) * (b % m)) % m;}
long long int modPow(long long int x, long long int y, long long int m=MOD) { 
    if (y == 0) return 1; 
    long long int p = modPow(x, y/2, m) % m; 
    p = (p * p) % m; 
    return (y%2 == 0)? p : (x * p) % m; 
} 
long long int modInv(long long int a, long long int m=MOD) {return modPow(a, m-2, m);} // only for prime m and coprime a and m
long long int modDiv(long long int a, long long int b, long long int m=MOD) {return modProd(a,modInv(b,m),m);} // only for prime m and coprime b and m