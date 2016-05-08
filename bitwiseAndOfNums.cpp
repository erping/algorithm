/**
*Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND 
*of all numbers in this range, inclusive.For example, given the range [5, 7], you 
*should return 4.
*/



class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int trans = 0;
        while(m != n)
        {
            trans++;
            m = m>>1;
            n = n>>1;
        }
        return m<<trans;
       
    }
};