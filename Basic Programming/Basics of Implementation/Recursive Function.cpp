/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int f(long long int x, long long int y) 
{
    x %= 1000;
    y %= 1000;
    if(x == 0) 
        return y + 1;
    else if(x > 0 && y == 0) 
        return f(x - 1, 1);
    else if(x > 0 && y > 0) 
        return f(x - 1, f(x, y - 1));
}

int result(long long int x, long long int y)
{
    long long int ans = f(x, y);
    return ans % 1000;
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x, y;
    cin >> x >> y;
    int z = result(x, y);
    cout << setw(3) << setfill('0') << z;
    return 0;   
}
