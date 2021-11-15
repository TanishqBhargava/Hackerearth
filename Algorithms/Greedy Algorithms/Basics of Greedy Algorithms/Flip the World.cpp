/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v;
        string s; 
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        int count = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = m - 1; j >= 0; j--)
            {
                if(v[i][j] == '0')
                {
                    count++;
                    for(int p = i; p >= 0; p--)
                        for(int q = j; q >= 0; q--)
                            v[p][q] = v[p][q] ^ 1;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
