#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int array[6] = {4,5,2,19,11,34};

    cout << "Array" << endl;
    for(auto i: array)
    {
        cout << i << endl;
    }

    priority_queue<int> pq;
    for(auto i:array)
    {
        pq.push(i);
    }

    cout << "Priority Queue" << endl;
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}