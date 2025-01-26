#include<bits/stdc++.h>
using namespace std;
long long x,y,s;
int sum=1;
int main(){
	while(sum!=0){
		sum=0;
		for(int j=1;j<=6;j++){
		    cin>>y;
		    sum+=y;
		    s+=y*j*j;
	    }
		if(sum==0)return 0;
	    if(s%36==0)x=s/36;
		else{
			x=s/36+1;
		}
		cout<<x<<endl;
		s=0;    
	}
}
