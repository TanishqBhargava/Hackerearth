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
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	int a[n + 1];
    	for(int i = 1; i <= n; i++)
    		cin >> a[i];
    	stack<int>s1, s2;
    	int f[n + 1], b[n + 1];
    	b[1] = 0;
    	s1.push(1);
    	for(int i = 2; i <= n; i++)
    	{
        	while(!s1.empty() && a[i] > a[s1.top()]) 
				s1.pop();
        	if(!s1.empty())
				b[i] = i - s1.top(); 
			else
        		b[i] = i - 1;
        	s1.push(i);
    	}
    	f[n] = 0;
    	s2.push(n);
    	for(int i = n - 1; i > 0; i--)
    	{
        	while(!s2.empty() && a[i] > a[s2.top()])
				s2.pop();
        	if(!s2.empty())
				f[i] = s2.top() - i; 
			else
        		f[i] = n - i;
        	s2.push(i);
    	}
    	long long int sum = 0, ma = INT_MIN, index = -1;
    	for(int i = 1; i <= n; i++)
    	{
        	sum = f[i] + b[i];
         	sum = ((sum % 1000000007) * (i)) % 1000000007;
        	if(sum > ma)
        	{
            	ma = sum;
            	index = i;
        	}
    	}
    	cout << index << endl;
    }
}
