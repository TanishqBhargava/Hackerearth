/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    unsigned int T, N, K, temp;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        unsigned int quotient = N / K, sum = 0;
        unordered_map<unsigned int, unsigned long long int> countMap;
        for (unsigned int i = 0; i < N; i++)
        {
            cin >> temp;
            countMap[temp]++;
        }
        for (auto val: countMap)
        {
            if (val.second % quotient == 0)
                sum += val.second / quotient;
        }
        if(sum == K) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
