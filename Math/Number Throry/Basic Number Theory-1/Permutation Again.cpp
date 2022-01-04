/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
long long ar[100001] = {0};
using namespace std;
 
void permutation_Sum()
{
    ar[0] = 0;
    ar[1] = 1;
    ar[2] = 1;
    for(long long i = 3; i < 100001; i++)
        ar[i] = i - (i % 2) + ar[i - 1];
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    permutation_Sum();
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << ar[n] << endl;
    }
}
