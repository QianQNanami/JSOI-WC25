#include<bits/stdc++.h>
using namespace std;
int a[70005];
int main(){
	while(1){
		cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0) break;
		int v=1,s=0;
		for(int i=6;i>=1;i--){
			s+=i*i*a[i];
			if(s>36){
				v++;
				s=i*i*a[i];
			}
		}
		cout<<v<<endl;
	}
	return 0;
}

