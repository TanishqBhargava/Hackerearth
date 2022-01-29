/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
// Method-1 Using Queue
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int max = n, a[n];
    priority_queue<int> b ;
    for (int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        b.push(a[i]);
        while (b.top() == max)
        {
            cout << b.top() << " ";
            max--;
            b.pop();
        }
        cout << endl;
    }
    return 0;
}
// Method-2 Using Arrays
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = n, a[n + 1] = {0}, x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a[x] = 1;
        if(x == c)
        while(a[c] == 1)
        {
            cout << c << " ";
            c--;
        }
        cout << endl;
    }
    return 0;
}
