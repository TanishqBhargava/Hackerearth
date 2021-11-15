/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    string w, r;
    cin >> t;
    while(t--)
	{
        cin >> w >> r;
        sort(r.begin(), r.end()); // sort the second string in lexicographically order
        for(int i = 0, j = 0; i < w.size(); i++)
		{
            if(j >= r.size()) 
				break;                // the secons string finished
            if(w[i] > r[j])
			{
                w[i] = r[j];          // replace the character
                j++;
            }
        }
        cout << w << endl;
    }
    return 0;
}
