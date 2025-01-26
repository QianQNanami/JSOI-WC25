#include <bits/stdc++.h>
using namespace std;
int a[18285714][7],cnt;
int main()
{
	while(1)
	{
		cnt++;
		for(int i = 0;i < 6;i++)
		{
			cin >> a[cnt][i];
		}
		if(!a[cnt][0] && !a[cnt][1] && !a[cnt][2] && !a[cnt][3] && !a[cnt][4] && !a[cnt][5]) break;
	}
	cnt--;
	for(int i = 1;i <= cnt;i++)
	{
		a[i][6] += a[i][5];
		a[i][6] += a[i][4];
		a[i][0] -= min(a[i][4]*11,a[i][0]);
		a[i][6] += a[i][3];
		int b = min(a[i][3]*5,a[i][1]);
		a[i][1] -= b;
		a[i][0] -= min(a[i][3]*20 - b*4,a[i][0]);
		int c = (a[i][2]+3)/4;
		a[i][6] += c;
		int d = (c*4 - a[i][2])*9;
		int e = min(c*5,a[i][1]);
		a[i][1] -= e;
		a[i][0] -= min(c*27 - e*4,a[i][0]);
		int f = (a[i][1]+8)/9;
		a[i][6] += f;
		a[i][0] -= min(f*36-a[i][1] *4,a[i][0]);
		a[i][6] += (a[i][0]+35)/36;
		cout << a[i][6] << endl;
	}
	return 0;
}
