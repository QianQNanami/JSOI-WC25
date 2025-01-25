#include<bits/stdc++.h>
using namespace std;
list<int> l;
int n,m,x,y,q,a[20005],b[20005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		//l.push_back(a[i]);
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>m;
		if(m==1){
			cin>>x>>y;
			for(int i=1;i<=n;i++){
				if(a[i]==x)
				{
					b[i]=y;
				}
			}	
				for(int i=1;i<=n;i++){
				if(b[i]==x)
				{
					b[b[i]]=y;
				}
			}	
		}
		else
		{
			cin>>x;
			for(int i=1;i<=n;i++){
				if(a[i]==x)
				{
					a[i]=-1;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=-1){
			cout<<a[i]<<' ';
		}
		if(b[i]!=0){
			cout<<b[i]<<' ';
		}
		
	}	
	return 0;
}
