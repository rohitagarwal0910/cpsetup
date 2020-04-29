/// Name: nCr
/// Description: in O(r)
/// Guarantee: long long int nCr(int n, int r)
long long int nCr(long long int n, long long int r) // returns nCr in O(r), returns 1 for n < r
{
    if (n-r< r) r=n - r;
    long long int ans = 1;
    long long int y = r;
    for (long long int i = n; i > n-y; i--){
        ans = ans*i;
        while (r>0 && ans%r==0) {ans = ans/r; r--;}
    }
    return ans;
}