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
    int n, keys;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> keys;
    int letters[keys], sum = 0;
    for(int i = 0; i < keys; i++)
    cin >> letters[i], sum += letters[i];
    if(sum < n)
        cout << -1 << endl;
    else
    {
        sort(a, a + n, greater<int>());
        sort(letters, letters + keys);
        int ans = 0, i = 0, times = 1;
        while(i < n)
        {
            for(int j = 0; j < keys; j++)
            {
                if(letters[j] > 0 && i < n)
                    ans += times * a[i++], letters[j]--;
            }
            times++;
        }
        cout << ans;
    }
}
