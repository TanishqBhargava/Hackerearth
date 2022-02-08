/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, c, i, flag, x, color[100001], parent[100001];;
 	cin >> n >> c;
 	for(i = 2; i <= n; i++)
 	{
 		cin >> x;
 		parent[i] = x;
 	}
 	for(i = 1; i <= n; i++)
  		cin >> color[i];
  	for(i = 1; i <= n; i++)
 	{
 		flag = 0;
 		int p = i;
 		while(p != 1)
 		{
 			p = parent[p];
 			if(color[i] == color[p])
 			{
 				cout << p << " ";
 				flag = 1;
 				break;
 			}
 		}
 		if(flag == 0)
 			cout << "-1 ";
  	}
}
