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
    cin >> t;
    while(t--)
    {
        int flag[109][109] = {}, nn, mm, temp1, temp2;
        cin >> nn >> mm;
        if(nn >= 1 && nn <= 100);
        assert(mm >= 0 && mm <= 100);
        vector<int> x, y, c; 
        for(int i = 0; i < nn; i++)
        {
            cin >> temp1 >> temp2;
            assert(temp1 >= 0 && temp1 <= 100);
            assert(temp2 >= 0 && temp2 <= 100);
            if(flag[temp1][temp2] == 1)
                assert(-1 > 0);
            flag[temp1][temp2] = 1;
            x.push_back(temp1);
            y.push_back(temp2);
            c.push_back(1);
        }
        for(int i = 0; i < mm; i++)
        {
            cin >> temp1 >> temp2;
            assert(temp1 >= 0 && temp1 <= 100);
            assert(temp2 >= 0 && temp2 <= 100);
            if(flag[temp1][temp2] == 1)
                assert(-1 > 0);
            flag[temp1][temp2] = 1;
            x.push_back(temp1);
            y.push_back(temp2);
            c.push_back(0);
        }
        assert((int)c.size() == (nn + mm));
        int n = (int)x.size(), d[n][n], sol = 0; 
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < n; j++)  
                d[i][j] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]); 

        for(int i = 0; i < n; i++)  
            if(c[i] == 0)  
                for(int j = 0; j < n; j++)  
                    for(int k = 0; k < n; k++)  
                        d[j][k] = min(d[j][k], max(d[j][i], d[i][k]));
        for(int i = 0; i < n; i++)  
            for(int j = 0; j < n; j++)  
                if(c[i] == 0 && c[j] == 1) 
                    sol = max(sol, d[i][j]); 
        cout << fixed << setprecision(6) << sqrt(sol) << endl;
    }
}
