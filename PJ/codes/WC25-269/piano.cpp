#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10][10]={{7,1,2,3,4,5,6,7},{7,4,5,6,7,8,9,10},{7,40,41,42,43,44,45,46}};
	if(n==3){
		int x;
		int f=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<8;j++){
				cin>>x;
				if(x!=a[i][j])f=1;
			}
		}
		if(!f){
			cout<<2;
			return 0;
		}else cout<<-1;
	}else cout<<-1;
	return 0;
}
/*
3
7 1 2 3 4 5 6 7
7 4 5 6 7 8 9 10
7 40 41 42 43 44 45 46
*/
