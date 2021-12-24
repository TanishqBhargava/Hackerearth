/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
    cin >> s;
    int n = s.size();
    int v[n + 1] = {0};
    for(int i = n - 1; i >= 0; i--)
	{
        v[i] = v[i + 1];
        if(s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8')
            v[i]++;
    }
    for(int i = 0; i < n; i++) 
		cout << v[i] << " ";
}
