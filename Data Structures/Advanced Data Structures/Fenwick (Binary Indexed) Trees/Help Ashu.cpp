/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int BIT[100005], a[100005];

void upd(int idx, int val)
{
    for(int i = idx; i < 100005; i += i & (-i))
    BIT[i]+=val;
}

int query(int val)
{
    int ret = 0;
    while(val)
	{
        ret += BIT[val];
        val -= val & (-val);
    }
    return ret;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, i, q, l, r, ch;
    cin >> n;
    for(int i = 1; i <= n; i++)
	{
        cin >> a[i];
        if(a[i] % 2 == 0)
        	upd(i, 1);
    }
    cin >> q;
    while(q--)
	{
        cin >> ch >> l >> r;
        if(ch == 0)
		{
            if(r % 2 == 1 && a[l] % 2 == 0)
            	upd(l, -1);
            if(r % 2 == 0 && a[l] % 2 == 1)
            	upd(l, 1);
            a[l] = r;
        }
        else if(ch == 1)
		{
            int cnt = query(r) - query(l - 1);
            cout << cnt << endl;
        }
        else
		{
            int cnt = query(r) - query(l - 1);
            cout << (r - l + 1) - cnt << endl;
        }
    }
    return 0;
}
