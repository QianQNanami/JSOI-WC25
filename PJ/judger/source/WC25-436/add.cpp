#include<bits/stdc++.h>
using namespace std;

int a[1005];
int r[1005], l[1005];
string ans[1005];

string tostring(int a)
{
	string ans="";
	while(a != 0)
	{
		ans += a % 10 + '0';
		a /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

string add(string sx, string sy)
{
	int x[10005]={0};
	int y[10005]={0};
	int z[10005]={0};
	string ans = "";
	int lenx = sx.size();
	int leny = sy.size();
	int jw = 0;
	reverse(sx.begin(), sx.end());
	for(int i=0; i<lenx; i++) x[i] = sx[i] - '0';
	reverse(sy.begin(), sy.end());
	for(int i=0; i<leny; i++) y[i] = sy[i] - '0';
	int len = max(lenx, leny);
	for(int i=0; i<=len; i++) 
	{
		z[i] = x[i] + y[i] + jw;
		if(z[i] % 10 > 0) 	z[i] %= 10;
		jw = z[i] / 10;
	}
	if(jw  == 1) 
	{
		z[len+1] += 1;
		for(int i=len; i>=0; i--) ans += (z[i] + '0');
	}
	else 
	{
		for(int i=len-1; i>=0; i--) ans += (z[i] + '0');
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
	cin >> a[i];
	int m;
	cin >> m;
	for(int i=1; i<=m; i++)
	{
		cin >> r[i]  >> l[i];
	 	for(int j=r[i]; j<=l[i]; j++)
	 	{
	 		ans[i] = add(tostring(a[j]), ans[i]) ;
		}
	} 
	for(int i=1; i<=m; i++)  
	{
		cout << ans[i] << endl;
	}
	return 0;
} 
