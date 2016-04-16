/**
*Implement the following operations of a queue using stacks.
*push(x) -- Push element x to the back of queue.
*pop() -- Removes the element from in front of queue.
*peek() -- Get the front element.
*empty() -- Return whether the queue is empty.
**/


class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        a.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(!b.empty())
           b.pop();
        else
        {
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            b.pop();
        }
        
    }

    // Get the front element.
    int peek(void) {
        if(!b.empty())
          return b.top();
        else
        {
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            return b.top();
        }
        
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return (a.empty() && b.empty());
        
    }
private:
    stack<int> a,b;
};