typedef lli long long int;
lli mod = 1000000007;

lli modn(lli a) {
    return (a%mod + mod) % mod;
}

lli modm(lli a, lli b){
    return ((a%mod)*(b%mod))%mod;
}

lli mods(lli a, lli b){
    return ((a%mod)+(b%mod))%mod;
}

lli modd(lli a, lli b){
    return ((a%mod)-(b%mod))%mod;
}

lli nCr(int n, int r) // returns nCr in O(r), returns 1 for n < r
{
    if (n-r< r) r=n - r;
    lli ans = 1;
    int y = r;
    for (int i = n; i > n-y; i--){
        ans = ans*i;
        while (r>0 && ans%r==0) {ans = ans/r; r--;}
    }
    return ans;
}

lli power(lli x, lli y, lli m) // x to power y mod m
{
    if (y == 0) {
        return 1;
    }
    lli p = power(x, y/2, m) % m;
    p = (p*p)%m;
    return (y%2==0) ? p : (x*p)%m;
}

lli modinv(lli a) // for prime mod
{
    return power(a, mod-2, mod); 
}

vlli getcoeff(vlli &v){ // get coefficents of x for polynomial with roots stored in the input vector !!! MAKE CHANGES
                        // can be used to get sum of product of numbers taken k at a time. use mods in third loop and get the coeff
                        // O(n^2)
                        // ....
                        // return mod values
                        // https://stackoverflow.com/questions/33594384/find-the-coefficients-of-the-polynomial-given-its-roots
    vlli coef(v.size()+1, 0);
    coef[0] = 1;
    for(lli i=0; i<v.size(); i++){
        vlli temp = coef;
        for(lli j=temp.size()-1; j>0; j--){
            temp[j] = coef[j-1];
        }
        temp[0] = 0;
        for(lli j=0; j<coef.size(); j++){
            coef[j] = modm(v[i], coef[j]);
        }
        for(lli j = 0; j<coef.size(); j++){
            coef[j] = modd(temp[j],coef[j]);
        }
    }
    return coef;
}

vll getPos(lli n){ //return indexes of 1s in binary representations of n in ascending order
    lli bit=0;
    vll tr;
    while(n){
        if(n&1) tr.pb(bit);
        bit++;
        n>>=1;
    }
    return tr;
}