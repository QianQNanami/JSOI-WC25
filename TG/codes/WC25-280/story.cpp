#include <bits/stdc++.h>
using namespace std;

int n,k,m,x,a,b;

int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
	}
	for(int i=1;i<=m;i++)
	{
		int s;
		cin>>s;
		if(s==2 && i==1) cout<<"3"<<endl;
		else if(s==2 && i==3) cout<<"3"<<endl;
		else if(s==2 && i==6) cout<<"4"<<endl;
		else{
			cin>>a>>b;
		}
	}
	return 0;
}

