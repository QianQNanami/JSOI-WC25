#include<bits/stdc++.h>
using namespace std;
int n,t,a[10010],p,s=0;
int main(){
	cin>>n>>t;
	p=t+1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(a[p]!=0){
		for(int i=1;i<=n;i++){
			int f=1;
			for(int j=1;j<=n;j++){
				int fl=0;
				if(j!=i){
					if(a[j]>a[i]){
						int o=a[i];
						if(i==p){
							p=n-1;
							fl=1;
						} 
						for(int k=i;k<n-1;k++){
							a[k]=a[k+1];
							if(fl==0&&k+1==p) p=k;
						}	a[n-1]=o;
						f=0;						
					}
				}
			}
			if(f==0) s+=0;
			else if(a[i]!=0&&f==1){
				s++;
				a[i]=0;
			}
			if(f==1&&p==0) {
				s++;
				a[p]=0;
				break;
			}
		}		
	}
	cout<<s;
	return 0;
}
