#include <bits/stdc++.h>
using namespace std;
int a[10],m[10]={1,4,9,16,25,36};
int sum=0;
int s;
int main(){
	while(1){
		s=0;
		for(int i=1;i<=6;i++){
			cin>>a[i]; 
			s+=a[i]*m[i];	
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0) break;
		if(s/36==0) cout<<s/36<<'\n';
		else cout<<(s/36)+1<<'\n'; 
	}
}
/*0 0 4 0 0 1
 7 5 1 0 0 0
0 0 0 0 0 0*/
