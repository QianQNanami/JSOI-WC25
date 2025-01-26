#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
int a[105][105];
int sum[105];

int main()
{
	 do
	{
		cnt++;
		for(int i=1; i<=6; i++) 
		{
			cin >> a[cnt][i];
			if(a[cnt][i] != 0) sum[cnt] += i * i * cnt;
		}
	}while(a[cnt][1] != 0 || a[cnt][2] != 0 || a[cnt][3] != 0 || a[cnt][4] != 0 || a[cnt][5] != 0 || a[cnt][6] != 0 );
	for(int i=1; i<cnt; i++)
	{
		cout << sum[i] / 36 + 1 << endl;  
	}
	return 0;
}

