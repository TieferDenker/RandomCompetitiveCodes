// Problem link: https://leetcode.com/problems/find-the-count-of-numbers-which-are-not-special/

class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int len = sqrt(r);
        vector<bool> prime(len+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i<=len;i++)
        {
            if(prime[i])
            {
                for(int j=i*i;j<=len;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<=len;i++)
        {
            if(prime[i])
            {
                int x=i*i;
                if(x>=l)
                    count++;
            }
        }
        return r-l+1-count;
    }
};