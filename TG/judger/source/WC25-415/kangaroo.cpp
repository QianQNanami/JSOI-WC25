#include <bits/stdc++.h>
#define int long long
#define _start ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
priority_queue <int> In,Out;
int n;
signed main(){
	_start;
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){				//贪心  时间复杂度 O(n log n) 
		int a;cin >> a;
		In.push(a);
	}
	int cnt=0;
	while(!In.empty()){
		if(Out.empty()){				//没有可以装袋鼠的袋鼠 
			Out.push(In.top());
			In.pop();
			cnt++;
		}
		else{
			if(Out.top()>=In.top()*2){	//装的进去 
				Out.pop();In.pop();
			}
			else{						//装不进去 
				Out.push(In.top());
				In.pop();
				cnt++;
			}
		}
	}
	cout << n-cnt << endl;// (^ O w O ^) //
	return 0;
}
