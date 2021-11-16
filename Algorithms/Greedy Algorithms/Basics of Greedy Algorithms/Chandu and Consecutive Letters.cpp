/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T, len;
    cin >> T;
    while(T--)
    {   
        string S, str;
        cin >> S;
        str += S[0];
        len = S.length();
        for(int i = 1; i < len; i++)
		{    
        	if(S[i] != S[i - 1])
            	str += S[i];
    	}
        cout << str << endl;
    }
}
