/**
*Determine whether an integer is a palindrome. Do this without extra space.
*/






class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        while(x)
        {
            int rem = x%10;
            s1.push(rem);
            q1.push(rem);
            x /= 10;
        }
        while(!s1.empty())
        {
            if(s1.top() != q1.front())
                return false;
            s1.pop();
            q1.pop();
        }
        return true;
        
        
    }
private:
    stack<int> s1;
    queue<int> q1;
    
};