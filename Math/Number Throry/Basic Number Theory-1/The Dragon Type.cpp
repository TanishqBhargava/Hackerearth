/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int p;

long long int bpow(long long int x, long long int n)
{
    long long int ans = 1;
    while(n > 0)
    {
        if(n & 1) 
            ans *= x;
        x *= x;
        x %= p;
        ans %= p;
        n /= 2;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    set<int>S;
    cin >> N >> p;
    map<int, int>M;
    long long int ans = 0, A[200011];
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
        A[i] %= p;
        M[A[i]]++;
        S.insert(A[i]);
    }
    for(map<int,int>::iterator it = M.begin(); it != M.end(); it++)
    {
        pair<long long int, long long int> x = *it;
        if(x.first == 0) 
            continue;
        int f1 = x.first;
        int f2 = bpow(x.first, p - 2);
        if(f1 != f2)
        {
            if(S.count(f1) and S.count(f2))
            {
                if(f1 < f2) 
                    ans += max(M[f1], M[f2]);
            }
            else
                ans += x.second;       
        }
    }
    ans += M[0];
    cout << ans;
}
