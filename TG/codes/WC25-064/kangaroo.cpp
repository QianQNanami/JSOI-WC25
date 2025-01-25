#include<iostream>
#include<algorithm>
using namespace std;
int n,a[50005];
bool vis[50005];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);	
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);//从小到大排序 
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]<a[j]/2.0&&!vis[i]&&!vis[j]){
				sum++;
				vis[i]=vis[j]=true;
			}
		}
	}
	cout<<sum;
	return 0;
}
