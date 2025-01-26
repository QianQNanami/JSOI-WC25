#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[7][70005];
	int k=0;
	while(1) {
		k++;
		cin>>a[1][k];
		cin>>a[2][k];
		cin>>a[3][k];
		cin>>a[4][k];
		cin>>a[5][k];
		cin>>a[6][k];
		if(a[1][k]==0&&a[2][k]==0&&a[3][k]==0&&a[4][k]==0&&a[5][k]==0&&a[6][k]==0) break;
	}
	for(int i=1; i<k; i++) {
		int s=0,b=0,c=0;
		if(a[6][i]!=0) s=s+a[6][i];
		if(a[5][i]!=0) {
			s=s+a[5][i];
			b=b+a[5][i]*11;
		}
		if(a[4][i]!=0) {
			s=s+a[4][i];
			c=c+a[4][i]*5;
		}
		if(a[3][i]!=0) {
			s=s+(a[3][i]+3)/4;
			if(a[3][i]%4==1) {
				b=b+7;
				c=c+5;
			}
			if(a[3][i]%4==2) {
				b=b+6;
				c=c+3;
			}
			if(a[3][i]%4==3) {
				b=b+5;
				c=c+1;
			}
		}
		if(a[2][i]!=0) {
			if(a[2][i]>c) {
				s=s+(a[2][i]-c+8)/9;
				if((a[2][i]-c)%9!=0) b=b+36-a[2][i]%9*4;
			}
		
		if(a[2][i]<c) {
			c=c-a[2][i];
			b=b+c*4;
		}
	}
	if(a[1][i]!=0) {
		if(a[1][i]>b) {
			s=s+(a[1][i]-b+35)/36;
		}
	}
	cout<<s<<endl;
}
return 0;
}

