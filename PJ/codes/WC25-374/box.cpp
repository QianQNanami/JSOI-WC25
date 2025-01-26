#include <bits/stdc++.h>
using namespace std;

int main()
{
	int bx_1, bx_2, bx_3, bx_4, bx_5, bx_6;
	while(cin >> bx_1 >> bx_2 >> bx_3 >> bx_4 >> bx_5 >> bx_6)
	{
		long long sum = 0, cnt = 0;
		if(bx_1 == 0 && bx_2 == 0 && bx_3 == 0 && bx_4 == 0 && bx_5 == 0 && bx_6 == 0)
		{
			break;
		}
		sum = bx_1 + bx_2 * 4 + bx_3 * 9 + bx_4 * 16 + bx_5 * 25;
		cnt = bx_6;
		if(sum % 36 == 0)
		{
			cout << sum / 36 + cnt <<endl;
		}
		else
		{
			cout << sum / 36 + cnt + 1 <<endl;
		}
	}
	return 0;
} 
