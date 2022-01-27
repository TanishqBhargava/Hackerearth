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
    int a, b, num = 0;
    cin >> a >> b;
    char arr[a][b], x, y;
    for(x = 0; x < a; ++x)
    {
        for(y = 0; y < b; ++y)
            cin >> arr[x][y];
    } 
    for(x = 0; x < a; ++x)
    {
        for(y = 0; y < b; ++y)
        {
            if(arr[x][y] == 's')
            {
                if((x < (a - 3)) && (arr[x + 1][y] == 'a' && arr[x + 2][y] == 'b' && arr[x + 3][y] == 'a'))
                    ++num;
                if((y < b - 3) && (arr[x][y + 1] == 'a' && arr[x][y + 2] == 'b' && arr[x][y + 3] == 'a'))
                    ++num;
                if((x >= 3 && y < (b - 3)) && (arr[x - 1][y + 1] == 'a' && arr[x - 2][y + 2] == 'b' && arr[x - 3][y + 3] == 'a'))
                    ++num;
                if((x < (a - 3) && y < (b - 3)) && (arr[x + 1][y + 1] == 'a' && arr[x + 2][y + 2] == 'b' && arr[x + 3][y + 3] == 'a'))
                    ++num;                  
            }
        }
    }
    cout << num << endl;
}
