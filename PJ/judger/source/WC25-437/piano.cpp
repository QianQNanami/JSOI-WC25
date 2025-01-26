#include<bits/stdc++.h>
using namespace std;
int a[53];
int main()
{
	int t,sl,wz,z1=0,y1=0,tl=0;cin>>t;
	for(int i=1;i<=t;i++){
		cin>>sl;
		for(int j=1;j<=sl;j++){
			cin>>wz;a[wz]=1;
		}
	}
	for(int k=1;k<=sl;k++)
		for(int i=1;i<=52;i++)
			if(a[i]==1){
				if(z1!=i){
					z1=i;tl++;
				}
				for(int j=0;j<7;j++)
					a[i+j]=-1;	
			}
	for(int j=1;j<=t;j++)
		if(a[j]==1){
			cout<<"-1";
			return 0;
		}	
	cout<<(tl+1)/2;
	return 0;
}
