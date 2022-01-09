/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long arr[1000005];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long n, ones, twos, threes, others;
	cin >> n;
	ones = twos = threes = others = 0;
	for(int i = 0; i < n;i++)
	{
		cin >> arr[i];
		if(arr[i] == 1)
			ones++;
		else if(arr[i] == 2)
			twos++;
		else if(arr[i] == 3)
			threes++;
		else 
			others++;
	}
	long long ans = 0;
	ans = ((ones * (ones - 1) * (ones - 2)) / 2);   		//case: 1 1 1
	ans += ((ones * (ones - 1))) * (twos);					//case: 1 1 2
	ans += ((ones * (ones - 1)) / 2) * (others + threes);	//case: 1 1 x
	ans += ((twos * (twos - 1)) / 2) * (ones);				//case: 1 2 2
	ans += (ones * twos * threes);							//case: 1 2 3
	cout << ans << endl;
	return 0;
}
