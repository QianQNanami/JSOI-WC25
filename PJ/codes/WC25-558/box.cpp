#include<bits/stdc++.h>
using namespace std;
int a[7],su;
int main(){
	ios::sync_with_stdio(0);
	for(int i=1;;i++){
		for(int j=1;j<=6;j++){
			cin>>a[j];
			a[j]=a[j]*j*j;
			su+=a[j];
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			return 0;
		}else{
			if(su%36==0){
				cout<<su/36<<endl;
			}else{
				cout<<su/36+1<<endl;
			}
		}
		for(int j=1;j<=6;j++){
			a[j]=0;
		}
		su=0; 
	}
}

