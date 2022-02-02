/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int tc, cs = 1;

void test_cases() 
{
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) 
        cin >> a[i];
    cout << *min_element(a.begin(), a.end()) << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> tc;
    while (tc--) 
        test_cases();
}
