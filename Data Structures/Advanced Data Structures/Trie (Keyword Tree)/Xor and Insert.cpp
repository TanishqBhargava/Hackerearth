/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int t[15000000][2], sz = 1;

void insert(int x)
{
    int p = 0;
    for(int i = 29; i >= 0; i--)
	{
        if(!t[p][x >> i & 1])
            t[p][x >> i & 1] = sz++;
        p = t[p][x >> i & 1];
    }
}

int get(int x)
{
    int ans = 0, p = 0;
    for(int i = 29; i >= 0; i--)
	{
        bool me = (x >> i & 1);
        if(t[p][me])
            p = t[p][me];
        else
            p = t[p][!me], ans |= 1 << i;       
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    insert(0);
	int q, curx = 0;
    cin >> q;
    while(q--)
	{
        int t;
        cin >> t;
        if(t == 1)
		{
            int x;
            cin >> x;
            insert(x ^ curx);
        }
        else if(t == 2)
		{
            int x;
            cin >> x;
            curx ^= x;
        }
        else
            cout << get(curx) << endl;
    }
}
