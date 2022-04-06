/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
map<char, char> par;
int cc, f[30];

bool isprime(long long n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int find(char a)
{
	cc = 0;
	while(par[a] != NULL)
	{
		cc++;
		a = par[a];
	}
	return cc;
}
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, ar[30] = {0};
	cin >> n;
	string s[n];
	for(int i = 0; i < n; i++)
		cin >> s[i];
	for(int i = 0; i < n; i++)
	{
		for(int k = 0; k < s[i].size(); k++)
			f[s[i][k] - 'a'] = 1;
	}		
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			for(int k = 0; k < s[i].size(); k++)
			{
				f[s[i][k] - 'a'] = 1;
				if(s[i][k] != s[j][k])
				{
					if(find(par[s[j][k]]) <= find(s[i][k]))
					    par[s[j][k]] =  s[i][k];
					break;
				}
			}
		}
	}
	for(int i = 0; i < 26; i++)
	{
		cc = 0;
		if(f[i] == 1)
	        ar[i] = find('a' + i);
	}
	string ss[30];
	for(int i = 0; i < 30; i++)
	{
		if(f[i] == 1)
			ss[ar[i]] += (i + 'a');
	}
	for(int i = 0; i < 30; i++)
	{
		if(ss[i].size() > 0)
			cout << ss[i] << endl;
	}
}
