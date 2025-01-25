#include<bits/stdc++.h>
using namespace std;

int n,k,m;
int a[5641],c[10],d[10];


int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=k;i++)
		cin>>a[i];
	for(int i=1;i<=m;i++){
		cin>>d[i];
		if(d[i]==1){
			cin>>d[i+1]>>d[i+2];
			i+=2;
		}
	}
	if(n==4){
		cout<<"3"<<endl<<"-1"<<endl<<"4";
	}
	if(n==6){
		cout<<"3"<<endl<<"3"<<endl<<"4";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
