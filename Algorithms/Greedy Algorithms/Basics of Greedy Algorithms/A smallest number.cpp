/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	  int T;
	  cin >> T;
	  while(T--)
	  {
		    int n, curr_prod = 1, curr_sum = 0;
		    cin >> n;
		    string myStr;
		    for(int i =  n; i >= 1; i--)
		    {
			      if(i >= 8)
			      {
				        myStr += '1';
				        curr_sum++;
			      }
			      else
			      {
				        for(int j = 1; j < 10; j++)
				        {
					          int max_prod = curr_prod * j, max_sum = curr_sum + j;
					          for(int k = i - 1; k >= 1; k--)
					          { 
						            max_sum += 9;
						            max_prod *= 9;
					          }
					          if(max_prod >= max_sum)
					          {
						            myStr += ('0' + j);
						            curr_sum += j;
						            curr_prod *= j;
						            break;
					            }
				          }
			        }
          }
		     cout << myStr << endl;
	  }
}
