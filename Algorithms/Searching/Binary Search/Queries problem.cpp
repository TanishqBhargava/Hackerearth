/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long double fen[100017], a[100017];

void upd(int p, long double x)
{
	  for(p++; p < 100017; p += p & -p)
		    fen[p] += x;
}

long double get(int p)
{
	  long double ans = 0;
	  for(; p; p ^= p & -p)
		    ans += fen[p];
	  return ans;
}

int main()
{
	  ios::sync_with_stdio(0), cin.tie(0); cout.tie(0);
    int n, m;
	  cin >> n >> m;
	  long double s = 0;
	  for(int i = 0; i < n; i++)
    {
		    long long x;
		    cin >> x;
		    upd(i, log(x));
		    s += log(x);
	  }
	  while(m--)
    {
		    int t;
		    cin >> t;
		    if(t == 1)
        {
			      int i;
			      long long x;
			      cin >> i >> x;
			      i--;
			      upd(i, log(x));
			      s += log(x);
		    }
		    else
        {
			      int lo = -1, hi = n;
			      auto f = [&s](int i)
            {
				        return abs(get(i + 1) - (s - get(i + 1)));
			      };
			      while(hi - lo > 2)
            {
				        int lh = lo + (hi - lo) / 3, rh = hi - (hi - lo) / 3;
				        if(f(rh) >= f(lh))
					          hi = rh;
				        else
					          lo = lh;
			      }
			      cout << lo + 2 << endl;
        }
	  }
}
