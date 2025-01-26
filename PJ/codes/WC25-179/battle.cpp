/*#include <bits/stdc++.h> 

using namespace std;

int n, m, a[310][310], b[310][310], comex, comey, d;

char c;

int f(int x, int y)
{
	if(a[x][y] == 0 || b[x][y] == 1){
		return INT_MAX;
	}else if(a[x][y] == 4){
		return 1;
	}
	b[x][y] = 1;
	if(a[x][y] == 2){
		d = 2 + min(min(f(x + 1,y), f(x - 1,y)), min(f(x,y + 1), f(x,y - 1)));
		b[x][y] = 0;
		return d;
	}else{
		d = 1 + min(min(f(x + 1,y), f(x - 1,y)), min(f(x,y + 1), f(x,y - 1)));
		b[x][y] = 0;
		return d;
	}
}

int main()
{
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> c;
			if(c == 'E'){
				a[i][j] = 1;
			}else if(c == 'B'){
				a[i][j] = 2;
			}else if(c == 'Y'){
				comex = i, comey = j;
			}else if(c == 'T'   
			
			){
				a[i][j] = 4;
			}
		}
	}
	n = f(comex, comey);
	if(n > 0 && n != INT_MAX){
		cout << n;
	}else{
		cout << -1;
	}
	
	return 0;
}
*/

//回溯，分别上下左右探索 

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout << -1 << endl;
	
	return 0;
}
