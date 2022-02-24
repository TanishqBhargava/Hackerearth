/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int A[100010], B[100010], lazy[400040];
long long C[2000200];

long long fmod(long long b, long long exp)
{
    long long res = 1;
    while(exp)
    { 
        if(exp & 1ll)
            res = (res * b) % 1000000007;
        b = (b * b) % 1000000007;
        exp /= 2ll;
    }
    return res;
}

struct node
{
    int mxbest, mxlft, mxrt, mnbest, mnlft, mnrt, sm;
    node(){};
    node(int val)
    {
        sm = val;mnlft = val;mxlft = val;mxrt = val; mnrt = val;mxbest = val;mnbest = val;
    }
    void flip()
    {
        sm = -sm;
        swap(mxbest, mnbest);
        swap(mnlft, mxlft);swap(mxrt, mnrt);
        mxbest = -mxbest;mxlft = -mxlft;
        mxrt  = -mxrt;mnbest = -mnbest;
        mnlft = -mnlft; mnrt = -mnrt;
    }
};node tr[400040];

node merge(node &a, node &b)
{
    node p;
    p.mxbest = max(a.mxbest, max(b.mxbest, a.mxrt + b.mxlft));
    p.mxlft = max(a.mxlft, a.sm + b.mxlft);
    p.mxrt = max(b.mxrt, b.sm + a.mxrt);
    p.mnlft = min(a.mnlft, a.sm + b.mnlft);
    p.mnrt = min(b.mnrt, b.sm + a.mnrt);
    p.mnbest = min(a.mnbest, min(b.mnbest, a.mnrt + b.mnlft));
    p.sm = a.sm + b.sm;
    return p;
}

void build(int i, int st, int en)
{
    lazy[i] = 0;
    if(st == en)
    {
        tr[i] = node(B[st]);
        return;
    }
    int mid = (st + en)>>1;
    build(i + i, st, mid);
    build(i + i + 1, mid + 1, en);
    tr[i] = merge(tr[i + i], tr[i + i + 1]);
}

inline void prop(int i, int st, int en)
{
    if(lazy[i] && st != en)
    {
        tr[i + i].flip();
        lazy[i + i] ^= 1;
        tr[i + i + 1].flip();
        lazy[i + i + 1] ^= 1;
    }
    lazy[i] = 0;
}

void upd(int i, int st, int en, int l, int r)
{
    if(st > r || l > en || st > en)
        return;
    if(st >= l && en <= r)
    {
        tr[i].flip();
        lazy[i] ^= 1;
        return;
    }
    if(lazy[i])
        prop(i, st, en);
    int mid = (st + en)>>1;
    if(l <= mid)
        upd(i + i, st, mid, l, r);
    if(r > mid)
        upd(i + i + 1, mid + 1, en, l, r);
    tr[i] = merge(tr[i + i], tr[i + i + 1]);
}

int getLft(int i, int st, int en, int val)
{
    if(tr[i].sm == val)
        return st;
    int mid = (st + en)>>1;
    if(lazy[i])
        prop(i, st, en);
    if(tr[i + i + 1].mxrt == val)
        return getLft(i + i + 1, mid + 1, en, val);
    return getLft(i + i, st, mid, val - tr[i + i + 1].sm);
}

int getRt(int i, int st, int en, int val)
{
    if(tr[i].sm == val)
        return en;
    int mid = (st + en)>>1;
    if(lazy[i])
        prop(i, st, en);
    if(tr[i + i].mxlft == val)
        return getRt(i + i, st, mid, val);
    return getRt(i + i + 1, mid + 1, en, val - tr[i + i].sm);
}

pair<int, int> getAnswer(int i, int st, int en, int val)
{
    if(tr[i].sm == val)
        return make_pair(st, en);
    if(lazy[i])
        prop(i, st, en);
    int mid = (st + en)>>1;
    if(tr[i + i].mxbest == val)
        return getAnswer(i + i, st, mid, val);
    if(tr[i + i + 1].mxbest == val)
        return getAnswer(i + i + 1, mid + 1, en, val);
    int l1 = getLft(i + i, st, mid, val - tr[i + i + 1].mxlft);
    int r1 = getRt(i + i + 1, mid + 1, en, val - tr[i + i].mxrt);
    return make_pair(l1, r1);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, i, k, len = 0;
    cin >> n >> k;
    long long ans = 0;
    for(i = 1; i <= n; i++) 
	{
        cin >> A[i];
        ans += A[i];
    }
    for(int bit = 19; bit >= 0; bit--)
    {
        for(i = 1; i <= n; i++)
            if((1<<bit) & A[i])
                B[i] = 1;
            else 
                B[i] = -1;
        build(1, 1, n);
        while(tr[1].mxbest > 0)
        {
            int cur = tr[1].mxbest;
            pair<int, int> ind = getAnswer(1, 1, n, cur);
            upd(1, 1, n, ind.first, ind.second);
            C[++len] = (1ll<<bit) * 1ll * cur;
        }
    }
    sort(C + 1, C + len + 1);
    reverse(C + 1, C + len + 1);
    for(i = 1; i <= min(k, len); i++)
        ans -= C[i];
    cout << ans << endl;
    return 0;
}
