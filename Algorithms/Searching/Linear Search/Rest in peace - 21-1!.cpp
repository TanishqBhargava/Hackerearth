/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	  int t;
	  cin >> t;
	  while(t--)
	  {
		    int n;
		    cin >> n;
		    if(n % 21 == 0)
			      cout << "The streak is broken!" << endl;
		    else
		    {
			      string str = to_string(n);
			      str.find("21") == string::npos ? cout << "The streak lives still in our heart!" << endl : cout << "The streak is broken!" << endl;
		    }
	  }
}
