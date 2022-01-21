/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int kjump(vector<int> A, int K) 
{
    vector<int> ans;
    for(auto a : A)
    {
        if(ans.empty() or (a - ans.back()) >= K)
            ans.push_back(a);
        else if(a > ans.back())
            continue;
        else
        {
            if(ans.size() == 1)
            {
                ans.back() = a;
                continue;
            }
            int idx = lower_bound(begin(ans), end(ans), a) - ans.begin();
            if(idx == 0 or (a - ans[idx - 1] >= K))
                ans[idx] = a;
        }
    }
    return ans.size();
}

int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for(int i_A = 0; i_A < N; i_A++)
        cin >> A[i_A];
    int out_;
    out_ = kjump(A, K);
    cout << out_;
}
