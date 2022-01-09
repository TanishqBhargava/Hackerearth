/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long fact[21];

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	fact[0] = 1; 
	for(long long i = 1; i <= 20; ++i) 
		fact[i] = fact[i - 1] * i;
  	long long t; 
	cin >> t; 
	while(t--)
	{
    	string s; 
		long long n, x = 0; 
		cin >> s >> n; 
		sort(s.begin(), s.end());
    	long long freq[26] = {0}, sum = 0, k = 0, len = s.size();
    	for(long long i = 0; i < len; i++) 
			freq[s[i] - 'a']++;
    	char out[26];
    	while(sum != n)
		{ 
			sum = 0;
      		for(long long i = 0; i < 26; i++)
			{
        		if(freq[i] == 0) 
					continue;
        		freq[i]--;
		        long long xsum = fact[len - 1 - k];
        		for(long long j = 0; j < 26; j++) 
					xsum /= fact[freq[j]];
        		sum += xsum;
        		if(sum >= n)
				{ 
					out[k++] = i + 'a'; 
					n -= (sum - xsum); 
					break; 
				}
        		if(sum < n) 
					freq[i]++;
      		}
    	}
    	for(long long i = 25; k < len and i >= 0; i--) 
			if(freq[i])
			{ 
				out[k++] = i + 'a'; 
				freq[i++]--; 
			}
    		for(long long i = 0; i < k; ++i) 
				cout << out[i];
    	cout << endl;
  	}
  	return 0;
}
