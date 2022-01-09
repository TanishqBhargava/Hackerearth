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
    int T;
    cin >> T;
    while(T--)
    {
        long long number;
        int k, no_of_digits_n_in_base_k_plus_1 = 0;
        cin >> k >> number;
        while(number > 0)
        {
            number /= (k + 1);
            no_of_digits_n_in_base_k_plus_1++;
        }
        cout << no_of_digits_n_in_base_k_plus_1 << endl;
    }
    return 0;
}
