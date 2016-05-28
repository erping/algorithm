/*Given a positive integer n, break it into the sum of at least two positive integers and maximize 
*the product of those integers. Return the maximum product you can get.
*For example, given n = 2, return 1 (2 = 1 + 1); given n = 10, return 36 (10 = 3 + 3 + 4).
*Note: you may assume that n is not less than 2.
*/



class Solution {
public:
    int integerBreak(int n) {
        int numOfThree = 0;
        if(n == 2 )
            return 1;
        if(n == 3)
            return 2;
        if(n%3 == 1)
        {
            numOfThree = n/3-1;
            return pow(3,numOfThree)*4;
        }
        if(n%3 == 2)
            return pow(3,n/3)*2;
        if(n%3 == 0)
            return pow(3,n/3);
     
        return 0;
    }
};