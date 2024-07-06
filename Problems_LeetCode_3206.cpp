// Problem link: https://leetcode.com/problems/alternating-groups-i/

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        colors.push_back(colors[0]);
        colors.push_back(colors[1]);
        int n=colors.size(),count=0;
        for(int i=0;i<n-2;i++)
        {
            if(colors[i]!=colors[i+1] && colors[i+1]!=colors[i+2])
                count++;
        }
        return count;
    }
};