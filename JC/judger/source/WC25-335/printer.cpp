#include<bits/stdc++.h>
using namespace std;
int a[10005],front=0,after=0;
int main(){
	int n,t;
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>a[i];
		after++;
	}
	for(int i=0;i<after;i++)
		for(int j=i;j<after;j++)
			if(a[j]>a[i]){
				int s=a[i];
				for(int k=i;k<after;k++)
					a[k]=a[k+1];
				a[after]=s;
				if(t==i)
					t=after;	
			}
		cout<<(t-front-1)<<endl;
	return 0;
}

