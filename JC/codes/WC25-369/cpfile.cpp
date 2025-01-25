#include<bits/stdc++.h>
using namespace std;
int ans=0;



int main(){
	int n,temp;
	cin>>n;int t[n];
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n-i;j++){
			if(t[j]>t[j+1]){
				temp=t[j];
				t[j]=t[j-1];
				t[j-1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<t[i]<<endl;
	}
	return 0;
}
