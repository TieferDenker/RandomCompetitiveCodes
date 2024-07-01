// Problem link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=study-plan-v2&envId=programming-skills

// Solved Partially

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
            return -1;
        if(needle.size()==0)
            return -1;
        if(haystack.size()==needle.size())
        {
            if(haystack[0]!=needle[0])
                return -1;
        }
        int j,index,prev;
        bool flag,secflag;
        for(int i=0;i<haystack.size();i++)
        {
            j=0; flag=true; secflag=true;
            while(haystack[i]==needle[j])
            {
                if(flag)
                {
                    index = i;
                    flag = false;
                }
                i++; j++;
                if(j==needle.size())
                    return index;
                if(i>=haystack.size())
                    return -1;
                if((haystack[i]==needle[0]) && secflag)
                {
                    prev = i;
                    secflag = false;
                }
            }
            if(!secflag)
                i=prev-1;
        }
        return -1;
    }
};