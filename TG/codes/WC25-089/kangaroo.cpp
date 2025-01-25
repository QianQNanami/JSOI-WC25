#include<bits/stdc++.h>
using namespace std;
const int N=5*1e4+2;
int n,a[N],ans=0;
void jishu()
{
	int r=n;
	for(int l=n/2;l>=1;l--)
	{
		if(a[1]*2>a[r])return ;
		if(a[r]>=a[l]*2){
			ans++;r--;
		}
	}
	return ;
}
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
//	for(int i=1;i<=n;i++)cout<<a[i]<<' ';
	jishu();
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

//2 5 7 6 9 8 4 2
