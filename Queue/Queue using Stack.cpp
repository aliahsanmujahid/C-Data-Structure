
#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

// Implement Queue using two stacks
class Queue {
    stack<int> s1, s2;

public:
    // Enqueue an item to the queue
    void enqueue(int data)
    {
        // Move all elements from the first stack to the second stack
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Push item into the first stack
        s1.push(data);

        // Move all elements back to the first stack from second stack
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // Dequeue an item from the queue
    int dequeue()
    {
        // if first stack is empty
        if (s1.empty()) {
            cout << "Underflow!!";
            exit(0);
        }

        // return the top item from the first stack
        int top = s1.top();
        s1.pop();
        return top;
    }
};

int main()
{
    int keys[] = { 1, 2, 3, 4, 5 };
    Queue q;

    // insert above keys
    for (int key : keys) {
        q.enqueue(key);
    }

    cout << q.dequeue() << '\n';    // print 1
    cout << q.dequeue() << '\n';    // print 2

    return 0;
}
