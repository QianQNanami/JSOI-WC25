#include<bits/stdc++.h>
using namespace std;
int mp[405][405],mpp[405][405];
int n,cnt1,cnt2,ans=INT_MIN,an;
void Dylan(int s1,int t1,int s2,int t2){
	for(int i=s1;i<=t1;i++){
		for(int j=s2;j<=t2;j++){
			if(mpp[i][j]-mpp[i+1][j+1]==0){
				cnt1+=mp[i][j];
			}
			if(mpp[i][j]+mpp[j][i]==0){
				cnt2+=mp[i][j];
			}
			ans=max(ans,cnt1-cnt2);
		}
	}
}
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>mp[i][j];
			mpp[i][j]=i-j;
		}
	}
	an=n;
	int s1=1,t1=n,s2=1,t2=n;
	Dylan(1,n,1,n);
	while(an>=2){
		cnt1=0,cnt2=0;
		if(s1+1<=n&&t1+1<=n){
			Dylan(++s1,++t1,s2,t2);
			cnt1=0,cnt2=0;
		}else{
			if(s2+1<=n&&t2+1<=n){
				Dylan(s1,t1,++s2,++t2);
				cnt1=0,cnt2=0;
			}
		}
		an--;
	}
	cout<<ans<<endl;
	return 0;
}
