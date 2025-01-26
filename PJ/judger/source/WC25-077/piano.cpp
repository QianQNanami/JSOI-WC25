#include<bits/stdc++.h>
using namespace std;
int c[100];
int a[100];
int n,t;
int main(){
	cin>>n;
	long long ans=1;
	int n1=0,n2=0;
	int k=n;
	int n1f=0,n2f=0;
	while(k--){
		cin>>t;
		memset(a,0,sizeof(a));
		int cnt=0;
		for(int i=0;i<t;i++){
			cin>>c[i];
			a[c[i]]++;
		}
		sort(c,c+t);
		n=c[0]+4;
		int nn=0,nn2=0;
		for(int i=1;i<=52;i++){
			if(a[i]&&!nn&&(i>n1+4||!n1)){
				nn=n1+i-(n1+4);
			}else{
				if(a[i]&&i<=n1+4){
					continue;
				}else if(a[i]&&nn2==0&&(i>n2+4||!n2)){
					nn2=a[i]+4;
				}else if(a[i]&&i<=n2+4){
					continue;
				}else{
					if(!a[i]){
						continue;
					}
					//cout<<i<<' ';
//					cout<<-1;
//					return 0;
				}
			}
		}
		if(k==n-1){
			n1=nn,n2=nn2;
		}else{
			
			ans+=pow(abs(n1-nn)*n1f,2)+pow(abs(n2-nn2)*n2f,2);
			//cout<<n1<<' '<<nn<<endl<<n2<<' '<<nn2<<endl<<ans<<endl;
			if(n2!=0&&n2!=nn2){
				n2f=1;
			}
			if(n1!=0&&n1!=nn){
				n1f=1;
			}
			n1=nn,n2=nn2;
		}
	}
	cout<<-1;
}
/*
3
7 1 2 3 4 5 6 7
7 4 5 6 7 8 9 10
7 40 41 42 43 44 45 46
*/
