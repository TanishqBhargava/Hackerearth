/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	  long long n;
	  cin >> n;
	  vector<long long> v;
	  long long a[n + 1], j = 1;
	  a[0] = 0;
	  for(long long i = 0; i < n; i++)
    {
		    long long t, f, s;
		    cin >> t >> f >> s;
		    if(t == 1)
        {
			      v.push_back(s);
			      a[j] = a[j - 1] + f;
			      j++;
		    }
		    else
        {
			      long long k1 = lower_bound(v.begin(), v.end(), s - f) - v.begin();
			      long long k2 = lower_bound(v.begin(), v.end(), s) - v.begin();
			      if(v[k2] == s) 
                k2++;
			      cout << a[k2] - a[k1] << endl;
		    }
	  }
}
