
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[6] = { 3, 2, 4, 8, 6, 9 };

	// defining priority queue  max heap
	priority_queue<int> pq;
    //pushing array sequentially one by one
	for (int i = 0; i < 6; i++) {
		pq.push(arr[i]);
	}

    //defining priority queue min heap
    //with pushing array sequentially one by one
    priority_queue<int, vector<int>, greater<int> > mini(arr, arr + 6);


	// printing priority queue
	cout << "Priority Queue: (max heap)==> ";
	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}
    
    cout << "\nPriority Queue: (min heap)==> ";
	while (!mini.empty()) {
		cout << mini.top() << ' ';
		mini.pop();
	}

	return 0;
}
