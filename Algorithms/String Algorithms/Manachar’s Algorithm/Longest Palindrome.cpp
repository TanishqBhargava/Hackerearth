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
    int n, l, a = 0;
    cin >> n >> l;
    string s;
    cin >> s;
    vector<int>v, b(l);
    for(int i = 0; i < l; i++) 
        v.push_back(n / l);
    int len = v.size();
    for(int i = 0; i < n % l; i++) 
        v[rand() % len] += 1;
    random_shuffle(v.begin(), v.end());
    for(int i = 1; i <= l; i++) 
        b[i - 1] = i;
    random_shuffle(b.begin(), b.end());
    for(auto i : v) 
	{
        int ans = a + i;
        cout << ans << "\n";
        a = ans;
    }
    for(auto i : b) 
        cout << i << ' ';
    cout << "\n";  
	return 0;  
}
