#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,d[1001],a[1001],cot=0;
	int j=0;
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>d[i];
	}
	for(int i=0;;i++){
		if(d[i]>d[i+1]){
			swap(d[i],d[i+1]);
			swap(d[i+1],d[n]);
			j=n;
		}
		if(d[i]>=d[i+1]){
			cot++;
			j=i;
		}
		if(cot+1==n){
			break;
		}
	}
	cout<<j;
	return 0;
}
