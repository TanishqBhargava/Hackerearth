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
	unsigned int N;
	cin >> N;
	unsigned int *arr = new unsigned int[N + 1], total = 0, count = 0, sum;
	for (int i = 1; i < N + 1; i++)
	{
		cin >> arr[i];
		total += arr[i];
	}
	string result = "";
	for(int i = 1; i < N + 1; i++)
	{
		sum = 0;
		for(int j = i; j < N + 1; j++)
		{
			sum += arr[j];
			if(sum == total || (double)sum / (j - i + 1) > (double)(total - sum) / (N - j + i - 1))
			{
				count++;
				result += to_string(i) + ' ' + to_string(j) + '\n';
			}
		}
	}
	cout << count << endl << result;
	return 0;
}
