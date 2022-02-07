/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
// Method - 1 Using Deques
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		long long int n, k, i = 0;
		cin >> n >> k;
		deque<long long int> s;
		vector<long long int> arr(n);
		for(i = 0; i < n; i++)
			cin >> arr[i];
		int count1 = 0;
		for(i = 0; i < n; i++)
		{
			if(s.empty() || s.back() > arr[i])
				s.push_back(arr[i]);
			else
			{
				while(!s.empty() && (count1 != k) && s.back() < arr[i])
				{
					s.pop_back();
					count1++;
				}
				s.push_back(arr[i]);
				if(count1 == k)
				{
					i++;
					for(; i < n; i++)
						s.push_back(arr[i]);
				}
			}
		}
		while(!s.empty())
		{
			long long int jas = s.front();
			cout << jas << " ";
			s.pop_front();
		}
		cout << endl;
	}
}

//Method - 2 Using Stacks
#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n, k;
	cin >> n >> k;
	int arr[n], deleted = 0, i = 0;
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	stack<int> s;
	while(i < n && deleted < k)
	{
		if(s.empty() || arr[i] <= arr[s.top()])
		{
			s.push(i);
			i++;
		}
		else
		{
			s.pop();
			deleted++;
		}
	}
	while(i < n) 
	{
		s.push(i);
		i++;
	}
	vector<int> vec;
	while(!s.empty())
	{
		vec.push_back(arr[s.top()]);
		s.pop();
	}
	reverse(vec.begin(), vec.end());
	for(int i = 0; i < n - k; i++) 
		cout << vec[i] << " ";
	cout << endl;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) 
		solve();
}
