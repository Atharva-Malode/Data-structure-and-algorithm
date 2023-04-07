#include <iostream>
#include <queue>

using namespace std;

int main()
{

    // Priority Queue automatically fits into max heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(2);

    // to print the queue
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    // Priority Queue in min heap

    priority_queue<int, vector<int>, greater<int>> a;

    a.push(6);
    a.push(7);
    a.push(2);

    while (a.empty() == false)
    {
        cout << a.top() << " ";
        a.pop();
    }

    // create  a priority queue with a array or avector assign at the start
    int arr[5] = {1, 2, 3, 4, 5};
    priority_queue<int> c(arr, arr + 5);

    while (c.empty() == false)
    {
        cout << c.top() << " ";
        c.pop();
    }

    return 0;
}