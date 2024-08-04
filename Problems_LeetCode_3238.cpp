// Problem link: https://leetcode.com/problems/find-the-number-of-winning-players/description/

class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int count=0;
        int s=pick.size();
        for(int i=0;i<n;i++)
        {
            vector<int> hm(11,0);
            for(int j=0;j<s;j++)
            {
                if(pick[j][0]==i)
                {
                    hm[pick[j][1]]++;
                }
            }
            for(int j=0;j<=10;j++)
            {
                if(hm[j]>i)
                {
                    count++;
                    break;
                }
            }
        }
        return count;
        
    }
};