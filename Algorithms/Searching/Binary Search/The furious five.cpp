/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

long long int functionn(long long int a)
{
    long long int sum = 0;
    while(a / 5)
    {
        sum += (a / 5);
        a /= 5;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; 
    cin >> t;
    long long int n;
    while(t--)
    {
        cin >> n;
        long long int minn = 5 * n, low = 0, high = 4 * n;
        while(low <= high)
        {
            long long int mid = (low + high) / 2;
            if(functionn(mid + n) >= n)
            {
                minn = min(minn, mid + n);
                high = mid - 1;
            }
            else 
                low = mid + 1;
        }
        cout << minn << endl;
    }
    return 0;
}
