#include<bits/stdc++.h>
using namespace std;
long long a[10],cnt=0,ans,x;
int main(){
	memset(a,1,sizeof(a));
	while(1){
		for(long long i=1;i<=6;i++){
			cin>>a[i];
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			break; 
		}
		else{
			for(long long i=1;i<=6;i++){
				cnt+=i*i*a[i];
			}
			if(cnt%36==0) ans=cnt/36;
			else ans=cnt/36+1;
			cout<<ans<<endl;
			cnt=0;
			ans=0;
		} 
		
	}
	return 0;
}

