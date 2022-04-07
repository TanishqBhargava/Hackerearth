/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long dp[10005][5][5][3][3];
char P[200010], T[10005];
int ar[200010], Z[200010], counter;

long long go(int idx, int two, int three, int five, int seven) 
{
	if(idx == counter + 1 and two >= 3 and three >= 2 and five >= 1 and seven >= 1) 
		return 1;
	else if(idx == counter + 1) 
		return 0;
	if(dp[idx][two][three][five][seven] != -1) 
		return dp[idx][two][three][five][seven];
	long long ret = 0;
	int cc = ar[idx], tw = 0, thr = 0, fiv = 0, sev = 0;
	while(cc % 2 == 0 and tw <= 3) 
	{
		tw++;
		cc /= 2;
	}
	cc = ar[idx];
	while(cc % 3 == 0 and thr <= 2) 
	{
		thr++;
		cc /= 3;
	}
	cc = ar[idx];
	while(cc % 5 == 0 and fiv <= 1) 
	{
		fiv++;
		cc /= 5;
	}
	cc = ar[idx];
	while(cc % 7 == 0 and sev <= 1) 
	{
		sev++;
		cc /= 7;
	}
	ret = go(idx + 1, two, three, five, seven);
	ret += go(idx + 1, min(3, two + tw), min(2, three + thr), min(1, five + fiv), min(1, seven + sev));
	if(ret >= 1000000007) 
		ret -= 1000000007;
	return dp[idx][two][three][five][seven] = ret;
}

int main() 
{
	cin >> P >> T;
	memset(dp, -1, sizeof(dp));
	int lenP = strlen(P);
	assert(lenP <= 10000);
	int cc = lenP, lenT = strlen(T), l = 0, r = 0;
	assert(lenT <= 10000);
	P[lenP++] = '$';
	for(int i = 0; i < lenT; i++) 
		P[lenP++] = T[i];
	P[lenP] = '\0';
	Z[0] = 0;
	for(int i = 1; i < lenP; i++) 
	{
		Z[i] = 0;
		if(i <= r) 
			Z[i] = min(Z[i - l], r - i + 1);
		while(i + Z[i] < lenP and P[i + Z[i]] == P[Z[i]]) 
			++Z[i];
		if(i + Z[i] - 1 > r) 
		{
			l = i;
			r = i + Z[i] - 1;
		}
	}
	counter = 0;
	for(int i = 0; i < lenP; i++) 
		if(Z[i] == cc) 
			ar[++counter] = i - cc;
	cout << go(1, 0, 0, 0, 0) << endl;
	return 0;
}
