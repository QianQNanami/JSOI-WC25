#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100],b,c,n,num;
	cin>>n>>b;
	for(int i=0;i<n;i++){
		cin>>c;
		a[i]=c;
	}
	for(int i=0;i<n;i++){
		if(a[i]>a[b]){
			num++;
		}
	//cout<<sizeof(a);
	}

	if(num==0){
		cout<<"1";
	}else{
		cout<<n-1-(num-1);
	}//少有多个最高项 
	



	return 0;
}

