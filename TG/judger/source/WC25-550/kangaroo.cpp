#include<bits/stdc++.h>
using namespace std;
const int N=5e4+10;
int a[N];
int n;
int find(int n){
    int l=0;
    int mid=n/2;
    int cnt=0;
    while(l<n/2&&mid<n){
        if(a[l]*2<=a[mid]){
            cnt++;
            l++;
        }
        mid++;
    }
    return cnt;
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a,a+n);
    cout<<find(n)<< endl;
    return 0;
}
