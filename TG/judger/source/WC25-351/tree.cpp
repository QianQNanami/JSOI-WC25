#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,ans=0;
struct node{
	int q;
	int f;
	ll z;
} a[100001];
void v(int x,int y)
{
	a[x].z=a[x].q;
	for(int i=1;i<=n;i++)
	{
		if(a[i].f==x&&i!=y)
		{
			v(i,y);
			a[x].z+=a[i].z;
		}
	}
}
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	a[0].z=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].q>>a[i].f;
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=i+1;j<=n;j++)
	 	{
	 		v(i,j);
	 		v(j,i);
	 		if(a[i].z==a[j].z)
	 		{
	 			ans++;
			 }
		 }
	  } 

cout<<ans;
	return 0;
}
//脑子当垃圾，暴力出奇迹。 
