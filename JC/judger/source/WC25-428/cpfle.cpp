#include<bits/stdc++.h>
using namespace std;
int xun(int x,string y[]);
int n;
int main(){
	int he,kong,chu=0;
	cin>>n;
	string t[n];
    cin>>t[n];
	for(int i=0;i<n;i++){
	    do{
			if(t[i]>t[i+1]){
				kong=t[i];
				t[i]=t[i+1];
				t[i+1]=kong;
			}
		}
		while(t[i]<t[i+1]);
    }
    for(int i=0;i<=n;i++){
    	t[i]=xun(i,t[]);
    	chu+=t[i];
	}
	cout<<chu;
	return 0;
}


int xun(int x,string y[]){
	int z=0;
    for(int i=x;i>=0;i--)
	  z=z+t[i];
    return z;	
}


