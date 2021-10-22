/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
   std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
   long long t;
   cin >> t;
   while(t--)
   {
       	long long a, b, k, temp = 0, x, y;
       	cin >> a >> b >> k;
        int m = 0;
        while(temp < k)
        {
            x = ((pow(10, m) - a) / b);      // a+(x*b)>=pow(10,m);
            long long num = (pow(10, m) - a);
            if(num > 0 && num % b != 0)
            	  x++;
            if(num <= 0)
            	  x = 0;
            	  y = floor((pow(10,(m + 1)) - a) / b); // a+(y*b)<pow(10,(m+1))
             	  num = pow(10,(m + 1)) - a;
            if(num % b == 0)
            	  y--;
            	  m++;
            if(y >= 0 && y >= x)
            	  temp += ((y - x + 1) * m);
        }
        if(temp == k)
            cout << (a + (y * b)) % 10 << endl;
        else
        {
            long long fg = (temp - k);
            fg /= m;
            fg = y - fg;
            long long num = a + (fg * b);
            long long ct = (temp + 1) - (m * (y - fg));
            ct--;
            long long ans = num % 10;
            num /= 10;
            while(ct > k)
            {
                ans = num % 10;
                num /= 10;
                ct--;
            }
            cout << ans << endl;
        }
    }
}
