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
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        long long int arr[26] = {0}, vowels = 0, combination = 1;
        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') && arr[s[i] - 'a'] == 0)
            {
                vowels++;
                arr[s[i] - 'a'] = 1;
            }
            else if(s[i] == '_')
                combination *=  vowels;
        }
        cout << combination << endl;
    }
}
