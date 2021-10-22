/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int parse(string &s)
{
    int ret = 0;
    for(auto c : s)
        ret = ret * 10 +(int)(c - '0');
    return ret;
}
 
int main() 
{
    ios_base::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n;
    string s, date;
    int count[32] = {0};
    cin >> n;
    getline(cin,s);
    while(n--)
	  {
        getline(cin, s);
        for(auto c : s)
		    {
            if(isdigit(c))
                date += c;
            else if(!date.empty()) 
			      {
                int k = parse(date);
                if(n % 2 == 0)
                    count[k] += 1;
                else 
					          count[k] += 2;
                date = "";
            }
        }
        if(!date.empty()) 
		    {
            int k = parse(date);
            if (n % 2 == 0)
                count[k] += 1;
            else 
				        count[k] += 2;
            date = "";
        }
    }
    int sol = max_element(count, count + 32) - count;
    if(std::count(count, count + 32, count[sol]) == 1 && (sol == 19 || sol == 20))
        cout << "Date" << endl;
    else
        cout << "No Date" << endl;
    return 0;
}
