#include<bits/stdc++.h>
using namespace std;
int a[7];
int b[7]={36,25,16,9,4,1};
int c[7]={1,4,9,16,25,36};
int main(){
	while(1){
		int cnt=0;
		int tot=0;
		for(int i=0;i<6;i++){
			cin>>a[i];
		}
		for(int i=0;i<6;i++){
			tot+=a[i]*c[i];
		}
		if(!tot) break;
		for(int i=0;i<6;i++){
			cnt+=tot/b[i];
			tot=tot%b[i];
		}
		cout<<cnt<<endl;
	}
	

	return 0;
}

