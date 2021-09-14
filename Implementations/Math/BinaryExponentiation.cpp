ll binexp(ll a1, ll b1, ll m1){ // a1^b1 mod m1
    a1 %= m1;
    ll res1 = 1;
    while(b1 > 0){
        if(b1&1) res1 = res1 * a1 % m1;
        a1 = a1 * a1 % m1;
        b1 >>= 1;
    }
    return res1;
}
