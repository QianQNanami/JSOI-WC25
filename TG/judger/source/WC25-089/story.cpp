#include<bits/stdc++.h>
using namespace std;
const int N=5*1e4+2;
int a[N],t[32],n,k,m;
bool mz()
{
	for(int i=1;i<=k;i++)
		if(t[i]==0)return 0;
	return 1;
}
int jg()
{
	int num=1,head=1;
	t[a[1]]++;
	for(int i=2;i<=n;i++)
	{
		if(a[head]==a[i]){
			head++;
		}
		else{
			t[a[i]]++; 
			num++;
		}
		if(mz())return num;
	}
	return -1;		
}
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int l=1;l<=m;l++)
	{
		int ok;cin>>ok;
		if(ok==1){
			int p,v;cin>>p>>v;
			a[p]=v;
		}
		else{
			memset(t,0,sizeof(t));
			cout<<jg()<<endl;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
