/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
// 1. First, find maximum occurrences of any number for each row.
// 2. Secondly, find maximum occurrences of any number for each column.
// 3. Compare the answer for each row and store the maximum value in a variable (Say maxRow).
// 4. Also, compare the answer for each column and store the maximum value in a variable (Say maxCol).
// 5. Lastly print the product of maxCol*maxRow.
#include <bits/stdc++.h>
using namespace std;
int mat[1009][1009], row[1009][1009], col[1009][1009];
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	  int t;
    cin >> t;
    while(t--)
	  {
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j)
                cin >> mat[i][j];
        int colMax = 0, rowMax = 0;
        for(int i = 1; i <= n; i++)
		    {
            for(int j = 1; j <= m; j++)
			      {
                //storing occurences in column
                col[i][j] = 1;
                if (i > 1 && mat[i][j] == mat[i - 1][j])
                    col[i][j] += col[i - 1][j];
                //storing occurences in each row
                row[i][j] = 1;
                if (j > 1 && mat[i][j] == mat[i][j - 1])
                    row[i][j] += row[i][j - 1];
                colMax = col[i][j] > colMax ? col[i][j] : colMax;
                rowMax = row[i][j] > rowMax ? row[i][j] : rowMax;
            }    
        }
        cout << colMax * rowMax <<endl;
    }
    return 0;
}
