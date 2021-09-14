bool ok(int curr){ // ok must be monotonic (ok(i) => ok(i+1))
    return true; // Implement ok here
}

int BS(int l, int h){ // Returns minimum i in range [l,h] such that ok(i) is true
    if(l+1>=h) return (ok(l)?l:(l+1));
    int m = (l+h)/2;
    if(ok(m)) return BS(l,m);
    else return BS(m+1,h);
}
