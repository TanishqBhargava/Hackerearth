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
    long long int N;
    cin >> N;
    char dir;
    long long int mat[N + 1][N + 1], left = 0, right = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            cin >> mat[i][j];
    }
    for(int i = 0; i < 3; i++)
    {
        cin >> dir;
        if(dir == 'R')
            left++;
        else
            right--;
    }
    if(left + right == 3 || left + right == -1)
    {
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                cout << mat[j][N - i - 1] << " ";
            cout << endl;
    }
    else if(left + right == 1 || left + right == -3)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
                cout << mat[N - j - 1][i] << " ";
            cout << endl;
        }
    }
    return 0;    
}
