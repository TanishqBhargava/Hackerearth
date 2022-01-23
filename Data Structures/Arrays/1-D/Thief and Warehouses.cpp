/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
inline void input(long long *n)
{
    register char c = getchar_unlocked();
    *n = 0;
    for(;(c < '0' || c > '9'); c = getchar_unlocked());
        for(;(c <= '9' && c >= '0'); c = getchar_unlocked())
        *n = *n*10 + c - 48;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long t, n, i, j, sum, result, a[1000000];
    input(&t);
    while(t--)
    {
        long long i, j;
        input(&n);
        for(i = 0; i < n; i++)
            input(&a[i]);
        result = 0;
        for(i = 0; i < n; i++)
        {
            sum = 0;
            for(j = i - 1; j >= 0; j--)
            {
                if(a[j] < a[i])
                    break;
                sum += a[i];
            }
            for(j = i; j < n; j++)
            {
                if(a[j] < a[i])
                    break;
                sum += a[i];
            }
            result = max(result, sum);
        }
        cout << result << endl;
    }
}
