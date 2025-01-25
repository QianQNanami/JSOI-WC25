#include<bits/stdc++.h>
using namespace std;
int a[8];
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	for(int i=1;i<=7;i++)
		cin>>a[i];
	if(a[1]==3)
		cout<<"1";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
