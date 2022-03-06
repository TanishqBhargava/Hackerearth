/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int fw[1000005][2] = {0};
 
long long int power(long long int a, long long int b) 
{
    long long int ans = 1;
    while(b) 
    {
        if(b & 1) 
            ans = (ans * a) % 1000000007;
        a = (a * a) % 1000000007;
        b /= 2;
    }
    return ans;
}  
 
void upd(int ind, int val, int p)
{
    while(ind < 1000005)
    {
        fw[ind][p] += val;
        ind += (ind & (-ind));
    }
}
 
int sum(int ind, int p)
{
    int s = 0;
    while(ind > 0)
    {
        s += fw[ind][p];
        ind -= (ind & (-ind));
    }
    return s;
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)
    { 
        int n, q;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                int a = n - 1 - i;
                if(a % 2 == 1)
                { 
                    upd(i + 1, 2, 0); 
                    upd(i + 1, 1, 1); 
                }
                else
                { 
                    upd(i + 1, 1, 0); 
                    upd(i + 1, 2, 1); 
                }
            }
        }
        cin >> q;
        while(q--)
        {
            int a;
            cin >> a;
            if(a == 0)
            {
                int l, r;
                cin >> l >> r; 
                if(r % 2 == (n - 1) % 2)
                    cout << (sum(r + 1, 0) - sum(l, 0)) % 3 << endl;
                else
                    cout << (sum(r + 1, 1) - sum(l, 1)) % 3 << endl;
            }
            else
            {
                int i;
                cin >> i;
                if(s[i] == '1') 
                    continue;
                int a = n - 1 - i;
                if(a % 2 == 1)
                { 
                    upd(i + 1, 2, 0); 
                    upd(i + 1, 1, 1); 
                }
                else
                { 
                    upd(i + 1, 1, 0); 
                    upd(i + 1, 2, 1); 
                }
                s[i] = '1';
            }
        }   
    }
    return 0;
}
