/// Name: modulo
/// Guarantee: const int MOD = 1000000007;
const long long int MOD = 1000000007;

long long int mod(long long int a) { // will return -1 % 4 = 3
    return (a % MOD + MOD) % MOD;
}
long long int modSum(long long int a, long long int b) {
    return ((a % MOD) + (b % MOD)) % MOD;
}
long long int modDiff(long long int a, long long int b) {
    return ((a % MOD) - (b % MOD)) % MOD;
}
long long int modProd(long long int a, long long int b) {
    return ((a % MOD) * (b % MOD)) % MOD;
}
long long int modPower(long long int x, long long int y) { // x to power y
    if (y == 0) return 1;
    long long int p = modPower(x, y/2) % MOD;
    p = (p*p)%MOD;
    return (y%2==0) ? p : (x*p)%MOD;
}