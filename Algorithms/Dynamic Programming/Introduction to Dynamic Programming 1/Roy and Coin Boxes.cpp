/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n; 
    cin >> n;
    vector<long long>v(n + 1, 0);
    long long m; 
    cin >> m;
    while(m--)
    {
        long long x, y; 
        cin >> x >> y;
        x--;
        v[x] += 1;
        v[y] -= 1;
    }
    for(int i = 1; i < n + 1; i++)
        v[i] += v[i - 1];
    long long freq[n + 1] = {0};
    for(int i = 0; i < n; i++)
        freq[v[i]]++;
    for(int i = n; i > 0; i--)
        freq[i - 1] += freq[i];
    long long q; 
    cin >> q;
    while(q--)
    {
        long long num; 
        cin >> num;
        cout << freq[num] << endl;
    }
    return 0;
}
