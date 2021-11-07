/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s; 
    cin >> s;
    int n = (int)s.length(), sum = 0;
    for(int i = 0; i < n; i++)
        sum += (s[i] - '0');
    sum %= 3;
    if(sum == 0)
    {
        cout << s << endl; 
        return;
    }
    bool ok = false;
    int dig = 3 - sum;
    for(int i = 0; i < n; i++)
    {
        if(!ok && s[i] - '0' > dig)
        {
            cout << dig; 
            ok = true;
        }
        cout << s[i];
    }
    if(!ok) 
        cout << dig;
    cout << endl;
}
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long int t; 
    cin >> t; 
    while(t--)
       solve();
	  return 0;
}
