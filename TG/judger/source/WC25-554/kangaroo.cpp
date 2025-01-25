#include<bits/stdc++.h>
using  namespace std;
short a[50005];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a,a+n);
    int ans=0;
    for(int i=n-1;i>=n/2;i--) {
        for(int j=n/2;j>0;j--){
            if((2*a[j-1]<=a[i])&&(a[j-1]!=0)) {
                a[i]=0;
                a[j-1]=0;
                ans++;
                break;
            }
		}
    }
    cout<<ans;
    return 0;
}
