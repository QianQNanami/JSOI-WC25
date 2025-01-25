#include<bits/stdc++.h>
using namespace std;
int a[10005],si=0;
int main(){
	int b;
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>a[i];
		si++;
	}
	int c;
	cin>>c;
	for(int i=1;i<=c;i++){
		int d;
		cin>>d;
		if(d==1){
			int x,y;
			cin>>x>>y;
			for(int j=0;j<si;j++){
				if(a[j]==x){
					si++;
					for(int k=si;k>b;k--){
						a[k]=a[k-1];
					}
					a[j+1]=y;
					break;
				}
			}
		}
		else{
			int x;
			cin>>x;
			for(int j=0;j<si;j++)
				if(a[j]==x){
					si--;
					for(int k=i;k<si;k++){
						a[k]=a[k+1];
					}
				}
		}
	}
	for(int i=0;i<si;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
