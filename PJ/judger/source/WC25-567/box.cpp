#include <bits/stdc++.h>
using namespace std;
int a[10005],b[10005];
int main(){
    int sum=0,tep=0,sum2=0,x=0;;
    for(int i=1;i++;){
        tep++;
        x++;
        cin>>a[i];
		if(a[i]==0)sum++;
        else sum=0;
        if(tep==6){
            sum2=sum2+a[i]*36+a[i-1]*25+a[i-2]*16+a[i-3]*9+a[i-4]*4+a[i-5]*1;
            if(sum2%36==0) b[i]=sum2/36;
            else b[i]=sum2/36+1;
            cout<<endl;
            tep=0; sum2=0;
        }
        if(sum==6)break;
    }
    for(int i=1;i<=x;i++){
    	if(b[i]!=0)cout<<b[i]<<endl;
	}
    return 0;
}
