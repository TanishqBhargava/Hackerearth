/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long int T, q, i, j;
	string str1, str2, str;
	cin >> T;
	for(q = 0; q < T; q++)
	{
 		cin >> str1 >> str2;
 		str = "";
 		for(i = 0; i < str1.length(); i++)
 		{
  			for(j = 0; j < str2.length(); j++)
  			{
   				if(str1[i] == str2[j])
       				str += str1[i];  
  			}
 		}
 		cout << str << endl;
	}      	    
}
