/**
*把只包含因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，但14不是，因为它包含因子7。 *习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。
*/





class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index <= 0)
            return 0;
    	int *uglyNumber = new int[index];
        uglyNumber[0] = 1;
        int* uglyNumber2 = uglyNumber;
        int* uglyNumber3 = uglyNumber;
        int* uglyNumber5 = uglyNumber;
        int uglyIndex = 1;
        while(uglyIndex < index)
        {
            int temp = Min(*uglyNumber2*2,*uglyNumber3*3,*uglyNumber5*5);
            uglyNumber[uglyIndex] = temp;
            while(*uglyNumber2*2 <= temp)
                uglyNumber2++;
            while(*uglyNumber3*3 <= temp)
                uglyNumber3++;
            while(*uglyNumber5*5 <= temp)
                uglyNumber5++;
            uglyIndex++;
        }
        int res = uglyNumber[uglyIndex-1];
        delete [] uglyNumber;
        return res;
    }
    int Min(int a, int b, int c)
    {
        int min = (a < b)?a:b;
        min = (min < c)?min:c;
        return min;
    }
};