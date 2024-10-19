/*Implement a basic priority queue using a list. Write methods for inserting an element
and retrieving the highest priority element.*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    vector<int> user_value;
    int value=0;
    priority_queue <int> pq;

    while (true)
    {
        cout << "Enter a number:";
        cin >> value;
        if(value == -1)
        {
            break;
        }
        user_value.push_back(value);
    }

    for(int i: user_value)
    {
        pq.push(i);
    }

    cout << "Top priority queue" << endl;
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

}