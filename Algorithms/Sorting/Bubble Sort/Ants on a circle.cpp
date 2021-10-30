/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
	  int temp;
	  temp= *x;
	  *x=*y;
	  *y=temp;
}

void BubbleSort(int A[],int n)
{
	  for(int i = 0; i < n - 1; i++)
	  {
		    for(int j = 0; j < n - 1 - i; j++)
		    {
			    if(A[j] > A[j + 1])
				    swap(&A[j], &A[j + 1]);
		    }
	  }
	  for(int k = 0; k < n; k++)
		  cout << A[k] << " ";
}

int main()
{
	  int N,M,T;
	  int A[M], x[M], y[M];
	  cin >> N >> M >> T;
	  for(int i = 0; i < M; i++)
		    cin >> x[i] >> y[i];
	  for(int i = 0; i < M; i++)
	  {
		    if (y[i] > 0)
		    {
			      x[i] = (T % N + x[i]) % N;
			      if(x[i] == 0)
				        x[i] = N;
			      else
				        x[i] = x[i];
		    }
		    if(y[i] < 0)
		    {
			      x[i] = (N - (T % N) + x[i]) % N;
			      if(x[i] == 0)
				        x[i] = N;
			      else
				        x[i] = x[i];
		    }
		    A[i] = x[i];
	  }
	  BubbleSort(A, M);
}
