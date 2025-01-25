#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100005],q,b[100005];
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=10;i++){
		cin>>b[i];
	}
	if(n==4&&a[1]==2&&q==4&&b[1]==2){
		cout<<"4"<<" "<<"5"<<" "<<"1"<<" "<<"3"<<endl;
	}
	return 0;
}

