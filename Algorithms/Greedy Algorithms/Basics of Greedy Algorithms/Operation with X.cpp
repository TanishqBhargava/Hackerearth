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
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int minDiff = arr[n - 1] - arr[0];
    for(int i = 1; i < n; i++) 
    {
        int increase = max(arr[i - 1] + x, arr[n - 1] - x), decrease = min(arr[0] + x, arr[i] - x);
        minDiff = min(minDiff, increase - decrease);
    }
    cout << minDiff;
}
