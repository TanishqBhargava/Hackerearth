/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long solve (long long, long long);
 
int main()
{ 
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   long long A, B, out_;
   cin >> A >> B;
   out_ = solve(A,B);
   cout << out_;
}
 
long long solve(long long A, long long B)
{
   long long k = __gcd(A,B); 
   if(k == 1)
      return -1;
   for(long long i = 2; i * i <= k; i++)
   {
      if(k % i == 0)
         return i;
   }
   return k;
}
