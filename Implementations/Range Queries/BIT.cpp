int tree[MX];

int sumQ(int i){ // Returns a_1 + a_2 + ... + a_i
    int res = 0;
    while(i >= 1){
        res += tree[i]; i -= i&(-i);
    }
    return res;
}

void addQ(int i, int x){ // Increases a_i by x
    while(i <= MX){
        tree[i] += x; i += i&(-i);
    }
}
