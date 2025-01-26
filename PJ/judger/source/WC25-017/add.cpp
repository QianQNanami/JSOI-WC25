#include<bits/stdc++.h>
using namespace std;
int main(){
	long long s;
	cin>>s;
	long long a[s+1]={0};
	
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	long long n;
	cin>>n;
	long long b[n]={0};
	for(int o=0;o<n;o++){
		long long num1=0,num2=0,q=0,q1=0,numm=0;
		cin>>num1>>num2;
		for(int j=0;j<s;j++)
		{
			if(a[j]==num2){
				q=j;
				//cout<<"num2:"<<q;
			}
			if(a[j]==num1){
				q1=j;
				//cout<<"num1:"<<q1;
			}
		}
		for(int i=q;i<=q1;i++){
			numm+=a[i];
		}
		b[o]=numm;
		
		//cout<<numm<<endl;
		numm=0;
	}
	sort(b,b+n);
	for(int i=n-1;i>=0;i--){
		cout<<b[i]<<endl;
	}
}
