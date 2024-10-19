/*
    Given an array on integers, implement a function to return
    the k largest elements using a priority queue
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class priority_queue
{
    private: 
        vector <int> vec;
    
    public:
        void insert(int value)
        {
            vec.push_back(value);
            sort(vec.begin(), vec.end(), greater<int>());
        }

        int top()
        {
            if(vec.empty())
            {
                throw out_of_range("List is empty");
            }
            else
            {
                return vec.front();
            }
        }

        bool isEmpty()
        {
            return vec.empty();
        }
};
int main()
{
    int array[6] = {9,10,14,11,3,2};
    priority_queue pq;

    cout << "Array value:";
    for(auto i: array)
    {
        cout << i << " ";
    }

    cout << endl;
    for(auto i: array)
    {
        pq.insert(i);
    }

    cout << "Largest value in queue:" << pq.top();

}