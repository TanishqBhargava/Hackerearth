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
	string s;
    cin >> s;
    int arr[26] = {0};
    for(int i = 0; i < s.size(); i++)
	{
        if(arr[s[i] - 'a'] == 0)
		{
            arr[s[i] - 'a']++;
            cout << s[i];
        }
     }
}
