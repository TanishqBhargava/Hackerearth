/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int mat[105][5005], ar[105], M, N, Q;
    
int solve()
{
    int ans = M - 1;
    for(int i = 0; i < N; i++)
	{
        while(ar[i] < mat[i][ans])
            ans--;
    }
    return ans + 1;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M >> Q;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> mat[i][j];
    while(Q--)
	{
        for(int i = 0; i < N; i++)
            cin >> ar[i];
        cout << solve() << endl;
    }
    return 0;
}
