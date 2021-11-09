/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, n;
    cin >> a;
    while(a--)
	  {
        cin >> n;
        if(n % 2 == 0)
         	  cout << n / 2 << endl;
        else
         	  cout << n / 2 + 1 << endl;
    }
}
