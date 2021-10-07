/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, invert = 0; 
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) 
			cin >> arr[i];
		for(int i = 0; i < n - 1; i++) 
			if(arr[i]==1 && arr[i+1]==0) 
				invert++;
		cout << invert + 1 << endl;
	}
}
