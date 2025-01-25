#include<iostream>
using namespace std;
int main(){
	int n,s;
	cin>>n;
	s=n;
	long long t[n+5],as=0;
	for(int i=1;i<=n;i++)
		cin>>t[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(t[i]>t[j])
			{
				t[0]=t[i];
				t[i]=t[j];
				t[j]=t[0];
			}
		for(int i=1;i<=n;i++){
			s--;
			as+=t[i]*s;
	}
	cout<<as;
	return 0;
} 
