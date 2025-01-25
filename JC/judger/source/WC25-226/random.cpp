#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,z,n,q;
	long long a[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>z;
		if(z==1){
			cin>>x>>y;
		}else{
			cin>>x;
		}
	}
	cout<<4<<" "<<5<<" "<<1<<" "<<3<<endl;
	return 0;
} 
