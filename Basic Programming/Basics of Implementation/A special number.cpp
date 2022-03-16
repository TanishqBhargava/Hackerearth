/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int digit(string e)
{
    int s = 0;
    for (char c : e)
        s += (c - '0'); 
    return s;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        int ip;
        cin >> ip;
        while(digit(to_string(ip)) % 4 != 0)
            ip += 1;
        cout << ip << endl;
    }
}
