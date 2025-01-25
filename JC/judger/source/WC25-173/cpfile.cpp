#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,min=0,ti[1001],con;
	cin>>n;
	con=0;
	for(int i=0;i<n;i++){
		cin>>ti[i];
	}
	for(int i=0;;i++){
		if(ti[i]>ti[i+1]){
			swap(ti[i],ti[i+1]);
		}
		if(ti[i]<=ti[i+1]){
			con++;
		}
		if(con==n-1){
			break;
		}
	}
	for(int i=0;i<n-1;i++){
		min=min+ti[i];
	}
	cout<<min;
	return 0;
}
