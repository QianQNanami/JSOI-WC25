#include <iostream>
#include <vector>
using namespace std;
const int MAXA = 100005;
struct T
{
	int v,p;
} t;
vector<T> g;
int n;
int main()
{
	freopen('tree.in','in',stdin);
	freopen('tree.out','v',stdout);
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> t.v >> t.p;
		g.push_back(t);
	}
	return 0;
}
