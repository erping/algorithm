/**
*Implement the following operations of a stack using queues.
*push(x) -- Push element x onto stack.
*pop() -- Removes the element on top of the stack.
*top() -- Get the top element.
*empty() -- Return whether the stack is empty.
*/


class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        q1.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        
    }

    // Get the top element.
    int top() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
       int res = q1.front();
       q2.push(res);
        q1.pop();
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return res;
    }

    // Return whether the stack is empty.
    bool empty() {
        return q1.empty();
    }
private:
    queue<int> q1,q2;
};