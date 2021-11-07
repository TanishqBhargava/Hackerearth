/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long int T; 
    cin >> T; 
    while(T--)
    {
        long long int n; 
        cin >> n;
        vector<long long int>a(n), b(n + 1);
        for(auto &it:a) 
            cin>>it;
        long long int first = -1;
        for(long long int i = 0; i < n; i++)
        {
            if(a[i] != (i + 1))
            {
                first = i;
                i = n + 3;
            }
        }
        if(first == -1)
            swap(a[n - 1], a[n - 2]);
        else
        {
            long long int secondval = first + 1, second;
            for(long long int i = 0; i < n; i++)
            {
                if(a[i] == secondval)
                    second = i;
            }
            swap(a[first], a[second]);
        }
        for(auto &it:a)
            cout << it << " ";
        cout << endl;
    }
	  return 0;
}
