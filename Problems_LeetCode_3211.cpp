// Problem link: https://leetcode.com/problems/generate-binary-strings-without-adjacent-zeros/description/

class Solution {
public:
    vector<string> validStrings(int n) {
        if(n==1)
            return {"0","1"};
        else if(n==2)
            return {"01","10","11"};
        else if(n==3)
            return {"010","011","101","110","111"};
        else
        {
            vector<string> answer,temp;
            temp=validStrings(n-1);
            for(int i=0;i<temp.size();i++)
            {
                string x=temp[i];
                if(x[0]!='0')
                answer.push_back('0'+temp[i]);
            }
            for(int i=0;i<temp.size();i++)
            {
                answer.push_back('1'+temp[i]);
            }
            return answer;
        }
        return {""};
    }
};