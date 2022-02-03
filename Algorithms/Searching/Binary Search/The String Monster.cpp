/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
bool match(unordered_set<string> ssof, string ss) 
{
    string nss;
    unordered_set <string> sset, dfs;
    if(ss.empty()) 
        return true;
    for(auto st : ssof) 
    {
        if(ss.find(st) == 0) 
        {
            sset.insert(st);
            nss = "";
            for(int i = st.size(); i < (int)ss.size(); i++)
                nss += ss[i];
            set_difference(ssof.begin(), ssof.end(), sset.begin(), sset.end(), inserter(dfs, dfs.end()));
            return match(dfs, nss);
        }
    }
    return false;
}
 
int main()
{
	  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n, i, lnss, mnl, mxl, justone, allother_max;
    string s, ss;
    cin >> t;
    while(t--) 
    {
        cin >> n;
        vector<string> sof; 
        unordered_set<string> ssof;
        vector<int> lns; 
        for (i = 0; i < n; i++) 
        {
            cin >> s;
            sof.push_back(s);
            ssof.insert(s);
            lns.push_back(s.size());
        }
        cin >> ss; 
        lnss = ss.size();
        mnl = *min_element(lns.begin(), lns.end());
        mxl = *max_element(lns.begin(), lns.end());
        justone = 0;
        allother_max = 0;
        int tof[] = {0, mnl};
        for(i = 0; i < n; i++) 
        {
            if(lns[i] == mnl) 
                justone++;
            else if(lns[i] == mxl) 
                allother_max++;
        }
        if(lnss < mnl or (lnss > mnl and lnss < 2 * mnl) or (mnl == mxl and lnss % mnl) or (justone == 1 and allother_max == n - 1 and  not (find(tof, tof + 2, lnss % mxl) != tof + 2))) 
        {
            cout << "NO" << endl;
            continue;
        }
        if(match(ssof, ss)) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
