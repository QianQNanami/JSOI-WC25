#include <bits/stdc++.h>
using namespace std;
#define N 10000
int	front = -1;
int	rear = -1;
int a, b, q[10010];
bool check(int x){
	for (int i = front + 1; i <= rear; i = (i + 1) % N){
		if (q[i] > x) return 0;
	}
	return 1;
}
int main(){
    cin >> a >> b;
	for (int i = 0 ;i < a;i++){
		rear = (rear+1) % N;
		cin >> q[rear];
	}
		int i = 0;
    int cnt = 0;
    while (front != rear){
    	if (check(q[(front + 1) % N])){
    		front = (front + 1) % N;
    		cnt++;
    		if(front == b) break;
		}
		else{
			rear = (rear + 1) % N;
			front = (front + 1) % N;
			q[rear] = q[front];
			if (front == b) b = rear;
		}
	}
	cout << cnt;
	return 0;
}
