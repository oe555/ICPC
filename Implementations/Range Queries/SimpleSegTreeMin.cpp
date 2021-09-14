int n;
ll tree[2*MX];
 
ll segMinQ(int a1, int b1) { // min(a_a1, a_(a1+1), ..., a_b1)
    a1 += n; b1 += n;
    ll res = LLONG_MAX;
    while (a1 <= b1) {
        if (a1%2 == 1) res = min(res, tree[a1++]);
        if (b1%2 == 0) res = min(res, tree[b1--]);
        a1 /= 2; b1 /= 2;
    }
    return res;
}
void segAdd(int i1, ll x1) { // Adds x1 to a_i1
    i1 += n;
    tree[i1] += x1;
    for (i1 /= 2; i1 >= 1; i1 /= 2) {
        tree[i1] = min(tree[2*i1], tree[2*i1+1]);
    }
}
