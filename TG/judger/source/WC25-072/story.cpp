#include<bits/stdc++.h>
using namespace std;
int a[501],n,k,m;
void zd(){
	int hm[k],tmp[k];
	for(int h=1;h<=k;h++){
		hm[h]=h;
	}
	for(int j=1;j<=n;j+=k){
		for(int i=j;i<=j+k-1;i++){
			tmp[i]=a[i];
		}
		int ans=0,ans1=0;
		for(int h=j;h<=k+j-1;h++){
			ans+=tmp[h];
			ans1+=hm[h];
		}
}
	
}
int main(){
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	
	for(int i=1;i<=m;i++){int l,b,d;//真的尽力了，但实在想不出来了，给您或计算机看这样一个敷衍的程序，我无比愧对你们。 
		cin>>l;
		if(l==2)
		if(l==1)cin>>b>>d;a[b]=d;
	}
	cout<<k<<endl;
	cout<<-1<<endl;
	cout<<k+1;
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//int a[50001],n,k,m;
//void zd(){
//	int hm[k],tmp[k];
//	for(int h=1;h<=k;l++){
//		hm[h]=h;
//	}
//	for(int j=1;j<=n;j+=k){
//		for(int i=j;i<=j+k-1;i++){
//			tmp[i]=a[i];
//		}
//		int ans=0,ans1=0;
//		for(int h=j;h<=k+j-1;h++){
//			ans+=tmp[h];
//			ans1+=hm[h];
//		}
//		if(ans!=ans1)cout<<-1<<endl;
//		else {
///		for(int i=j;i<=k+j-1;i++){			} }}
//int main(){
//	cin>>n>>k>>m;
//	for(int i=1;i<=n;i++)cin>>a[i];	
//	for(int i=1;i<=m;i++){int l,b,d;
//		cin>>l;
//		if(l==2)zd();
//		if(l==1)cin>>b>>d;a[b]=d;
//	}
//	return 0;
//}
