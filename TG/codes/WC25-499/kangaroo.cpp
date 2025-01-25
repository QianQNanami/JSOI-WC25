#include<bits/stdc++.h>
#define fre 1
using namespace std;
typedef long long ll;

#define mp(a,b) make_pair(a,b)
#define inf 0x3f3f3f3f

const int N=5e4+10;
int n,b[N];
vector<int>a;

int main(){
#ifdef fre
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int mxa=-1;
    for(int i=1;i<=n;i++){
    	cin>>b[i];
    	a.push_back(b[i]);
	}
	sort(a.begin(),a.end());
	sort(b+1,b+n+1);
	int ans=0;
	for(int i=n;i>=1;i--){
		if(upper_bound(a.begin(),a.end(),b[i]/2)!=a.begin()){
			ans++;
			a.erase(upper_bound(a.begin(),a.end(),b[i]/2)-1);
		}
	}
	cout<<ans<<endl;
#ifdef fre
	fclose(stdin);
	fclose(stdout);
#endif
    return 0;
}

/*
O(logn*n)

*/
