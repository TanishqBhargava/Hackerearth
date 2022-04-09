/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n;

template <class T> void print(const T &cont)
{
    for(auto x : cont)
        cout << x << ' ';
    cout << endl;
}

void solution(string &input)
{
    stringstream ss(input);
    int x, counter = 0;
    string res("");
    set<int> box;
    while(ss>>x)
	{
        if(x > n)
		{
            cout << "-1" << endl;
            return;
        }
        if(counter <= x)
		{
            while(counter != x)
			{
                counter++;
                box.insert(counter);
                res += 'C';
            }
            auto it = box.end();
            it--;
            box.erase(it);
            res += 'K';
        } 
		else
		{
            if(box.count(x))
			{
                while(true)
				{
                    auto it = box.end();
                    it--;
                    box.erase(it);
                    res += 'K';
                    if(x == *it)
                        break;
                }
            } 
			else
			{
                cout << "-1" << endl;
                return;
            }
        }
    }
    cout << res << endl;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string input;
    while(cin >> n)
	{
        getline(cin, input);
        getline(cin, input);
        solution(input);
        input = "";
    }  
}
