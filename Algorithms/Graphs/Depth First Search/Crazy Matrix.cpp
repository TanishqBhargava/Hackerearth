/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, arr [100 + 10][100 + 10], dirc [8][2] = { {0 , 1}, {0 , -1}, {1 , 0}, {-1 , 0}, {1 , 1}, {1 , -1}, {-1 , -1}, {-1 , 1} };    
bool vis1 [100 + 10][100 + 10], vis2 [100 + 10][100 + 10];             
 
bool dfs(int x, int y, int comp, bool vis [][100 + 10])
{
    if(comp == 1 && x == n - 1) 
        return true;       
    if(comp == 2 && y == n - 1) 
        return true;       
    vis[x][y] = true;
    bool ans = false;
    for(int i = 0; i < 8 && !ans; i++)
    {
        int dx = x + dirc[i][0];                   
        int dy = y + dirc[i][1];
        if(dx < 0 || dx >= n || dy < 0|| dy >= n) 
            continue;     
        if(arr[dx][dy] == comp && !vis[dx][dy])
            ans |= dfs(dx, dy, comp, vis);          
    }
    return ans;
}
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);            
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    bool ones = false, twos = false;
    for(int i = 0; i < n  && !ones ; i++)
    {
        if(arr[0][i] == 1 && !vis1[0][i]) 
            ones = dfs(0 , i , 1, vis1);  
    }
    for(int i = 0; i < n  && !twos ; i++)
    {
        if(arr[i][0] == 2 && !vis2[i][0]) 
            twos = dfs(i , 0 , 2, vis2);    
    }
    if(ones && twos) 
        cout << "AMBIGUOUS";
    else if (ones) 
        cout << "1";
    else if (twos) 
        cout << "2";
    else 
        cout << "0";
    return 0;
}
