#include<bits/stdc++.h>
using namespace std;
int h[7]={0,1,4,9,16,25,36};
int a[7];
int main(){
	while(cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]) {
		int s=0;
		if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]&&a[4]==a[5]&&a[5]==a[6]&&a[1]==0) 
			break;
		else {
			for(int i=1;i<=6;i++) {
				s+=a[i]*h[i];
			}
		}
		if(s%36==0) cout<<s/36<<endl;
		else cout<<s/36+1<<endl;
	}
	return 0;
}

