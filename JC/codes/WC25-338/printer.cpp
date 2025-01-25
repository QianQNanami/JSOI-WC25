#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j,a[10005],ans=0;
    cin>>n>>j;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<=n;i++){
		if(a[i]>=a[i+1]){
			for(int j=1;j<=n;j++){
				if(a[i]>=a[j]){
					ans++;
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

