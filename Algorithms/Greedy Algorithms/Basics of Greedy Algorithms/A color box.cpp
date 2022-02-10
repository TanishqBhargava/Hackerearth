/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        long long c = 0, ct = 0, extra = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
            {
                c = a[i] - b[i];
                if((c & 1))
                    extra += (c - 1) / 2;
                else
                    extra += c / 2;
            }
            else if(b[i] > a[i])
                ct += b[i] - a[i];
        }
        if(extra >= ct)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;       
    }
}
