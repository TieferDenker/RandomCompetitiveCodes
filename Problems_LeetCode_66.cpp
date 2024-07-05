// Problem link: https://leetcode.com/problems/plus-one/description/?envType=study-plan-v2&envId=programming-skills

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]+1<=9)
            {
                digits[i]++;
                break;
            }
            else
            {
                digits[i]=0;
                if(i==0)
                    digits.insert(digits.begin(),1);
            }
        }
        return digits;
    }
};