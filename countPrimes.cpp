/**
*Count the number of prime numbers less than a non-negative number, n.
*/



class Solution {
public:
    int countPrimes(int n) {
      if(n <= 2)
        return 0;
     int count = 1;
     bool *isPrime = new bool[n];
     for(int i = 0; i < n; i++)
     {
         isPrime[i] = true;
     }
     
     for(int i = 3; i*i <= n; i += 2)
     {
         if(isPrime[i])       //if it is not prime, it must skip by before
         {
             for(int j = i*i; j < n; j += 2*i)   //j+i,j+3i and so on are even,so we skip
             {
                 isPrime[j] = false;
             }
         }
         
     }
     
     for(int i = 3; i < n; i += 2)
     {
         if(isPrime[i])
            count++;
     }
     return count;
    }
};