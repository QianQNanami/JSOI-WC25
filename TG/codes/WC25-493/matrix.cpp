#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> a;
int n,A[405];
int main()
{
	freopen('matrix.in','r',stdin);
	freopen('matrix.out','v',stdout);
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> A[i];
		a.push_back(A);
	}
	return 0;
 } 
