#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[7];
	while(70005){
		cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
		if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0){
			break;
		}
		int c=a[0]*1+a[1]*4+a[2]*9+a[3]*16+a[4]*27+a[5]*36;
		if(c%36==0){
			cout<<c/36<<endl;
		}else cout<<c/36+1<<endl;;
	}
	return 0;
}
