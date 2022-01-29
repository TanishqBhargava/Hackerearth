/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
// Method-1 Using Nested Loops
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++)
        cin >> a[i];
    for(long long i = 0; i < n; i++)
    {
        int j, k, f = 0;
        for(j = i + 1; j < n; j++)
            if(a[j] > a[i])
                break;
        for(k = j + 1; k < n; k++)
            if(a[k] < a[j])
            {
                f++;
                break;
            }
            if(f>0)
                cout << a[k] << " ";
            else
                cout << "-1 ";
    }
    return 0;
}
//using Stacks
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    short int a[n], ng[n], ns[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    stack<short int> s1, s2;
    for(short int i = n - 1; i >= 0; i--)
    {
        while(!s1.empty() && a[s1.top()] <= a[i] )
            s1.pop();
        if(!s1.empty())
            ng[i] = s1.top();
        else
            ng[i] = -1;
        s1.push(i);
    }
    for(short int i = n - 1; i >= 0; i--)
    {
        while(!s2.empty() && a[s2.top()] >= a[i])
            s2.pop();
        if (!s2.empty())
            ns[i] = s2.top();
        else
            ns[i] = -1;
        s2.push(i);
    }
    for(short int i = 0; i < n; i++)
    {
        if(ng[i] != -1 && ns[ng[i]] != -1)
            cout << a[ns[ng[i]]] <<" ";
        else
            cout << -1 << " ";
    }
    return 0;
}
