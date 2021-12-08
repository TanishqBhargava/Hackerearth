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
	long long N, K, t;
    vector<long long> ar;
    cin >> N >> K;
	for(long long i = 0; i < N; i++)
	{
        cin >> t;
        ar.push_back(t);
    }
    sort(ar.begin(), ar.begin() + N);
    long long ans = 0;
    for(long long i = 0; i < N; i++)
        for(long long j = i + 1; j < N; j++)
		{
            long long f = K / ar[i];
            f /= ar[j];
            auto up = upper_bound(ar.begin(), ar.end(), f);
            if(up - ar.begin() > j)
               ans += (up - (ar.begin() + j) - 1);
        }
    cout << ans << endl;
}
