#include<iostream>
using namespace std;
int main(){
	long long x,y,q,n;
	int b;
	cin>>n;
	long long a[n+10];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>b;
		if(b==2){
			cin>>x;
			for(int j=1;j<=n;j++)
				if(a[j]==x){
					a[j]=0;
					for(int c=j;c<=n;c++)
						a[c]=a[c+1];
				n--;
				break;
				}
		}else{
			cin>>x>>y;
			for(int j=1;j<=n;j++)
				if(a[j]==x){
					for(int c=n;c>x;c--)
						a[c]=a[c-1];
					a[j+1]=y;
					n++;
					break;
				}
	}
	}
	for(int i=1;i<=n;i++)
		if(a[i]!=0)
		cout<<a[i];
}
