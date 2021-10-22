/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
long long get(long long i)
{
	  long long sq = sqrt(i), val1 = i * sq, val2 = (i + 1) / 2;
	  return val1 + val2;
}
 
int main()
{
	  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	  long long sum = 0;
	  vector<long long> store;
	  for(long long i = 1; i <= 1000000; i++)
	  {
		    sum += get(i);
		    store.push_back(sum);
	  }
	  long long q;
	  cin >> q;
	  while(q--)
	  {
		    long long L, R;
		    cin >> L >> R;
		    long long low = lower_bound((store).begin(),(store).end(), L) - store.begin();
		    long long high = lower_bound((store).begin(),(store).end(), R) - store.begin();
		    cout << high - low + 1 << endl;
	  }
}
