/**请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，
*当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。
*当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"
**/




class Solution
{
public:
  //Insert one char from stringstream
    void Insert(char ch)
    {
        vec.push_back(ch);
     	mapdata[ch]++;    
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
    	vector<int>::iterator it;
        for(it = vec.begin();it!=vec.end();it++)
        {
            if(mapdata[*it] == 1)
                return *it;
        }
        return '#';
    }
    map<char,int> mapdata;
	vector<int> vec;
};