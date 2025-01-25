#include<bits/stdc++.h>
using namespace std;
int l=-1,r=-1,a[110],b[110],n,k,ma=0;	

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		r++;
		ma=max(a[i],ma);
		b[i]=i;
	}
	int i=0;
	while(1){
		
		if(a[i]<ma){
			l++;
			r++;
			a[r]=a[i];
			b[r]=b[i];
		}
		if(a[i]==ma){
			break;
		}
		i++;
	}
	int q=0;
	if(b[l+1]!=0){
		for(int i=l+1;i<r+1;i++){
//			if(b[i]==k){
//				break;
//			}
			q++;		
		}	
	}
	
	

//	cout<<endl;
//	int s=0;
//	i=0;
//	while(1){
//		cout<<b[i]<<' ';
//		if(b[i]==k){
//			s=i;
//			break;
//		}
//		i++;
//	}
	cout<<q-1;
	return 0;
}
