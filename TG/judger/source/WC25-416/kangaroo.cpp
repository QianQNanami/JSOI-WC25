#include<bits/stdc++.h>
using namespace std;
const int M=INT_MAX;
int a[50005];
int n;
int cnt;
bool b[50005];
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	for(int i=n;i>=2;i--)
	{
		if(b[i])
		{
			continue;
		}
		for(int j=i-1;j>=1;j--)
		{
			if(a[j]<=a[i]/2&&!b[j])
			{
//				cout<<a[i]<<" "<<a[j]<<endl;
				cnt++;
				a[j]=-1;
				b[j]=true;
				break;
			}
		}
	}
	cout<<cnt;
	return 0;
}
/*
8
2 5 7 6 9 8 4 2
*/
