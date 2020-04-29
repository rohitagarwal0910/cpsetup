const long long int N = 1e5;  // limit for array size
long long int segsize;  // array size
long long int t[2 * N];

void build() {  // build the tree
  for (long long int i = segsize - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

void modify(long long int p, long long int value) {  // set value at position p
  for (t[p += segsize] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
}

long long int query(long long int l, long long int r) {  // sum on interval [l, r)
  long long int res = 0;
  for (l += segsize, r += segsize; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += t[l++];
    if (r&1) res += t[--r];
  }
  return res;
}