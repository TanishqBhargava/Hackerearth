/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
long long int pow(long long int base, signed long long int exponent,signed long long int modulus = 1000000007)
{
 	  signed long long int result = 1;
 	  while (exponent > 0)
 	  {
 		    if (exponent % 2 == 1)
 			      result = (result * base) % modulus;
 			  exponent = exponent >> 1;
 			  base = (base * base) % modulus;
 	  }
 	  return result;
}
 
long long int func(signed long long int x, signed long long int n, signed long long int len)
{
 	  signed long long int r = pow(2, len, 1000000007);
 	  signed long long int temp = (pow(r, n, 1000000007) - 1) * pow(r - 1, 1000000005, 1000000007) % 1000000007;
 	  temp = temp * x % 1000000007;
 	  return temp;
}
 
pair<signed long long int,signed long long int> gcd(int a,int b)
{
 	  if(a % b == 0)
 		    return {pow(2, a - 1, 1000000007), pow(2, b - 1, 1000000007)};
 	  else
	  {
 		    pair<signed long long int, signed long long int> x = gcd(b, a % b);
 		    return {(func(x.first, a / b, b) * pow(2, a % b, 1000000007) + x.second) % 1000000007,  x.first};
 	  }
}
 
int main()
{
 	  int T;
 	  cin >> T;
 	  while(T--)
	  {
 		    int x, y;
 		    cin >> x >> y;
 		    cout << gcd(x, y).first << endl;
 	  }
}
