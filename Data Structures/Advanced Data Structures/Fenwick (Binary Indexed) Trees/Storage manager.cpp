/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
vector<int> solution(int N, vector<vector<int>> &units, int K, vector<vector<int>> &requests) 
{
    vector<pair<int, int>> arr;
    for(int i = 0; i < N; i++) 
        arr.push_back({ units[i][1], units[i][0] });
    sort(arr.begin(), arr.end());
    vector<int> res;
    for(int i = 0; i < K; i++) 
    {
        int size = requests[i][1], id = -1, min_diff = INT_MAX;
        for(int j = 0; j < N; j++) 
        {
            if(arr[j].first >= size) 
            {
                int diff = abs(arr[j].second - requests[i][0]);
                if(diff < min_diff) 
                {
                    min_diff = diff;
                    id = arr[j].second;
                } 
                else if(diff == min_diff) 
                    id = min(id, arr[j].second);
            }
        }
        res.push_back(id);
    }
    return res;
}
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, K;
    cin >> N;
    vector<vector<int>> units(N, vector<int>(2)), requests(K, vector<int>(2));
    for(int i = 0; i < N; i++) 
        cin >> units[i][0] >> units[i][1];
    cin >> K;
    for(int i = 0; i < K; i++) 
        cin >> requests[i][0] >> requests[i][1];
    vector<int> res = solution(N, units, K, requests);
    for(int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
    return 0;
}
