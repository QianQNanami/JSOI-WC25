#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],m,r;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	m=m+1;
	r=a[m];
	a[m]=20;
	for(int d=n;d>=1;d--){
		for(int i=1;i<=n;i++,i--){
			if(a[i]==20){
				for(int j=i;j<=n;j++){
					if(a[j]>r){
						int o=j+1;
						r=a[n+1];
						a[1]=a[j];
						for(int k=o;k<=n;k++){
							a[k-1]=a[k];
						}
						break;
					}
				}
			}else{
				for(int j=i;j<=n;j++){
					if(a[j]>a[i]){
						int o=j+1;
						a[i]=a[n+1];
						a[1]=a[j];
						for(int k=o;k<=n;k++){
							a[k-1]=a[k];
						}
						break;
					}
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==20){
			cout<<i<<endl;
			return 0;
		}
	}	
	return 0;
}
