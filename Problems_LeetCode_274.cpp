// Problem link: https://leetcode.com/problems/h-index/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i,l = citations.size();
        sort(citations.begin(),citations.end());
        for(i=l-1;i>=0;i--)
        {
            if(citations[i]<(l-i))
                break;
        }
        return l-i-1;
    }
};