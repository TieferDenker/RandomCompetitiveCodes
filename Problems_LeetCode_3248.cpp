// Problem link: https://leetcode.com/problems/snake-in-matrix/description/

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int u=0,d=0,r=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(commands[i]=="UP")
                u++;
            if(commands[i]=="DOWN")
                d++;
            if(commands[i]=="RIGHT")
                r++;
            if(commands[i]=="LEFT")
                l++;
        }
        return (d-u)*n+(r-l);
    }
};